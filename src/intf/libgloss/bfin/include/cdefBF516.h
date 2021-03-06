/*
 * The authors hereby grant permission to use, copy, modify, distribute,
 * and license this software and its documentation for any purpose, provided
 * that existing copyright notices are retained in all copies and that this
 * notice is included verbatim in any distributions. No written agreement,
 * license, or royalty fee is required for any of the authorized uses.
 * Modifications to this software may be copyrighted by their authors
 * and need not follow the licensing terms described here, provided that
 * the new terms are clearly indicated on the first page of each file where
 * they apply.
 */

/*
** Copyright (C) 2006-2008 Analog Devices Inc., All Rights Reserved.
**
************************************************************************************
**
** This include file contains a list of macro "defines" to enable the programmer
** to use symbolic names for the ADSP-BF516 peripherals.
**
************************************************************************************
** System MMR Register Map
************************************************************************************/

#ifndef _CDEF_BF516_H
#define _CDEF_BF516_H

/* include all Core registers and bit definitions */
#include "libgloss/bfin/include/defBF516.h"

/* include core specific register pointer definitions */
#include "libgloss/bfin/include/cdef_LPBlackfin.h"

/* SYSTEM & MMR ADDRESS DEFINITIONS FOR ADSP-BF516 */

/* include cdefBF51x_base.h for the set of #defines that are common to all ADSP-BF51x processors */
#include "libgloss/bfin/include/cdefBF51x_base.h"

#ifdef _MISRA_RULES
#pragma diag(push)
#pragma diag(suppress:misra_rule_19_4:"some macro definitions not MISRA compliant")
#endif /* _MISRA_RULES */

/* The following are the #defines needed by ADSP-BF516 that are not in the common header */

/* 10/100 Ethernet Controller */
#define pEMAC_OPMODE            	((volatile unsigned long  *)EMAC_OPMODE)
#define pEMAC_ADDRLO            	((volatile unsigned long  *)EMAC_ADDRLO)
#define pEMAC_ADDRHI            	((volatile unsigned long  *)EMAC_ADDRHI)
#define pEMAC_HASHLO            	((volatile unsigned long  *)EMAC_HASHLO)
#define pEMAC_HASHHI            	((volatile unsigned long  *)EMAC_HASHHI)
#define pEMAC_STAADD            	((volatile unsigned long  *)EMAC_STAADD)
#define pEMAC_STADAT            	((volatile unsigned long  *)EMAC_STADAT)
#define pEMAC_FLC               	((volatile unsigned long  *)EMAC_FLC)
#define pEMAC_VLAN1             	((volatile unsigned long  *)EMAC_VLAN1)
#define pEMAC_VLAN2             	((volatile unsigned long  *)EMAC_VLAN2)
#define pEMAC_WKUP_CTL          	((volatile unsigned long  *)EMAC_WKUP_CTL)
#define pEMAC_WKUP_FFMSK0       	((volatile unsigned long  *)EMAC_WKUP_FFMSK0)
#define pEMAC_WKUP_FFMSK1       	((volatile unsigned long  *)EMAC_WKUP_FFMSK1)
#define pEMAC_WKUP_FFMSK2       	((volatile unsigned long  *)EMAC_WKUP_FFMSK2)
#define pEMAC_WKUP_FFMSK3       	((volatile unsigned long  *)EMAC_WKUP_FFMSK3)
#define pEMAC_WKUP_FFCMD        	((volatile unsigned long  *)EMAC_WKUP_FFCMD)
#define pEMAC_WKUP_FFOFF        	((volatile unsigned long  *)EMAC_WKUP_FFOFF)
#define pEMAC_WKUP_FFCRC0       	((volatile unsigned long  *)EMAC_WKUP_FFCRC0)
#define pEMAC_WKUP_FFCRC1       	((volatile unsigned long  *)EMAC_WKUP_FFCRC1)

