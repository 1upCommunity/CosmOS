/*
 *  Written by Joel Sherrill <joel.sherrill@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2013, 2015.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 */

#ifndef _SYS__PTHREADTYPES_H_
#define	_SYS__PTHREADTYPES_H_

#if defined(_POSIX_THREADS)

#include "newlib/libc/sys/rtems/include/sys/sys/sched.h"
#include "newlib/libc/sys/rtems/include/sys/sys/cpuset.h"
#include "newlib/libc/sys/rtems/include/sys/sys/lock.h"

/*
 *  2.5 Primitive System Data Types,  P1003.1c/D10, p. 19.
 */

typedef __uint32_t pthread_t;            /* identify a thread */

/* P1003.1c/D10, p. 118-119 */
#define PTHREAD_SCOPE_PROCESS 0
#define PTHREAD_SCOPE_SYSTEM  1

/* P1003.1c/D10, p. 111 */
#define PTHREAD_INHERIT_SCHED  1      /* scheduling policy and associated */
                                      /*   attributes are inherited from */
                                      /*   the calling thread. */
#define PTHREAD_EXPLICIT_SCHED 2      /* set from provided attribute object */

/* P1003.1c/D10, p. 141 */
#define PTHREAD_CREATE_DETACHED 0
#define PTHREAD_CREATE_JOINABLE  1

typedef struct {
  int is_initialized;
  void *stackaddr;
  int stacksize;
  int contentionscope;
  int inheritsched;
  int schedpolicy;
  struct sched_param schedparam;
  size_t guardsize;

  /* P1003.4b/D8, p. 54 adds cputime_clock_allowed attribute.  */
#if defined(_POSIX_THREAD_CPUTIME)
  int  cputime_clock_allowed;  /* see time.h */
#endif
  int  detachstate;
  size_t affinitysetsize;
  cpu_set_t *affinityset;
  cpu_set_t affinitysetpreallocated;
} pthread_attr_t;

#if defined(_POSIX_THREAD_PROCESS_SHARED)
/* NOTE: P1003.1c/D10, p. 81 defines following values for process_shared.  */

#define PTHREAD_PROCESS_PRIVATE 0 /* visible within only the creating process */
#define PTHREAD_PROCESS_SHARED  1 /* visible too all processes with access to */
                                  /*   the memory where the resource is */
                                  /*   located */
#endif

#if defined(_POSIX_THREAD_PRIO_PROTECT)
/* Mutexes */

/* Values for blocking protocol. */

#define PTHREAD_PRIO_NONE    0
#define PTHREAD_PRIO_INHERIT 1
#define PTHREAD_PRIO_PROTECT 2
#endif

#if defined(_UNIX98_THREAD_MUTEX_ATTRIBUTES)

/* Values for mutex type */

/* The following defines are part of the X/Open System Interface (XSI). */

/*
 * This type of mutex does not detect deadlock. A thread attempting to
 * relock this mutex without first unlocking it shall deadlock. Attempting
 * to unlock a mutex locked by a different thread results in undefined
 * behavior.  Attempting to unlock an unlocked mutex results in undefined
 * behavior.
 */
#define PTHREAD_MUTEX_NORMAL     0

/*
 * A thread attempting to relock this mutex without first unlocking
 * it shall succeed in locking the mutex.  The relocking deadlock which
 * can occur with mutexes of type PTHREAD_MUTEX_NORMAL cannot occur with
 * this type of mutex.  Multiple locks of this mutex shall require the
 * same number of unlocks to release the mutex before another thread can
 * acquire the mutex. A thread attempting to unlock a mutex which another
 * thread has locked shall return with an error.  A thread attempting to
 * unlock an unlocked mutex shall return with an error.
 */
#define PTHREAD_MUTEX_RECURSIVE  1

/*
 * This type of mutex provides error checking. A thread attempting
 * to relock this mutex without first unlocking it shall return with an
 * error. A thread attempting to unlock a mutex which another thread has
 * locked shall return with an error. A thread attempting to unlock an
 * unlocked mutex shall return with an error.
 */
#define PTHREAD_MUTEX_ERRORCHECK 2