#define pEMAC_SYSCTL            	((volatile unsigned long  *)EMAC_SYSCTL)
#define pEMAC_SYSTAT            	((volatile unsigned long  *)EMAC_SYSTAT)
#define pEMAC_RX_STAT           	((volatile unsigned long  *)EMAC_RX_STAT)
#define pEMAC_RX_STKY           	((volatile unsigned long  *)EMAC_RX_STKY)
#define pEMAC_RX_IRQE           	((volatile unsigned long  *)EMAC_RX_IRQE)
#define pEMAC_TX_STAT          	((volatile unsigned long  *)EMAC_TX_STAT)
#define pEMAC_TX_STKY          	((volatile unsigned long  *)EMAC_TX_STKY)
#define pEMAC_TX_IRQE           	((volatile unsigned long  *)EMAC_TX_IRQE)

#define pEMAC_MMC_CTL           	((volatile unsigned long  *)EMAC_MMC_CTL)
#define pEMAC_MMC_RIRQS         	((volatile unsigned long  *)EMAC_MMC_RIRQS)
#define pEMAC_MMC_RIRQE         	((volatile unsigned long  *)EMAC_MMC_RIRQE)
#define pEMAC_MMC_TIRQS         	((volatile unsigned long  *)EMAC_MMC_TIRQS)
#define pEMAC_MMC_TIRQE         	((volatile unsigned long  *)EMAC_MMC_TIRQE)

#define pEMAC_RXC_OK            	((volatile unsigned long  *)EMAC_RXC_OK)
#define pEMAC_RXC_FCS           	((volatile unsigned long  *)EMAC_RXC_FCS)
#define pEMAC_RXC_ALIGN         	((volatile unsigned long  *)EMAC_RXC_ALIGN)
#define pEMAC_RXC_OCTET         	((volatile unsigned long  *)EMAC_RXC_OCTET)
#define pEMAC_RXC_DMAOVF        	((volatile unsigned long  *)EMAC_RXC_DMAOVF)
#define pEMAC_RXC_UNICST        	((volatile unsigned long  *)EMAC_RXC_UNICST)
#define pEMAC_RXC_MULTI         	((volatile unsigned long  *)EMAC_RXC_MULTI)
#define pEMAC_RXC_BROAD         	((volatile unsigned long  *)EMAC_RXC_BROAD)
#define pEMAC_RXC_LNERRI        	((volatile unsigned long  *)EMAC_RXC_LNERRI)
#define pEMAC_RXC_LNERRO        	((volatile unsigned long  *)EMAC_RXC_LNERRO)
#define pEMAC_RXC_LONG          	((volatile unsigned long  *)EMAC_RXC_LONG)
#define pEMAC_RXC_MACCTL        	((volatile unsigned long  *)EMAC_RXC_MACCTL)
#define pEMAC_RXC_OPCODE        	((volatile unsigned long  *)EMAC_RXC_OPCODE)
#define pEMAC_RXC_PAUSE         	((volatile unsigned long  *)EMAC_RXC_PAUSE)
#define pEMAC_RXC_ALLFRM        	((volatile unsigned long  *)EMAC_RXC_ALLFRM)
#define pEMAC_RXC_ALLOCT        	((volatile unsigned long  *)EMAC_RXC_ALLOCT)
#define pEMAC_RXC_TYPED         	((volatile unsigned long  *)EMAC_RXC_TYPED)
#define pEMAC_RXC_SHORT         	((volatile unsigned long  *)EMAC_RXC_SHORT)
#define pEMAC_RXC_EQ64          	((volatile unsigned long  *)EMAC_RXC_EQ64)
#define pEMAC_RXC_LT128         	((volatile unsigned long  *)EMAC_RXC_LT128)
#define pEMAC_RXC_LT256         	((volatile unsigned long  *)EMAC_RXC_LT256)
#define pEMAC_RXC_LT512         	((volatile unsigned long  *)EMAC_RXC_LT512)
#define pEMAC_RXC_LT1024        	((volatile unsigned long  *)EMAC_RXC_LT1024)
#define pEMAC_RXC_GE1024        	((volatile unsigned long  *)EMAC_RXC_GE1024)

#define pEMAC_TXC_OK            	((volatile unsigned long  *)EMAC_TXC_OK)
#define pEMAC_TXC_1COL          	((volatile unsigned long  *)EMAC_TXC_1COL)
#define pEMAC_TXC_GT1COL        	((volatile unsigned long  *)EMAC_TXC_GT1COL)
#define pEMAC_TXC_OCTET         	((volatile unsigned long  *)EMAC_TXC_OCTET)
#define pEMAC_TXC_DEFER         	((volatile unsigned long  *)EMAC_TXC_DEFER)
#define pEMAC_TXC_LATECL        	((volatile unsigned long  *)EMAC_TXC_LATECL)
#define pEMAC_TXC_XS_COL        	((volatile unsigned long  *)EMAC_TXC_XS_COL)
#define pEMAC_TXC_DMAUND        	((volatile unsigned long  *)EMAC_TXC_DMAUND)
#define pEMAC_TXC_CRSERR        	((volatile unsigned long  *)EMAC_TXC_CRSERR)
#define pEMAC_TXC_UNICST        	((volatile unsigned long  *)EMAC_TXC_UNICST)
#define pEMAC_TXC_MULTI         	((volatile unsigned long  *)EMAC_TXC_MULTI)
#define pEMAC_TXC_BROAD         	((volatile unsigned long  *)EMAC_TXC_BROAD)
#define pEMAC_TXC_XS_DFR        	((volatile unsigned long  *)EMAC_TXC_XS_DFR)
#define pEMAC_TXC_MACCTL        	((volatile unsigned long  *)EMAC_TXC_MACCTL)
#define pEMAC_TXC_ALLFRM        	((volatile unsigned long  *)EMAC_TXC_ALLFRM)
#define pEMAC_TXC_ALLOCT        	((volatile unsigned long  *)EMAC_TXC_ALLOCT)
#define pEMAC_TXC_EQ64          	((volatile unsigned long  *)EMAC_TXC_EQ64)
#define pEMAC_TXC_LT128         	((volatile unsigned long  *)EMAC_TXC_LT128)
#define pEMAC_TXC_LT256         	((volatile unsigned long  *)EMAC_TXC_LT256)
#define pEMAC_TXC_LT512         	((volatile unsigned long  *)EMAC_TXC_LT512)
#define pEMAC_TXC_LT1024        	((volatile unsigned long  *)EMAC_TXC_LT1024)
#define pEMAC_TXC_GE1024        	((volatile unsigned long  *)EMAC_TXC_GE1024)
#define pEMAC_TXC_ABORT         	((volatile unsigned long  *)EMAC_TXC_ABORT)


/* SDH Registers (0xFFC03800 - 0xFFC03CFF)*/
#define pSDH_PWR_CTL			((volatile unsigned short *)SDH_PWR_CTL)
#define pSDH_CLK_CTL			((volatile unsigned short *)SDH_CLK_CTL)
#define pSDH_ARGUMENT			((volatile unsigned long  *)SDH_ARGUMENT)
#define pSDH_COMMAND			((volatile unsigned short *)SDH_COMMAND)
#define pSDH_RESP_CMD			((volatile unsigned short *)SDH_RESP_CMD)
#define pSDH_RESPONSE0			((volatile unsigned long  *)SDH_RESPONSE0)
#define pSDH_RESPONSE1			((volatile unsigned long  *)SDH_RESPONSE1)
#define pSDH_RESPONSE2			((volatile unsigned long  *)SDH_RESPONSE2)
#define pSDH_RESPONSE3			((volatile unsigned long  *)SDH_RESPONSE3)
#define pSDH_DATA_TIMER			((volatile unsigned long  *)SDH_DATA_TIMER)
#define pSDH_DATA_LGTH			((volatile unsigned short *)SDH_DATA_LGTH)
#define pSDH_DATA_CTL			((volatile unsigned short *)SDH_DATA_CTL)
#define pSDH_DATA_CNT			((volatile unsigned short *)SDH_DATA_CNT)
#define pSDH_STATUS			((volatile unsigned long  *)SDH_STATUS)
#define pSDH_STATUS_CLR			((volatile unsigned short *)SDH_STATUS_CLR)
#define pSDH_MASK0			((volatile unsigned long  *)SDH_MASK0)
#define pSDH_MASK1			((volatile unsigned long  *)SDH_MASK1)
#define pSDH_FIFO_CNT			((volatile unsigned short *)SDH_FIFO_CNT)
#define pSDH_FIFO				((volatile unsigned long  *)SDH_FIFO)
#define pSDH_E_STATUS			((volatile unsigned short *)SDH_E_STATUS)
#define pSDH_E_MASK			((volatile unsigned short *)SDH_E_MASK)
#define pSDH_CFG				((volatile unsigned short *)SDH_CFG)
#define pSDH_RD_WAIT_EN			((volatile unsigned short *)SDH_RD_WAIT_EN)
#define pSDH_PID0				((volatile unsigned short *)SDH_PID0)
#define pSDH_PID1				((volatile unsigned short *)SDH_PID1)
#define pSDH_PID2				((volatile unsigned short *)SDH_PID2)
#define pSDH_PID3				((volatile unsigned short *)SDH_PID3)
#define pSDH_PID4				((volatile unsigned short *)SDH_PID4)
#define pSDH_PID5				((volatile unsigned short *)SDH_PID5)
#define pSDH_PID6				((volatile unsigned short *)SDH_PID6)
#define pSDH_PID7				((volatile unsigned short *)SDH_PID7)