/*
 * Attempting to recursively lock a mutex of this type results
 * in undefined behavior. Attempting to unlock a mutex of this type
 * which was not locked by the calling thread results in undefined
 * behavior. Attempting to unlock a mutex of this type which is not locked
 * results in undefined behavior. An implementation may map this mutex to
 * one of the other mutex types.
 */
#define PTHREAD_MUTEX_DEFAULT    3

#endif /* !defined(_UNIX98_THREAD_MUTEX_ATTRIBUTES) */

struct _Chain_Node {
  struct _Chain_Node *_next;
  struct _Chain_Node *_previous;
};

struct _RBTree_Node {
  struct _RBTree_Node *_left;
  struct _RBTree_Node *_right;
  struct _RBTree_Node *_parent;
  int _color;
};

struct _Priority_Node {
  union {
    struct _RBTree_Node _RBTree;
    struct _Chain_Node _Chain;
  } _Node;
  __uint64_t _priority;
};

typedef struct {
  unsigned long _flags;
  struct _Mutex_recursive_Control _Recursive;
  struct _Priority_Node _Priority_ceiling;
  const struct _Scheduler_Control *_scheduler;
} pthread_mutex_t;

#define _PTHREAD_MUTEX_INITIALIZER \
  { 0, _MUTEX_RECURSIVE_INITIALIZER, { { { 0, 0, 0, 0 } }, 0 }, 0 }

typedef struct {
  int   is_initialized;
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int   process_shared;  /* allow mutex to be shared amongst processes */
#endif
#if defined(_POSIX_THREAD_PRIO_PROTECT)
  int   prio_ceiling;
  int   protocol;
#endif
#if defined(_UNIX98_THREAD_MUTEX_ATTRIBUTES)
  int type;
#endif
  int   recursive;
} pthread_mutexattr_t;

/* Condition Variables */

typedef struct {
  unsigned long _flags;
  struct _Thread_queue_Queue _Queue;
  pthread_mutex_t *_mutex;
} pthread_cond_t;

#define _PTHREAD_COND_INITIALIZER { 0, _THREAD_QUEUE_INITIALIZER, 0 }

typedef struct {
  int      is_initialized;
  clock_t  clock;             /* specifiy clock for timeouts */
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int      process_shared;    /* allow this to be shared amongst processes */
#endif
} pthread_condattr_t;         /* a condition attribute object */

/* Keys */

typedef __uint32_t pthread_key_t;        /* thread-specific data keys */

typedef struct {
  unsigned char _flags;
} pthread_once_t;

#define _PTHREAD_ONCE_INIT { 0 }

#endif /* defined(_POSIX_THREADS) */

/* POSIX Barrier Types */

#if defined(_POSIX_BARRIERS)
typedef struct {
  unsigned long _flags;
  struct _Thread_queue_Queue _Queue;
  unsigned int _count;
  unsigned int _waiting_threads;
} pthread_barrier_t;

typedef struct {
  int   is_initialized;  /* is this structure initialized? */
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int   process_shared;       /* allow this to be shared amongst processes */
#endif
} pthread_barrierattr_t;
#endif /* defined(_POSIX_BARRIERS) */

/* POSIX Spin Lock Types */

#if defined(_POSIX_SPIN_LOCKS)
typedef struct {
  struct _Ticket_lock_Control _Lock;
  __uint32_t                  _interrupt_state;
} pthread_spinlock_t;                        /* POSIX Spin Lock Object */
#endif /* defined(_POSIX_SPIN_LOCKS) */

/* POSIX Reader/Writer Lock Types */

#if defined(_POSIX_READER_WRITER_LOCKS)
typedef struct {
  unsigned long _flags;
  struct _Thread_queue_Queue _Queue;
  unsigned int _current_state;
  unsigned int _number_of_readers;
} pthread_rwlock_t;

#define _PTHREAD_RWLOCK_INITIALIZER { 0, _THREAD_QUEUE_INITIALIZER, 0, 0 }

typedef struct {
  int   is_initialized;       /* is this structure initialized? */
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int   process_shared;       /* allow this to be shared amongst processes */
#endif
} pthread_rwlockattr_t;
#endif /* defined(_POSIX_READER_WRITER_LOCKS) */

#endif /* ! _SYS__PTHREADTYPES_H_ */