/* RSI Registers (0xFFC03800 - 0xFFC03CFF)*/
#define pRSI_PWR_CONTROL		((volatile unsigned short *)RSI_PWR_CONTROL)
#define pRSI_CLK_CONTROL		((volatile unsigned short *)RSI_CLK_CONTROL)
#define pRSI_ARGUMENT			((volatile unsigned long  *)RSI_ARGUMENT)
#define pRSI_COMMAND			((volatile unsigned short *)RSI_COMMAND)
#define pRSI_RESP_CMD			((volatile unsigned short *)RSI_RESP_CMD)
#define pRSI_RESPONSE0			((volatile unsigned long  *)RSI_RESPONSE0)
#define pRSI_RESPONSE1			((volatile unsigned long  *)RSI_RESPONSE1)
#define pRSI_RESPONSE2			((volatile unsigned long  *)RSI_RESPONSE2)
#define pRSI_RESPONSE3			((volatile unsigned long  *)RSI_RESPONSE3)
#define pRSI_DATA_TIMER			((volatile unsigned long  *)RSI_DATA_TIMER)
#define pRSI_DATA_LGTH			((volatile unsigned short *)RSI_DATA_LGTH)
#define pRSI_DATA_CONTROL		((volatile unsigned short *)RSI_DATA_CONTROL)
#define pRSI_DATA_CNT			((volatile unsigned short *)RSI_DATA_CNT)
#define pRSI_STATUS			((volatile unsigned long  *)RSI_STATUS)
#define pRSI_STATUSCL			((volatile unsigned short *)RSI_STATUSCL)
#define pRSI_MASK0			((volatile unsigned long  *)RSI_MASK0)
#define pRSI_MASK1			((volatile unsigned long  *)RSI_MASK1)
#define pRSI_FIFO_CNT			((volatile unsigned short *)RSI_FIFO_CNT)
#define pRSI_CEATA_CONTROL		((volatile unsigned short *)RSI_CEATA_CONTROL)
#define pRSI_FIFO				((volatile unsigned long  *)RSI_FIFO)
#define pRSI_ESTAT			((volatile unsigned short *)RSI_ESTAT)
#define pRSI_EMASK			((volatile unsigned short *)RSI_EMASK)
#define pRSI_CONFIG			((volatile unsigned short *)RSI_CONFIG)
#define pRSI_RD_WAIT_EN			((volatile unsigned short *)RSI_RD_WAIT_EN)
#define pRSI_PID0				((volatile unsigned short *)RSI_PID0)
#define pRSI_PID1				((volatile unsigned short *)RSI_PID1)
#define pRSI_PID2				((volatile unsigned short *)RSI_PID2)
#define pRSI_PID3				((volatile unsigned short *)RSI_PID3)

#ifdef _MISRA_RULES
#pragma diag(pop)
#endif /* _MISRA_RULES */

#endif /* _CDEF_BF516_H */
