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
** Copyright (C) 2004-2009 Analog Devices Inc., All Rights Reserved.
**
************************************************************************************
**
** This include file contains a list of macro "defines" to enable the programmer
** to use symbolic names for register-access and bit-manipulation.
**
**/
#ifndef _DEF_BF534_H
#define _DEF_BF534_H

/* Include all Core registers and bit definitions */
#include "libgloss/bfin/include/def_LPBlackfin.h"

#ifdef _MISRA_RULES
#pragma diag(push)
#pragma diag(suppress:misra_rule_19_4:"ADI header allows any substitution")
#pragma diag(suppress:misra_rule_19_7:"ADI header allows function macros")
#include "libgloss/bfin/include/stdint.h"
#endif /* _MISRA_RULES */

/************************************************************************************
** System MMR Register Map
*************************************************************************************/
/* Clock and System Control	(0xFFC00000 - 0xFFC000FF)								*/
#define PLL_CTL				0xFFC00000	/* PLL Control Register						*/
#define PLL_DIV				0xFFC00004	/* PLL Divide Register						*/
#define VR_CTL				0xFFC00008	/* Voltage Regulator Control Register		*/
#define PLL_STAT			0xFFC0000C	/* PLL Status Register						*/
#define PLL_LOCKCNT			0xFFC00010	/* PLL Lock Count Register					*/
#define CHIPID        0xFFC00014  /* Device ID Register */


/* System Interrupt Controller (0xFFC00100 - 0xFFC001FF)							*/
#define SWRST				0xFFC00100	/* Software Reset Register					*/
#define SYSCR				0xFFC00104	/* System Configuration Register			*/
#define SIC_IMASK			0xFFC0010C	/* Interrupt Mask Register					*/
#define SIC_IAR0			0xFFC00110	/* Interrupt Assignment Register 0			*/
#define SIC_IAR1			0xFFC00114	/* Interrupt Assignment Register 1			*/
#define SIC_IAR2			0xFFC00118	/* Interrupt Assignment Register 2			*/
#define SIC_IAR3			0xFFC0011C	/* Interrupt Assignment Register 3			*/
#define SIC_ISR				0xFFC00120	/* Interrupt Status Register				*/
#define SIC_IWR				0xFFC00124	/* Interrupt Wakeup Register				*/


/* Watchdog Timer			(0xFFC00200 - 0xFFC002FF)								*/
#define WDOG_CTL			0xFFC00200	/* Watchdog Control Register				*/
#define WDOG_CNT			0xFFC00204	/* Watchdog Count Register					*/
#define WDOG_STAT			0xFFC00208	/* Watchdog Status Register					*/


/* Real Time Clock		(0xFFC00300 - 0xFFC003FF)									*/
#define RTC_STAT			0xFFC00300	/* RTC Status Register						*/
#define RTC_ICTL			0xFFC00304	/* RTC Interrupt Control Register			*/
#define RTC_ISTAT			0xFFC00308	/* RTC Interrupt Status Register			*/
#define RTC_SWCNT			0xFFC0030C	/* RTC Stopwatch Count Register				*/
#define RTC_ALARM			0xFFC00310	/* RTC Alarm Time Register					*/
#define RTC_FAST			0xFFC00314	/* RTC Prescaler Enable Register			*/
#define RTC_PREN			0xFFC00314	/* RTC Prescaler Enable Alternate Macro		*/


/* UART0 Controller		(0xFFC00400 - 0xFFC004FF)									*/
#define UART0_THR			0xFFC00400	/* Transmit Holding register				*/
#define UART0_RBR			0xFFC00400	/* Receive Buffer register					*/
#define UART0_DLL			0xFFC00400	/* Divisor Latch (Low-Byte)					*/
#define UART0_IER			0xFFC00404	/* Interrupt Enable Register				*/
#define UART0_DLH			0xFFC00404	/* Divisor Latch (High-Byte)				*/
#define UART0_IIR			0xFFC00408	/* Interrupt Identification Register		*/
#define UART0_LCR			0xFFC0040C	/* Line Control Register					*/
#define UART0_MCR			0xFFC00410	/* Modem Control Register					*/
#define UART0_LSR			0xFFC00414	/* Line Status Register						*/
#define UART0_SCR			0xFFC0041C	/* SCR Scratch Register						*/
#define UART0_GCTL			0xFFC00424	/* Global Control Register					*/


/* SPI Controller			(0xFFC00500 - 0xFFC005FF)								*/
#define SPI_CTL				0xFFC00500	/* SPI Control Register						*/
#define SPI_FLG				0xFFC00504	/* SPI Flag register						*/
#define SPI_STAT			0xFFC00508	/* SPI Status register						*/
#define SPI_TDBR			0xFFC0050C	/* SPI Transmit Data Buffer Register		*/
#define SPI_RDBR			0xFFC00510	/* SPI Receive Data Buffer Register			*/
#define SPI_BAUD			0xFFC00514	/* SPI Baud rate Register					*/
#define SPI_SHADOW			0xFFC00518	/* SPI_RDBR Shadow Register					*/


/* TIMER0-7 Registers		(0xFFC00600 - 0xFFC006FF)								*/
#define TIMER0_CONFIG		0xFFC00600	/* Timer 0 Configuration Register			*/
#define TIMER0_COUNTER		0xFFC00604	/* Timer 0 Counter Register					*/
#define TIMER0_PERIOD		0xFFC00608	/* Timer 0 Period Register					*/
#define TIMER0_WIDTH		0xFFC0060C	/* Timer 0 Width Register					*/

#define TIMER1_CONFIG		0xFFC00610	/* Timer 1 Configuration Register  			*/
#define TIMER1_COUNTER		0xFFC00614	/* Timer 1 Counter Register        			*/
#define TIMER1_PERIOD		0xFFC00618	/* Timer 1 Period Register         			*/
#define TIMER1_WIDTH		0xFFC0061C	/* Timer 1 Width Register          			*/

#define TIMER2_CONFIG		0xFFC00620	/* Timer 2 Configuration Register  			*/
#define TIMER2_COUNTER		0xFFC00624	/* Timer 2 Counter Register        			*/
#define TIMER2_PERIOD		0xFFC00628	/* Timer 2 Period Register         			*/
#define TIMER2_WIDTH		0xFFC0062C	/* Timer 2 Width Register          			*/

#define TIMER3_CONFIG		0xFFC00630	/* Timer 3 Configuration Register			*/
#define TIMER3_COUNTER		0xFFC00634	/* Timer 3 Counter Register					*/
#define TIMER3_PERIOD		0xFFC00638	/* Timer 3 Period Register					*/
#define TIMER3_WIDTH		0xFFC0063C	/* Timer 3 Width Register					*/

#define TIMER4_CONFIG		0xFFC00640	/* Timer 4 Configuration Register  			*/
#define TIMER4_COUNTER		0xFFC00644	/* Timer 4 Counter Register        			*/
#define TIMER4_PERIOD		0xFFC00648	/* Timer 4 Period Register         			*/
#define TIMER4_WIDTH		0xFFC0064C	/* Timer 4 Width Register          			*/

#define TIMER5_CONFIG		0xFFC00650	/* Timer 5 Configuration Register  			*/
#define TIMER5_COUNTER		0xFFC00654	/* Timer 5 Counter Register        			*/
#define TIMER5_PERIOD		0xFFC00658	/* Timer 5 Period Register         			*/
#define TIMER5_WIDTH		0xFFC0065C	/* Timer 5 Width Register          			*/

#define TIMER6_CONFIG		0xFFC00660	/* Timer 6 Configuration Register  			*/
#define TIMER6_COUNTER		0xFFC00664	/* Timer 6 Counter Register        			*/
#define TIMER6_PERIOD		0xFFC00668	/* Timer 6 Period Register         			*/
#define TIMER6_WIDTH		0xFFC0066C	/* Timer 6 Width Register          			*/

#define TIMER7_CONFIG		0xFFC00670	/* Timer 7 Configuration Register  			*/
#define TIMER7_COUNTER		0xFFC00674	/* Timer 7 Counter Register        			*/
#define TIMER7_PERIOD		0xFFC00678	/* Timer 7 Period Register         			*/
#define TIMER7_WIDTH		0xFFC0067C	/* Timer 7 Width Register       			*/

#define TIMER_ENABLE		0xFFC00680	/* Timer Enable Register					*/
#define TIMER_DISABLE		0xFFC00684	/* Timer Disable Register					*/
#define TIMER_STATUS		0xFFC00688	/* Timer Status Register					*/


/* General Purpose I/O Port F (0xFFC00700 - 0xFFC007FF)												*/
#define PORTFIO					0xFFC00700	/* Port F I/O Pin State Specify Register				*/
#define PORTFIO_CLEAR			0xFFC00704	/* Port F I/O Peripheral Interrupt Clear Register		*/
#define PORTFIO_SET				0xFFC00708	/* Port F I/O Peripheral Interrupt Set Register			*/
#define PORTFIO_TOGGLE			0xFFC0070C	/* Port F I/O Pin State Toggle Register					*/
#define PORTFIO_MASKA			0xFFC00710	/* Port F I/O Mask State Specify Interrupt A Register	*/
#define PORTFIO_MASKA_CLEAR		0xFFC00714	/* Port F I/O Mask Disable Interrupt A Register			*/
#define PORTFIO_MASKA_SET		0xFFC00718	/* Port F I/O Mask Enable Interrupt A Register			*/
#define PORTFIO_MASKA_TOGGLE	0xFFC0071C	/* Port F I/O Mask Toggle Enable Interrupt A Register	*/
#define PORTFIO_MASKB			0xFFC00720	/* Port F I/O Mask State Specify Interrupt B Register	*/
#define PORTFIO_MASKB_CLEAR		0xFFC00724	/* Port F I/O Mask Disable Interrupt B Register			*/
#define PORTFIO_MASKB_SET		0xFFC00728	/* Port F I/O Mask Enable Interrupt B Register			*/
#define PORTFIO_MASKB_TOGGLE	0xFFC0072C	/* Port F I/O Mask Toggle Enable Interrupt B Register	*/
#define PORTFIO_DIR				0xFFC00730	/* Port F I/O Direction Register						*/
#define PORTFIO_POLAR			0xFFC00734	/* Port F I/O Source Polarity Register					*/
#define PORTFIO_EDGE			0xFFC00738	/* Port F I/O Source Sensitivity Register				*/
#define PORTFIO_BOTH			0xFFC0073C	/* Port F I/O Set on BOTH Edges Register				*/
#define PORTFIO_INEN			0xFFC00740	/* Port F I/O Input Enable Register 					*/


/* SPORT0 Controller		(0xFFC00800 - 0xFFC008FF)										*/
#define SPORT0_TCR1			0xFFC00800	/* SPORT0 Transmit Configuration 1 Register			*/
#define SPORT0_TCR2			0xFFC00804	/* SPORT0 Transmit Configuration 2 Register			*/
#define SPORT0_TCLKDIV		0xFFC00808	/* SPORT0 Transmit Clock Divider					*/
#define SPORT0_TFSDIV		0xFFC0080C	/* SPORT0 Transmit Frame Sync Divider				*/
#define SPORT0_TX			0xFFC00810	/* SPORT0 TX Data Register							*/
#define SPORT0_RX			0xFFC00818	/* SPORT0 RX Data Register							*/
#define SPORT0_RCR1			0xFFC00820	/* SPORT0 Transmit Configuration 1 Register			*/
#define SPORT0_RCR2			0xFFC00824	/* SPORT0 Transmit Configuration 2 Register			*/
#define SPORT0_RCLKDIV		0xFFC00828	/* SPORT0 Receive Clock Divider						*/
#define SPORT0_RFSDIV		0xFFC0082C	/* SPORT0 Receive Frame Sync Divider				*/
#define SPORT0_STAT			0xFFC00830	/* SPORT0 Status Register							*/
#define SPORT0_CHNL			0xFFC00834	/* SPORT0 Current Channel Register					*/
#define SPORT0_MCMC1		0xFFC00838	/* SPORT0 Multi-Channel Configuration Register 1	*/
#define SPORT0_MCMC2		0xFFC0083C	/* SPORT0 Multi-Channel Configuration Register 2	*/
#define SPORT0_MTCS0		0xFFC00840	/* SPORT0 Multi-Channel Transmit Select Register 0	*/
#define SPORT0_MTCS1		0xFFC00844	/* SPORT0 Multi-Channel Transmit Select Register 1	*/
#define SPORT0_MTCS2		0xFFC00848	/* SPORT0 Multi-Channel Transmit Select Register 2	*/
#define SPORT0_MTCS3		0xFFC0084C	/* SPORT0 Multi-Channel Transmit Select Register 3	*/
#define SPORT0_MRCS0		0xFFC00850	/* SPORT0 Multi-Channel Receive Select Register 0	*/
#define SPORT0_MRCS1		0xFFC00854	/* SPORT0 Multi-Channel Receive Select Register 1	*/
#define SPORT0_MRCS2		0xFFC00858	/* SPORT0 Multi-Channel Receive Select Register 2	*/
#define SPORT0_MRCS3		0xFFC0085C	/* SPORT0 Multi-Channel Receive Select Register 3	*/


/* SPORT1 Controller		(0xFFC00900 - 0xFFC009FF)										*/
#define SPORT1_TCR1			0xFFC00900	/* SPORT1 Transmit Configuration 1 Register			*/
#define SPORT1_TCR2			0xFFC00904	/* SPORT1 Transmit Configuration 2 Register			*/
#define SPORT1_TCLKDIV		0xFFC00908	/* SPORT1 Transmit Clock Divider					*/
#define SPORT1_TFSDIV		0xFFC0090C	/* SPORT1 Transmit Frame Sync Divider				*/
#define SPORT1_TX			0xFFC00910	/* SPORT1 TX Data Register							*/
#define SPORT1_RX			0xFFC00918	/* SPORT1 RX Data Register							*/
#define SPORT1_RCR1			0xFFC00920	/* SPORT1 Transmit Configuration 1 Register			*/
#define SPORT1_RCR2			0xFFC00924	/* SPORT1 Transmit Configuration 2 Register			*/
#define SPORT1_RCLKDIV		0xFFC00928	/* SPORT1 Receive Clock Divider						*/
#define SPORT1_RFSDIV		0xFFC0092C	/* SPORT1 Receive Frame Sync Divider				*/
#define SPORT1_STAT			0xFFC00930	/* SPORT1 Status Register							*/
#define SPORT1_CHNL			0xFFC00934	/* SPORT1 Current Channel Register					*/
#define SPORT1_MCMC1		0xFFC00938	/* SPORT1 Multi-Channel Configuration Register 1	*/
#define SPORT1_MCMC2		0xFFC0093C	/* SPORT1 Multi-Channel Configuration Register 2	*/
#define SPORT1_MTCS0		0xFFC00940	/* SPORT1 Multi-Channel Transmit Select Register 0	*/
#define SPORT1_MTCS1		0xFFC00944	/* SPORT1 Multi-Channel Transmit Select Register 1	*/
#define SPORT1_MTCS2		0xFFC00948	/* SPORT1 Multi-Channel Transmit Select Register 2	*/
#define SPORT1_MTCS3		0xFFC0094C	/* SPORT1 Multi-Channel Transmit Select Register 3	*/
#define SPORT1_MRCS0		0xFFC00950	/* SPORT1 Multi-Channel Receive Select Register 0	*/
#define SPORT1_MRCS1		0xFFC00954	/* SPORT1 Multi-Channel Receive Select Register 1	*/
#define SPORT1_MRCS2		0xFFC00958	/* SPORT1 Multi-Channel Receive Select Register 2	*/
#define SPORT1_MRCS3		0xFFC0095C	/* SPORT1 Multi-Channel Receive Select Register 3	*/


/* External Bus Interface Unit (0xFFC00A00 - 0xFFC00AFF)								*/
#define EBIU_AMGCTL			0xFFC00A00	/* Asynchronous Memory Global Control Register	*/
#define EBIU_AMBCTL0		0xFFC00A04	/* Asynchronous Memory Bank Control Register 0	*/
#define EBIU_AMBCTL1		0xFFC00A08	/* Asynchronous Memory Bank Control Register 1	*/
#define EBIU_SDGCTL			0xFFC00A10	/* SDRAM Global Control Register				*/
#define EBIU_SDBCTL			0xFFC00A14	/* SDRAM Bank Control Register					*/
#define EBIU_SDRRC			0xFFC00A18	/* SDRAM Refresh Rate Control Register			*/
#define EBIU_SDSTAT			0xFFC00A1C	/* SDRAM Status Register						*/


/* DMA Traffic Control Registers													*/
#define DMA_TC_PER			0xFFC00B0C	/* Traffic Control Periods Register			*/
#define DMA_TC_CNT			0xFFC00B10	/* Traffic Control Current Counts Register	*/

/* Alternate deprecated register names (below) provided for backwards code compatibility */
#define DMA_TCPER			0xFFC00B0C	/* Traffic Control Periods Register			*/
#define DMA_TCCNT			0xFFC00B10	/* Traffic Control Current Counts Register	*/

/* DMA Controller (0xFFC00C00 - 0xFFC00FFF)															*/
#define DMA0_NEXT_DESC_PTR		0xFFC00C00	/* DMA Channel 0 Next Descriptor Pointer Register		*/
#define DMA0_START_ADDR			0xFFC00C04	/* DMA Channel 0 Start Address Register					*/
#define DMA0_CONFIG				0xFFC00C08	/* DMA Channel 0 Configuration Register					*/
#define DMA0_X_COUNT			0xFFC00C10	/* DMA Channel 0 X Count Register						*/
#define DMA0_X_MODIFY			0xFFC00C14	/* DMA Channel 0 X Modify Register						*/
#define DMA0_Y_COUNT			0xFFC00C18	/* DMA Channel 0 Y Count Register						*/
#define DMA0_Y_MODIFY			0xFFC00C1C	/* DMA Channel 0 Y Modify Register						*/
#define DMA0_CURR_DESC_PTR		0xFFC00C20	/* DMA Channel 0 Current Descriptor Pointer Register	*/
#define DMA0_CURR_ADDR			0xFFC00C24	/* DMA Channel 0 Current Address Register				*/
#define DMA0_IRQ_STATUS			0xFFC00C28	/* DMA Channel 0 Interrupt/Status Register				*/
#define DMA0_PERIPHERAL_MAP		0xFFC00C2C	/* DMA Channel 0 Peripheral Map Register				*/
#define DMA0_CURR_X_COUNT		0xFFC00C30	/* DMA Channel 0 Current X Count Register				*/
#define DMA0_CURR_Y_COUNT		0xFFC00C38	/* DMA Channel 0 Current Y Count Register				*/

#define DMA1_NEXT_DESC_PTR		0xFFC00C40	/* DMA Channel 1 Next Descriptor Pointer Register		*/
#define DMA1_START_ADDR			0xFFC00C44	/* DMA Channel 1 Start Address Register					*/
#define DMA1_CONFIG				0xFFC00C48	/* DMA Channel 1 Configuration Register					*/
#define DMA1_X_COUNT			0xFFC00C50	/* DMA Channel 1 X Count Register						*/
#define DMA1_X_MODIFY			0xFFC00C54	/* DMA Channel 1 X Modify Register						*/
#define DMA1_Y_COUNT			0xFFC00C58	/* DMA Channel 1 Y Count Register						*/
#define DMA1_Y_MODIFY			0xFFC00C5C	/* DMA Channel 1 Y Modify Register						*/
#define DMA1_CURR_DESC_PTR		0xFFC00C60	/* DMA Channel 1 Current Descriptor Pointer Register	*/
#define DMA1_CURR_ADDR			0xFFC00C64	/* DMA Channel 1 Current Address Register				*/
#define DMA1_IRQ_STATUS			0xFFC00C68	/* DMA Channel 1 Interrupt/Status Register				*/
#define DMA1_PERIPHERAL_MAP		0xFFC00C6C	/* DMA Channel 1 Peripheral Map Register				*/
#define DMA1_CURR_X_COUNT		0xFFC00C70	/* DMA Channel 1 Current X Count Register				*/
#define DMA1_CURR_Y_COUNT		0xFFC00C78	/* DMA Channel 1 Current Y Count Register				*/

#define DMA2_NEXT_DESC_PTR		0xFFC00C80	/* DMA Channel 2 Next Descriptor Pointer Register		*/
#define DMA2_START_ADDR			0xFFC00C84	/* DMA Channel 2 Start Address Register					*/
#define DMA2_CONFIG				0xFFC00C88	/* DMA Channel 2 Configuration Register					*/
#define DMA2_X_COUNT			0xFFC00C90	/* DMA Channel 2 X Count Register						*/
#define DMA2_X_MODIFY			0xFFC00C94	/* DMA Channel 2 X Modify Register						*/
#define DMA2_Y_COUNT			0xFFC00C98	/* DMA Channel 2 Y Count Register						*/
#define DMA2_Y_MODIFY			0xFFC00C9C	/* DMA Channel 2 Y Modify Register						*/
#define DMA2_CURR_DESC_PTR		0xFFC00CA0	/* DMA Channel 2 Current Descriptor Pointer Register	*/
#define DMA2_CURR_ADDR			0xFFC00CA4	/* DMA Channel 2 Current Address Register				*/
#define DMA2_IRQ_STATUS			0xFFC00CA8	/* DMA Channel 2 Interrupt/Status Register				*/
#define DMA2_PERIPHERAL_MAP		0xFFC00CAC	/* DMA Channel 2 Peripheral Map Register				*/
#define DMA2_CURR_X_COUNT		0xFFC00CB0	/* DMA Channel 2 Current X Count Register				*/
#define DMA2_CURR_Y_COUNT		0xFFC00CB8	/* DMA Channel 2 Current Y Count Register				*/

#define DMA3_NEXT_DESC_PTR		0xFFC00CC0	/* DMA Channel 3 Next Descriptor Pointer Register		*/
#define DMA3_START_ADDR			0xFFC00CC4	/* DMA Channel 3 Start Address Register					*/
#define DMA3_CONFIG				0xFFC00CC8	/* DMA Channel 3 Configuration Register					*/
#define DMA3_X_COUNT			0xFFC00CD0	/* DMA Channel 3 X Count Register						*/
#define DMA3_X_MODIFY			0xFFC00CD4	/* DMA Channel 3 X Modify Register						*/
#define DMA3_Y_COUNT			0xFFC00CD8	/* DMA Channel 3 Y Count Register						*/
#define DMA3_Y_MODIFY			0xFFC00CDC	/* DMA Channel 3 Y Modify Register						*/
#define DMA3_CURR_DESC_PTR		0xFFC00CE0	/* DMA Channel 3 Current Descriptor Pointer Register	*/
#define DMA3_CURR_ADDR			0xFFC00CE4	/* DMA Channel 3 Current Address Register				*/
#define DMA3_IRQ_STATUS			0xFFC00CE8	/* DMA Channel 3 Interrupt/Status Register				*/
#define DMA3_PERIPHERAL_MAP		0xFFC00CEC	/* DMA Channel 3 Peripheral Map Register				*/
#define DMA3_CURR_X_COUNT		0xFFC00CF0	/* DMA Channel 3 Current X Count Register				*/
#define DMA3_CURR_Y_COUNT		0xFFC00CF8	/* DMA Channel 3 Current Y Count Register				*/

#define DMA4_NEXT_DESC_PTR		0xFFC00D00	/* DMA Channel 4 Next Descriptor Pointer Register		*/
#define DMA4_START_ADDR			0xFFC00D04	/* DMA Channel 4 Start Address Register					*/
#define DMA4_CONFIG				0xFFC00D08	/* DMA Channel 4 Configuration Register					*/
#define DMA4_X_COUNT			0xFFC00D10	/* DMA Channel 4 X Count Register						*/
#define DMA4_X_MODIFY			0xFFC00D14	/* DMA Channel 4 X Modify Register						*/
#define DMA4_Y_COUNT			0xFFC00D18	/* DMA Channel 4 Y Count Register						*/
#define DMA4_Y_MODIFY			0xFFC00D1C	/* DMA Channel 4 Y Modify Register						*/
#define DMA4_CURR_DESC_PTR		0xFFC00D20	/* DMA Channel 4 Current Descriptor Pointer Register	*/
#define DMA4_CURR_ADDR			0xFFC00D24	/* DMA Channel 4 Current Address Register				*/
#define DMA4_IRQ_STATUS			0xFFC00D28	/* DMA Channel 4 Interrupt/Status Register				*/
#define DMA4_PERIPHERAL_MAP		0xFFC00D2C	/* DMA Channel 4 Peripheral Map Register				*/
#define DMA4_CURR_X_COUNT		0xFFC00D30	/* DMA Channel 4 Current X Count Register				*/
#define DMA4_CURR_Y_COUNT		0xFFC00D38	/* DMA Channel 4 Current Y Count Register				*/

#define DMA5_NEXT_DESC_PTR		0xFFC00D40	/* DMA Channel 5 Next Descriptor Pointer Register		*/
#define DMA5_START_ADDR			0xFFC00D44	/* DMA Channel 5 Start Address Register					*/
#define DMA5_CONFIG				0xFFC00D48	/* DMA Channel 5 Configuration Register					*/
#define DMA5_X_COUNT			0xFFC00D50	/* DMA Channel 5 X Count Register						*/
#define DMA5_X_MODIFY			0xFFC00D54	/* DMA Channel 5 X Modify Register						*/
#define DMA5_Y_COUNT			0xFFC00D58	/* DMA Channel 5 Y Count Register						*/
#define DMA5_Y_MODIFY			0xFFC00D5C	/* DMA Channel 5 Y Modify Register						*/
#define DMA5_CURR_DESC_PTR		0xFFC00D60	/* DMA Channel 5 Current Descriptor Pointer Register	*/
#define DMA5_CURR_ADDR			0xFFC00D64	/* DMA Channel 5 Current Address Register				*/
#define DMA5_IRQ_STATUS			0xFFC00D68	/* DMA Channel 5 Interrupt/Status Register				*/
#define DMA5_PERIPHERAL_MAP		0xFFC00D6C	/* DMA Channel 5 Peripheral Map Register				*/
#define DMA5_CURR_X_COUNT		0xFFC00D70	/* DMA Channel 5 Current X Count Register				*/
#define DMA5_CURR_Y_COUNT		0xFFC00D78	/* DMA Channel 5 Current Y Count Register				*/

#define DMA6_NEXT_DESC_PTR		0xFFC00D80	/* DMA Channel 6 Next Descriptor Pointer Register		*/
#define DMA6_START_ADDR			0xFFC00D84	/* DMA Channel 6 Start Address Register					*/
#define DMA6_CONFIG				0xFFC00D88	/* DMA Channel 6 Configuration Register					*/
#define DMA6_X_COUNT			0xFFC00D90	/* DMA Channel 6 X Count Register						*/
#define DMA6_X_MODIFY			0xFFC00D94	/* DMA Channel 6 X Modify Register						*/
#define DMA6_Y_COUNT			0xFFC00D98	/* DMA Channel 6 Y Count Register						*/
#define DMA6_Y_MODIFY			0xFFC00D9C	/* DMA Channel 6 Y Modify Register						*/
#define DMA6_CURR_DESC_PTR		0xFFC00DA0	/* DMA Channel 6 Current Descriptor Pointer Register	*/
#define DMA6_CURR_ADDR			0xFFC00DA4	/* DMA Channel 6 Current Address Register				*/
#define DMA6_IRQ_STATUS			0xFFC00DA8	/* DMA Channel 6 Interrupt/Status Register				*/
#define DMA6_PERIPHERAL_MAP		0xFFC00DAC	/* DMA Channel 6 Peripheral Map Register				*/
#define DMA6_CURR_X_COUNT		0xFFC00DB0	/* DMA Channel 6 Current X Count Register				*/
#define DMA6_CURR_Y_COUNT		0xFFC00DB8	/* DMA Channel 6 Current Y Count Register				*/

#define DMA7_NEXT_DESC_PTR		0xFFC00DC0	/* DMA Channel 7 Next Descriptor Pointer Register		*/
#define DMA7_START_ADDR			0xFFC00DC4	/* DMA Channel 7 Start Address Register					*/
#define DMA7_CONFIG				0xFFC00DC8	/* DMA Channel 7 Configuration Register					*/
#define DMA7_X_COUNT			0xFFC00DD0	/* DMA Channel 7 X Count Register						*/
#define DMA7_X_MODIFY			0xFFC00DD4	/* DMA Channel 7 X Modify Register						*/
#define DMA7_Y_COUNT			0xFFC00DD8	/* DMA Channel 7 Y Count Register						*/
#define DMA7_Y_MODIFY			0xFFC00DDC	/* DMA Channel 7 Y Modify Register						*/
#define DMA7_CURR_DESC_PTR		0xFFC00DE0	/* DMA Channel 7 Current Descriptor Pointer Register	*/
#define DMA7_CURR_ADDR			0xFFC00DE4	/* DMA Channel 7 Current Address Register				*/
#define DMA7_IRQ_STATUS			0xFFC00DE8	/* DMA Channel 7 Interrupt/Status Register				*/
#define DMA7_PERIPHERAL_MAP		0xFFC00DEC	/* DMA Channel 7 Peripheral Map Register				*/
#define DMA7_CURR_X_COUNT		0xFFC00DF0	/* DMA Channel 7 Current X Count Register				*/
#define DMA7_CURR_Y_COUNT		0xFFC00DF8	/* DMA Channel 7 Current Y Count Register				*/

#define DMA8_NEXT_DESC_PTR		0xFFC00E00	/* DMA Channel 8 Next Descriptor Pointer Register		*/
#define DMA8_START_ADDR			0xFFC00E04	/* DMA Channel 8 Start Address Register					*/
#define DMA8_CONFIG				0xFFC00E08	/* DMA Channel 8 Configuration Register					*/
#define DMA8_X_COUNT			0xFFC00E10	/* DMA Channel 8 X Count Register						*/
#define DMA8_X_MODIFY			0xFFC00E14	/* DMA Channel 8 X Modify Register						*/
#define DMA8_Y_COUNT			0xFFC00E18	/* DMA Channel 8 Y Count Register						*/
#define DMA8_Y_MODIFY			0xFFC00E1C	/* DMA Channel 8 Y Modify Register						*/
#define DMA8_CURR_DESC_PTR		0xFFC00E20	/* DMA Channel 8 Current Descriptor Pointer Register	*/
#define DMA8_CURR_ADDR			0xFFC00E24	/* DMA Channel 8 Current Address Register				*/
#define DMA8_IRQ_STATUS			0xFFC00E28	/* DMA Channel 8 Interrupt/Status Register				*/
#define DMA8_PERIPHERAL_MAP		0xFFC00E2C	/* DMA Channel 8 Peripheral Map Register				*/
#define DMA8_CURR_X_COUNT		0xFFC00E30	/* DMA Channel 8 Current X Count Register				*/
#define DMA8_CURR_Y_COUNT		0xFFC00E38	/* DMA Channel 8 Current Y Count Register				*/

#define DMA9_NEXT_DESC_PTR		0xFFC00E40	/* DMA Channel 9 Next Descriptor Pointer Register		*/
#define DMA9_START_ADDR			0xFFC00E44	/* DMA Channel 9 Start Address Register					*/
#define DMA9_CONFIG				0xFFC00E48	/* DMA Channel 9 Configuration Register					*/
#define DMA9_X_COUNT			0xFFC00E50	/* DMA Channel 9 X Count Register						*/
#define DMA9_X_MODIFY			0xFFC00E54	/* DMA Channel 9 X Modify Register						*/
#define DMA9_Y_COUNT			0xFFC00E58	/* DMA Channel 9 Y Count Register						*/
#define DMA9_Y_MODIFY			0xFFC00E5C	/* DMA Channel 9 Y Modify Register						*/
#define DMA9_CURR_DESC_PTR		0xFFC00E60	/* DMA Channel 9 Current Descriptor Pointer Register	*/
#define DMA9_CURR_ADDR			0xFFC00E64	/* DMA Channel 9 Current Address Register				*/
#define DMA9_IRQ_STATUS			0xFFC00E68	/* DMA Channel 9 Interrupt/Status Register				*/
#define DMA9_PERIPHERAL_MAP		0xFFC00E6C	/* DMA Channel 9 Peripheral Map Register				*/
#define DMA9_CURR_X_COUNT		0xFFC00E70	/* DMA Channel 9 Current X Count Register				*/
#define DMA9_CURR_Y_COUNT		0xFFC00E78	/* DMA Channel 9 Current Y Count Register				*/

#define DMA10_NEXT_DESC_PTR		0xFFC00E80	/* DMA Channel 10 Next Descriptor Pointer Register		*/
#define DMA10_START_ADDR		0xFFC00E84	/* DMA Channel 10 Start Address Register				*/
#define DMA10_CONFIG			0xFFC00E88	/* DMA Channel 10 Configuration Register				*/
#define DMA10_X_COUNT			0xFFC00E90	/* DMA Channel 10 X Count Register						*/
#define DMA10_X_MODIFY			0xFFC00E94	/* DMA Channel 10 X Modify Register						*/
#define DMA10_Y_COUNT			0xFFC00E98	/* DMA Channel 10 Y Count Register						*/
#define DMA10_Y_MODIFY			0xFFC00E9C	/* DMA Channel 10 Y Modify Register						*/
#define DMA10_CURR_DESC_PTR		0xFFC00EA0	/* DMA Channel 10 Current Descriptor Pointer Register	*/
#define DMA10_CURR_ADDR			0xFFC00EA4	/* DMA Channel 10 Current Address Register				*/
#define DMA10_IRQ_STATUS		0xFFC00EA8	/* DMA Channel 10 Interrupt/Status Register				*/
#define DMA10_PERIPHERAL_MAP	0xFFC00EAC	/* DMA Channel 10 Peripheral Map Register				*/
#define DMA10_CURR_X_COUNT		0xFFC00EB0	/* DMA Channel 10 Current X Count Register				*/
#define DMA10_CURR_Y_COUNT		0xFFC00EB8	/* DMA Channel 10 Current Y Count Register				*/

#define DMA11_NEXT_DESC_PTR		0xFFC00EC0	/* DMA Channel 11 Next Descriptor Pointer Register		*/
#define DMA11_START_ADDR		0xFFC00EC4	/* DMA Channel 11 Start Address Register				*/
#define DMA11_CONFIG			0xFFC00EC8	/* DMA Channel 11 Configuration Register				*/
#define DMA11_X_COUNT			0xFFC00ED0	/* DMA Channel 11 X Count Register						*/
#define DMA11_X_MODIFY			0xFFC00ED4	/* DMA Channel 11 X Modify Register						*/
#define DMA11_Y_COUNT			0xFFC00ED8	/* DMA Channel 11 Y Count Register						*/
#define DMA11_Y_MODIFY			0xFFC00EDC	/* DMA Channel 11 Y Modify Register						*/
#define DMA11_CURR_DESC_PTR		0xFFC00EE0	/* DMA Channel 11 Current Descriptor Pointer Register	*/
#define DMA11_CURR_ADDR			0xFFC00EE4	/* DMA Channel 11 Current Address Register				*/
#define DMA11_IRQ_STATUS		0xFFC00EE8	/* DMA Channel 11 Interrupt/Status Register				*/
#define DMA11_PERIPHERAL_MAP	0xFFC00EEC	/* DMA Channel 11 Peripheral Map Register				*/
#define DMA11_CURR_X_COUNT		0xFFC00EF0	/* DMA Channel 11 Current X Count Register				*/
#define DMA11_CURR_Y_COUNT		0xFFC00EF8	/* DMA Channel 11 Current Y Count Register				*/

#define MDMA_D0_NEXT_DESC_PTR	0xFFC00F00	/* MemDMA Stream 0 Destination Next Descriptor Pointer Register		*/
#define MDMA_D0_START_ADDR		0xFFC00F04	/* MemDMA Stream 0 Destination Start Address Register				*/
#define MDMA_D0_CONFIG			0xFFC00F08	/* MemDMA Stream 0 Destination Configuration Register				*/
#define MDMA_D0_X_COUNT			0xFFC00F10	/* MemDMA Stream 0 Destination X Count Register						*/
#define MDMA_D0_X_MODIFY		0xFFC00F14	/* MemDMA Stream 0 Destination X Modify Register					*/
#define MDMA_D0_Y_COUNT			0xFFC00F18	/* MemDMA Stream 0 Destination Y Count Register						*/
#define MDMA_D0_Y_MODIFY		0xFFC00F1C	/* MemDMA Stream 0 Destination Y Modify Register					*/
#define MDMA_D0_CURR_DESC_PTR	0xFFC00F20	/* MemDMA Stream 0 Destination Current Descriptor Pointer Register	*/
#define MDMA_D0_CURR_ADDR		0xFFC00F24	/* MemDMA Stream 0 Destination Current Address Register				*/
#define MDMA_D0_IRQ_STATUS		0xFFC00F28	/* MemDMA Stream 0 Destination Interrupt/Status Register			*/
#define MDMA_D0_PERIPHERAL_MAP	0xFFC00F2C	/* MemDMA Stream 0 Destination Peripheral Map Register				*/
#define MDMA_D0_CURR_X_COUNT	0xFFC00F30	/* MemDMA Stream 0 Destination Current X Count Register				*/
#define MDMA_D0_CURR_Y_COUNT	0xFFC00F38	/* MemDMA Stream 0 Destination Current Y Count Register				*/

#define MDMA_S0_NEXT_DESC_PTR	0xFFC00F40	/* MemDMA Stream 0 Source Next Descriptor Pointer Register			*/
#define MDMA_S0_START_ADDR		0xFFC00F44	/* MemDMA Stream 0 Source Start Address Register					*/
#define MDMA_S0_CONFIG			0xFFC00F48	/* MemDMA Stream 0 Source Configuration Register					*/
#define MDMA_S0_X_COUNT			0xFFC00F50	/* MemDMA Stream 0 Source X Count Register							*/
#define MDMA_S0_X_MODIFY		0xFFC00F54	/* MemDMA Stream 0 Source X Modify Register							*/
#define MDMA_S0_Y_COUNT			0xFFC00F58	/* MemDMA Stream 0 Source Y Count Register							*/
#define MDMA_S0_Y_MODIFY		0xFFC00F5C	/* MemDMA Stream 0 Source Y Modify Register							*/
#define MDMA_S0_CURR_DESC_PTR	0xFFC00F60	/* MemDMA Stream 0 Source Current Descriptor Pointer Register		*/
#define MDMA_S0_CURR_ADDR		0xFFC00F64	/* MemDMA Stream 0 Source Current Address Register					*/
#define MDMA_S0_IRQ_STATUS		0xFFC00F68	/* MemDMA Stream 0 Source Interrupt/Status Register					*/
#define MDMA_S0_PERIPHERAL_MAP	0xFFC00F6C	/* MemDMA Stream 0 Source Peripheral Map Register					*/
#define MDMA_S0_CURR_X_COUNT	0xFFC00F70	/* MemDMA Stream 0 Source Current X Count Register					*/
#define MDMA_S0_CURR_Y_COUNT	0xFFC00F78	/* MemDMA Stream 0 Source Current Y Count Register					*/

#define MDMA_D1_NEXT_DESC_PTR	0xFFC00F80	/* MemDMA Stream 1 Destination Next Descriptor Pointer Register		*/
#define MDMA_D1_START_ADDR		0xFFC00F84	/* MemDMA Stream 1 Destination Start Address Register				*/
#define MDMA_D1_CONFIG			0xFFC00F88	/* MemDMA Stream 1 Destination Configuration Register				*/
#define MDMA_D1_X_COUNT			0xFFC00F90	/* MemDMA Stream 1 Destination X Count Register						*/
#define MDMA_D1_X_MODIFY		0xFFC00F94	/* MemDMA Stream 1 Destination X Modify Register					*/
#define MDMA_D1_Y_COUNT			0xFFC00F98	/* MemDMA Stream 1 Destination Y Count Register						*/
#define MDMA_D1_Y_MODIFY		0xFFC00F9C	/* MemDMA Stream 1 Destination Y Modify Register					*/
#define MDMA_D1_CURR_DESC_PTR	0xFFC00FA0	/* MemDMA Stream 1 Destination Current Descriptor Pointer Register	*/
#define MDMA_D1_CURR_ADDR		0xFFC00FA4	/* MemDMA Stream 1 Destination Current Address Register				*/
#define MDMA_D1_IRQ_STATUS		0xFFC00FA8	/* MemDMA Stream 1 Destination Interrupt/Status Register			*/
#define MDMA_D1_PERIPHERAL_MAP	0xFFC00FAC	/* MemDMA Stream 1 Destination Peripheral Map Register				*/
#define MDMA_D1_CURR_X_COUNT	0xFFC00FB0	/* MemDMA Stream 1 Destination Current X Count Register				*/
#define MDMA_D1_CURR_Y_COUNT	0xFFC00FB8	/* MemDMA Stream 1 Destination Current Y Count Register				*/

#define MDMA_S1_NEXT_DESC_PTR	0xFFC00FC0	/* MemDMA Stream 1 Source Next Descriptor Pointer Register			*/
#define MDMA_S1_START_ADDR		0xFFC00FC4	/* MemDMA Stream 1 Source Start Address Register					*/
#define MDMA_S1_CONFIG			0xFFC00FC8	/* MemDMA Stream 1 Source Configuration Register					*/
#define MDMA_S1_X_COUNT			0xFFC00FD0	/* MemDMA Stream 1 Source X Count Register							*/
#define MDMA_S1_X_MODIFY		0xFFC00FD4	/* MemDMA Stream 1 Source X Modify Register							*/
#define MDMA_S1_Y_COUNT			0xFFC00FD8	/* MemDMA Stream 1 Source Y Count Register							*/
#define MDMA_S1_Y_MODIFY		0xFFC00FDC	/* MemDMA Stream 1 Source Y Modify Register							*/
#define MDMA_S1_CURR_DESC_PTR	0xFFC00FE0	/* MemDMA Stream 1 Source Current Descriptor Pointer Register		*/
#define MDMA_S1_CURR_ADDR		0xFFC00FE4	/* MemDMA Stream 1 Source Current Address Register					*/
#define MDMA_S1_IRQ_STATUS		0xFFC00FE8	/* MemDMA Stream 1 Source Interrupt/Status Register					*/
#define MDMA_S1_PERIPHERAL_MAP	0xFFC00FEC	/* MemDMA Stream 1 Source Peripheral Map Register					*/
#define MDMA_S1_CURR_X_COUNT	0xFFC00FF0	/* MemDMA Stream 1 Source Current X Count Register					*/
#define MDMA_S1_CURR_Y_COUNT	0xFFC00FF8	/* MemDMA Stream 1 Source Current Y Count Register					*/


/* Parallel Peripheral Interface (0xFFC01000 - 0xFFC010FF)				*/
#define PPI_CONTROL			0xFFC01000	/* PPI Control Register			*/
#define PPI_STATUS			0xFFC01004	/* PPI Status Register			*/
#define PPI_COUNT			0xFFC01008	/* PPI Transfer Count Register	*/
#define PPI_DELAY			0xFFC0100C	/* PPI Delay Count Register		*/
#define PPI_FRAME			0xFFC01010	/* PPI Frame Length Register	*/


/* Two-Wire Interface		(0xFFC01400 - 0xFFC014FF)								*/
#define TWI_CLKDIV			0xFFC01400	/* Serial Clock Divider Register			*/
#define TWI_CONTROL			0xFFC01404	/* TWI Control Register						*/
#define TWI_SLAVE_CTL		0xFFC01408	/* Slave Mode Control Register				*/
#define TWI_SLAVE_STAT		0xFFC0140C	/* Slave Mode Status Register				*/
#define TWI_SLAVE_ADDR		0xFFC01410	/* Slave Mode Address Register				*/
#define TWI_MASTER_CTL		0xFFC01414	/* Master Mode Control Register				*/
#define TWI_MASTER_STAT		0xFFC01418	/* Master Mode Status Register				*/
#define TWI_MASTER_ADDR		0xFFC0141C	/* Master Mode Address Register				*/
#define TWI_INT_STAT		0xFFC01420	/* TWI Interrupt Status Register			*/
#define TWI_INT_MASK		0xFFC01424	/* TWI Master Interrupt Mask Register		*/
#define TWI_FIFO_CTL		0xFFC01428	/* FIFO Control Register					*/
#define TWI_FIFO_STAT		0xFFC0142C	/* FIFO Status Register						*/
#define TWI_XMT_DATA8		0xFFC01480	/* FIFO Transmit Data Single Byte Register	*/
#define TWI_XMT_DATA16		0xFFC01484	/* FIFO Transmit Data Double Byte Register	*/
#define TWI_RCV_DATA8		0xFFC01488	/* FIFO Receive Data Single Byte Register	*/
#define TWI_RCV_DATA16		0xFFC0148C	/* FIFO Receive Data Double Byte Register	*/


/* General Purpose I/O Port G (0xFFC01500 - 0xFFC015FF)												*/
#define PORTGIO					0xFFC01500	/* Port G I/O Pin State Specify Register				*/
#define PORTGIO_CLEAR			0xFFC01504	/* Port G I/O Peripheral Interrupt Clear Register		*/
#define PORTGIO_SET				0xFFC01508	/* Port G I/O Peripheral Interrupt Set Register			*/
#define PORTGIO_TOGGLE			0xFFC0150C	/* Port G I/O Pin State Toggle Register					*/
#define PORTGIO_MASKA			0xFFC01510	/* Port G I/O Mask State Specify Interrupt A Register	*/
#define PORTGIO_MASKA_CLEAR		0xFFC01514	/* Port G I/O Mask Disable Interrupt A Register			*/
#define PORTGIO_MASKA_SET		0xFFC01518	/* Port G I/O Mask Enable Interrupt A Register			*/
#define PORTGIO_MASKA_TOGGLE	0xFFC0151C	/* Port G I/O Mask Toggle Enable Interrupt A Register	*/
#define PORTGIO_MASKB			0xFFC01520	/* Port G I/O Mask State Specify Interrupt B Register	*/
#define PORTGIO_MASKB_CLEAR		0xFFC01524	/* Port G I/O Mask Disable Interrupt B Register			*/
#define PORTGIO_MASKB_SET		0xFFC01528	/* Port G I/O Mask Enable Interrupt B Register			*/
#define PORTGIO_MASKB_TOGGLE	0xFFC0152C	/* Port G I/O Mask Toggle Enable Interrupt B Register	*/
#define PORTGIO_DIR				0xFFC01530	/* Port G I/O Direction Register						*/
#define PORTGIO_POLAR			0xFFC01534	/* Port G I/O Source Polarity Register					*/
#define PORTGIO_EDGE			0xFFC01538	/* Port G I/O Source Sensitivity Register				*/
#define PORTGIO_BOTH			0xFFC0153C	/* Port G I/O Set on BOTH Edges Register				*/
#define PORTGIO_INEN			0xFFC01540	/* Port G I/O Input Enable Register						*/


/* General Purpose I/O Port H (0xFFC01700 - 0xFFC017FF)												*/
#define PORTHIO					0xFFC01700	/* Port H I/O Pin State Specify Register				*/
#define PORTHIO_CLEAR			0xFFC01704	/* Port H I/O Peripheral Interrupt Clear Register		*/
#define PORTHIO_SET				0xFFC01708	/* Port H I/O Peripheral Interrupt Set Register			*/
#define PORTHIO_TOGGLE			0xFFC0170C	/* Port H I/O Pin State Toggle Register					*/
#define PORTHIO_MASKA			0xFFC01710	/* Port H I/O Mask State Specify Interrupt A Register	*/
#define PORTHIO_MASKA_CLEAR		0xFFC01714	/* Port H I/O Mask Disable Interrupt A Register			*/
#define PORTHIO_MASKA_SET		0xFFC01718	/* Port H I/O Mask Enable Interrupt A Register			*/
#define PORTHIO_MASKA_TOGGLE	0xFFC0171C	/* Port H I/O Mask Toggle Enable Interrupt A Register	*/
#define PORTHIO_MASKB			0xFFC01720	/* Port H I/O Mask State Specify Interrupt B Register	*/
#define PORTHIO_MASKB_CLEAR		0xFFC01724	/* Port H I/O Mask Disable Interrupt B Register			*/
#define PORTHIO_MASKB_SET		0xFFC01728	/* Port H I/O Mask Enable Interrupt B Register			*/
#define PORTHIO_MASKB_TOGGLE	0xFFC0172C	/* Port H I/O Mask Toggle Enable Interrupt B Register	*/
#define PORTHIO_DIR				0xFFC01730	/* Port H I/O Direction Register						*/
#define PORTHIO_POLAR			0xFFC01734	/* Port H I/O Source Polarity Register					*/
#define PORTHIO_EDGE			0xFFC01738	/* Port H I/O Source Sensitivity Register				*/
#define PORTHIO_BOTH			0xFFC0173C	/* Port H I/O Set on BOTH Edges Register				*/
#define PORTHIO_INEN			0xFFC01740	/* Port H I/O Input Enable Register						*/


/* UART1 Controller		(0xFFC02000 - 0xFFC020FF)								*/
#define UART1_THR			0xFFC02000	/* Transmit Holding register			*/
#define UART1_RBR			0xFFC02000	/* Receive Buffer register				*/
#define UART1_DLL			0xFFC02000	/* Divisor Latch (Low-Byte)				*/
#define UART1_IER			0xFFC02004	/* Interrupt Enable Register			*/
#define UART1_DLH			0xFFC02004	/* Divisor Latch (High-Byte)			*/
#define UART1_IIR			0xFFC02008	/* Interrupt Identification Register	*/
#define UART1_LCR			0xFFC0200C	/* Line Control Register				*/
#define UART1_MCR			0xFFC02010	/* Modem Control Register				*/
#define UART1_LSR			0xFFC02014	/* Line Status Register					*/
#define UART1_SCR			0xFFC0201C	/* SCR Scratch Register					*/
#define UART1_GCTL			0xFFC02024	/* Global Control Register				*/


/* CAN Controller		(0xFFC02A00 - 0xFFC02FFF)										*/
/* For Mailboxes 0-15																	*/
#define CAN_MC1				0xFFC02A00	/* Mailbox config reg 1							*/
#define CAN_MD1				0xFFC02A04	/* Mailbox direction reg 1						*/
#define CAN_TRS1			0xFFC02A08	/* Transmit Request Set reg 1					*/
#define CAN_TRR1			0xFFC02A0C	/* Transmit Request Reset reg 1					*/
#define CAN_TA1				0xFFC02A10	/* Transmit Acknowledge reg 1					*/
#define CAN_AA1				0xFFC02A14	/* Transmit Abort Acknowledge reg 1				*/
#define CAN_RMP1			0xFFC02A18	/* Receive Message Pending reg 1				*/
#define CAN_RML1			0xFFC02A1C	/* Receive Message Lost reg 1					*/
#define CAN_MBTIF1			0xFFC02A20	/* Mailbox Transmit Interrupt Flag reg 1		*/
#define CAN_MBRIF1			0xFFC02A24	/* Mailbox Receive  Interrupt Flag reg 1		*/
#define CAN_MBIM1			0xFFC02A28	/* Mailbox Interrupt Mask reg 1					*/
#define CAN_RFH1			0xFFC02A2C	/* Remote Frame Handling reg 1					*/
#define CAN_OPSS1			0xFFC02A30	/* Overwrite Protection Single Shot Xmit reg 1	*/

/* For Mailboxes 16-31   																*/
#define CAN_MC2				0xFFC02A40	/* Mailbox config reg 2							*/
#define CAN_MD2				0xFFC02A44	/* Mailbox direction reg 2						*/
#define CAN_TRS2			0xFFC02A48	/* Transmit Request Set reg 2					*/
#define CAN_TRR2			0xFFC02A4C	/* Transmit Request Reset reg 2					*/
#define CAN_TA2				0xFFC02A50	/* Transmit Acknowledge reg 2					*/
#define CAN_AA2				0xFFC02A54	/* Transmit Abort Acknowledge reg 2				*/
#define CAN_RMP2			0xFFC02A58	/* Receive Message Pending reg 2				*/
#define CAN_RML2			0xFFC02A5C	/* Receive Message Lost reg 2					*/
#define CAN_MBTIF2			0xFFC02A60	/* Mailbox Transmit Interrupt Flag reg 2		*/
#define CAN_MBRIF2			0xFFC02A64	/* Mailbox Receive  Interrupt Flag reg 2		*/
#define CAN_MBIM2			0xFFC02A68	/* Mailbox Interrupt Mask reg 2					*/
#define CAN_RFH2			0xFFC02A6C	/* Remote Frame Handling reg 2					*/
#define CAN_OPSS2			0xFFC02A70	/* Overwrite Protection Single Shot Xmit reg 2	*/

/* CAN Configuration, Control, and Status Registers										*/
#define CAN_CLOCK			0xFFC02A80	/* Bit Timing Configuration register 0			*/
#define CAN_TIMING			0xFFC02A84	/* Bit Timing Configuration register 1			*/
#define CAN_DEBUG			0xFFC02A88	/* Debug Register								*/
#define CAN_STATUS			0xFFC02A8C	/* Global Status Register						*/
#define CAN_CEC				0xFFC02A90	/* Error Counter Register						*/
#define CAN_GIS				0xFFC02A94	/* Global Interrupt Status Register				*/
#define CAN_GIM				0xFFC02A98	/* Global Interrupt Mask Register				*/
#define CAN_GIF				0xFFC02A9C	/* Global Interrupt Flag Register				*/
#define CAN_CONTROL			0xFFC02AA0	/* Master Control Register						*/
#define CAN_INTR			0xFFC02AA4	/* Interrupt Pending Register					*/
#define CAN_MBTD			0xFFC02AAC	/* Mailbox Temporary Disable Feature			*/
#define CAN_EWR				0xFFC02AB0	/* Programmable Warning Level					*/
#define CAN_ESR				0xFFC02AB4	/* Error Status Register						*/
#define CAN_UCCNT			0xFFC02AC4	/* Universal Counter							*/
#define CAN_UCRC			0xFFC02AC8	/* Universal Counter Reload/Capture	Register	*/
#define CAN_UCCNF			0xFFC02ACC	/* Universal Counter Configuration Register		*/

/* Mailbox Acceptance Masks 												*/
#define CAN_AM00L			0xFFC02B00	/* Mailbox 0 Low Acceptance Mask	*/
#define CAN_AM00H			0xFFC02B04	/* Mailbox 0 High Acceptance Mask	*/
#define CAN_AM01L			0xFFC02B08	/* Mailbox 1 Low Acceptance Mask 	*/
#define CAN_AM01H			0xFFC02B0C	/* Mailbox 1 High Acceptance Mask	*/
#define CAN_AM02L			0xFFC02B10	/* Mailbox 2 Low Acceptance Mask 	*/
#define CAN_AM02H			0xFFC02B14	/* Mailbox 2 High Acceptance Mask	*/
#define CAN_AM03L			0xFFC02B18	/* Mailbox 3 Low Acceptance Mask 	*/
#define CAN_AM03H			0xFFC02B1C	/* Mailbox 3 High Acceptance Mask	*/
#define CAN_AM04L			0xFFC02B20	/* Mailbox 4 Low Acceptance Mask 	*/
#define CAN_AM04H			0xFFC02B24	/* Mailbox 4 High Acceptance Mask	*/
#define CAN_AM05L			0xFFC02B28	/* Mailbox 5 Low Acceptance Mask 	*/
#define CAN_AM05H			0xFFC02B2C	/* Mailbox 5 High Acceptance Mask	*/
#define CAN_AM06L			0xFFC02B30	/* Mailbox 6 Low Acceptance Mask 	*/
#define CAN_AM06H			0xFFC02B34	/* Mailbox 6 High Acceptance Mask	*/
#define CAN_AM07L			0xFFC02B38	/* Mailbox 7 Low Acceptance Mask 	*/
#define CAN_AM07H			0xFFC02B3C	/* Mailbox 7 High Acceptance Mask	*/
#define CAN_AM08L			0xFFC02B40	/* Mailbox 8 Low Acceptance Mask 	*/
#define CAN_AM08H			0xFFC02B44	/* Mailbox 8 High Acceptance Mask	*/
#define CAN_AM09L			0xFFC02B48	/* Mailbox 9 Low Acceptance Mask 	*/
#define CAN_AM09H			0xFFC02B4C	/* Mailbox 9 High Acceptance Mask	*/
#define CAN_AM10L			0xFFC02B50	/* Mailbox 10 Low Acceptance Mask 	*/
#define CAN_AM10H			0xFFC02B54	/* Mailbox 10 High Acceptance Mask	*/
#define CAN_AM11L			0xFFC02B58	/* Mailbox 11 Low Acceptance Mask 	*/
#define CAN_AM11H			0xFFC02B5C	/* Mailbox 11 High Acceptance Mask	*/
#define CAN_AM12L			0xFFC02B60	/* Mailbox 12 Low Acceptance Mask 	*/
#define CAN_AM12H			0xFFC02B64	/* Mailbox 12 High Acceptance Mask	*/
#define CAN_AM13L			0xFFC02B68	/* Mailbox 13 Low Acceptance Mask 	*/
#define CAN_AM13H			0xFFC02B6C	/* Mailbox 13 High Acceptance Mask	*/
#define CAN_AM14L			0xFFC02B70	/* Mailbox 14 Low Acceptance Mask 	*/
#define CAN_AM14H			0xFFC02B74	/* Mailbox 14 High Acceptance Mask	*/
#define CAN_AM15L			0xFFC02B78	/* Mailbox 15 Low Acceptance Mask 	*/
#define CAN_AM15H			0xFFC02B7C	/* Mailbox 15 High Acceptance Mask	*/

#define CAN_AM16L			0xFFC02B80	/* Mailbox 16 Low Acceptance Mask 	*/
#define CAN_AM16H			0xFFC02B84	/* Mailbox 16 High Acceptance Mask	*/
#define CAN_AM17L			0xFFC02B88	/* Mailbox 17 Low Acceptance Mask 	*/
#define CAN_AM17H			0xFFC02B8C	/* Mailbox 17 High Acceptance Mask	*/
#define CAN_AM18L			0xFFC02B90	/* Mailbox 18 Low Acceptance Mask 	*/
#define CAN_AM18H			0xFFC02B94	/* Mailbox 18 High Acceptance Mask	*/
#define CAN_AM19L			0xFFC02B98	/* Mailbox 19 Low Acceptance Mask 	*/
#define CAN_AM19H			0xFFC02B9C	/* Mailbox 19 High Acceptance Mask	*/
#define CAN_AM20L			0xFFC02BA0	/* Mailbox 20 Low Acceptance Mask 	*/
#define CAN_AM20H			0xFFC02BA4	/* Mailbox 20 High Acceptance Mask	*/
#define CAN_AM21L			0xFFC02BA8	/* Mailbox 21 Low Acceptance Mask 	*/
#define CAN_AM21H			0xFFC02BAC	/* Mailbox 21 High Acceptance Mask	*/
#define CAN_AM22L			0xFFC02BB0	/* Mailbox 22 Low Acceptance Mask 	*/
#define CAN_AM22H			0xFFC02BB4	/* Mailbox 22 High Acceptance Mask	*/
#define CAN_AM23L			0xFFC02BB8	/* Mailbox 23 Low Acceptance Mask 	*/
#define CAN_AM23H			0xFFC02BBC	/* Mailbox 23 High Acceptance Mask	*/
#define CAN_AM24L			0xFFC02BC0	/* Mailbox 24 Low Acceptance Mask 	*/
#define CAN_AM24H			0xFFC02BC4	/* Mailbox 24 High Acceptance Mask	*/
#define CAN_AM25L			0xFFC02BC8	/* Mailbox 25 Low Acceptance Mask 	*/
#define CAN_AM25H			0xFFC02BCC	/* Mailbox 25 High Acceptance Mask	*/
#define CAN_AM26L			0xFFC02BD0	/* Mailbox 26 Low Acceptance Mask 	*/
#define CAN_AM26H			0xFFC02BD4	/* Mailbox 26 High Acceptance Mask	*/
#define CAN_AM27L			0xFFC02BD8	/* Mailbox 27 Low Acceptance Mask 	*/
#define CAN_AM27H			0xFFC02BDC	/* Mailbox 27 High Acceptance Mask	*/
#define CAN_AM28L			0xFFC02BE0	/* Mailbox 28 Low Acceptance Mask 	*/
#define CAN_AM28H			0xFFC02BE4	/* Mailbox 28 High Acceptance Mask	*/
#define CAN_AM29L			0xFFC02BE8	/* Mailbox 29 Low Acceptance Mask 	*/
#define CAN_AM29H			0xFFC02BEC	/* Mailbox 29 High Acceptance Mask	*/
#define CAN_AM30L			0xFFC02BF0	/* Mailbox 30 Low Acceptance Mask 	*/
#define CAN_AM30H			0xFFC02BF4	/* Mailbox 30 High Acceptance Mask	*/
#define CAN_AM31L			0xFFC02BF8	/* Mailbox 31 Low Acceptance Mask 	*/
#define CAN_AM31H			0xFFC02BFC	/* Mailbox 31 High Acceptance Mask	*/

/* CAN Acceptance Mask Macros				*/
#define CAN_AM_L(x)		(CAN_AM00L+((x)*0x8))
#define CAN_AM_H(x)		(CAN_AM00H+((x)*0x8))

/* Mailbox Registers																*/
#define CAN_MB00_DATA0		0xFFC02C00	/* Mailbox 0 Data Word 0 [15:0] Register	*/
#define CAN_MB00_DATA1		0xFFC02C04	/* Mailbox 0 Data Word 1 [31:16] Register	*/
#define CAN_MB00_DATA2		0xFFC02C08	/* Mailbox 0 Data Word 2 [47:32] Register	*/
#define CAN_MB00_DATA3		0xFFC02C0C	/* Mailbox 0 Data Word 3 [63:48] Register	*/
#define CAN_MB00_LENGTH		0xFFC02C10	/* Mailbox 0 Data Length Code Register		*/
#define CAN_MB00_TIMESTAMP	0xFFC02C14	/* Mailbox 0 Time Stamp Value Register		*/
#define CAN_MB00_ID0		0xFFC02C18	/* Mailbox 0 Identifier Low Register		*/
#define CAN_MB00_ID1		0xFFC02C1C	/* Mailbox 0 Identifier High Register		*/

#define CAN_MB01_DATA0		0xFFC02C20	/* Mailbox 1 Data Word 0 [15:0] Register 	*/
#define CAN_MB01_DATA1		0xFFC02C24	/* Mailbox 1 Data Word 1 [31:16] Register	*/
#define CAN_MB01_DATA2		0xFFC02C28	/* Mailbox 1 Data Word 2 [47:32] Register	*/
#define CAN_MB01_DATA3		0xFFC02C2C	/* Mailbox 1 Data Word 3 [63:48] Register	*/
#define CAN_MB01_LENGTH		0xFFC02C30	/* Mailbox 1 Data Length Code Register   	*/
#define CAN_MB01_TIMESTAMP	0xFFC02C34	/* Mailbox 1 Time Stamp Value Register   	*/
#define CAN_MB01_ID0		0xFFC02C38	/* Mailbox 1 Identifier Low Register    	*/
#define CAN_MB01_ID1		0xFFC02C3C	/* Mailbox 1 Identifier High Register    	*/

#define CAN_MB02_DATA0		0xFFC02C40	/* Mailbox 2 Data Word 0 [15:0] Register 	*/
#define CAN_MB02_DATA1		0xFFC02C44	/* Mailbox 2 Data Word 1 [31:16] Register	*/
#define CAN_MB02_DATA2		0xFFC02C48	/* Mailbox 2 Data Word 2 [47:32] Register	*/
#define CAN_MB02_DATA3		0xFFC02C4C	/* Mailbox 2 Data Word 3 [63:48] Register	*/
#define CAN_MB02_LENGTH		0xFFC02C50	/* Mailbox 2 Data Length Code Register   	*/
#define CAN_MB02_TIMESTAMP	0xFFC02C54	/* Mailbox 2 Time Stamp Value Register   	*/
#define CAN_MB02_ID0		0xFFC02C58	/* Mailbox 2 Identifier Low Register     	*/
#define CAN_MB02_ID1		0xFFC02C5C	/* Mailbox 2 Identifier High Register    	*/

#define CAN_MB03_DATA0		0xFFC02C60	/* Mailbox 3 Data Word 0 [15:0] Register 	*/
#define CAN_MB03_DATA1		0xFFC02C64	/* Mailbox 3 Data Word 1 [31:16] Register	*/
#define CAN_MB03_DATA2		0xFFC02C68	/* Mailbox 3 Data Word 2 [47:32] Register	*/
#define CAN_MB03_DATA3		0xFFC02C6C	/* Mailbox 3 Data Word 3 [63:48] Register	*/
#define CAN_MB03_LENGTH		0xFFC02C70	/* Mailbox 3 Data Length Code Register   	*/
#define CAN_MB03_TIMESTAMP	0xFFC02C74	/* Mailbox 3 Time Stamp Value Register   	*/
#define CAN_MB03_ID0		0xFFC02C78	/* Mailbox 3 Identifier Low Register     	*/
#define CAN_MB03_ID1		0xFFC02C7C	/* Mailbox 3 Identifier High Register    	*/

#define CAN_MB04_DATA0		0xFFC02C80	/* Mailbox 4 Data Word 0 [15:0] Register 	*/
#define CAN_MB04_DATA1		0xFFC02C84	/* Mailbox 4 Data Word 1 [31:16] Register	*/
#define CAN_MB04_DATA2		0xFFC02C88	/* Mailbox 4 Data Word 2 [47:32] Register	*/
#define CAN_MB04_DATA3		0xFFC02C8C	/* Mailbox 4 Data Word 3 [63:48] Register	*/
#define CAN_MB04_LENGTH		0xFFC02C90	/* Mailbox 4 Data Length Code Register   	*/
#define CAN_MB04_TIMESTAMP	0xFFC02C94	/* Mailbox 4 Time Stamp Value Register   	*/
#define CAN_MB04_ID0		0xFFC02C98	/* Mailbox 4 Identifier Low Register     	*/
#define CAN_MB04_ID1		0xFFC02C9C	/* Mailbox 4 Identifier High Register    	*/

#define CAN_MB05_DATA0		0xFFC02CA0	/* Mailbox 5 Data Word 0 [15:0] Register 	*/
#define CAN_MB05_DATA1		0xFFC02CA4	/* Mailbox 5 Data Word 1 [31:16] Register	*/
#define CAN_MB05_DATA2		0xFFC02CA8	/* Mailbox 5 Data Word 2 [47:32] Register	*/
#define CAN_MB05_DATA3		0xFFC02CAC	/* Mailbox 5 Data Word 3 [63:48] Register	*/
#define CAN_MB05_LENGTH		0xFFC02CB0	/* Mailbox 5 Data Length Code Register   	*/
#define CAN_MB05_TIMESTAMP	0xFFC02CB4	/* Mailbox 5 Time Stamp Value Register   	*/
#define CAN_MB05_ID0		0xFFC02CB8	/* Mailbox 5 Identifier Low Register     	*/
#define CAN_MB05_ID1		0xFFC02CBC	/* Mailbox 5 Identifier High Register    	*/

#define CAN_MB06_DATA0		0xFFC02CC0	/* Mailbox 6 Data Word 0 [15:0] Register 	*/
#define CAN_MB06_DATA1		0xFFC02CC4	/* Mailbox 6 Data Word 1 [31:16] Register	*/
#define CAN_MB06_DATA2		0xFFC02CC8	/* Mailbox 6 Data Word 2 [47:32] Register	*/
#define CAN_MB06_DATA3		0xFFC02CCC	/* Mailbox 6 Data Word 3 [63:48] Register	*/
#define CAN_MB06_LENGTH		0xFFC02CD0	/* Mailbox 6 Data Length Code Register   	*/
#define CAN_MB06_TIMESTAMP	0xFFC02CD4	/* Mailbox 6 Time Stamp Value Register   	*/
#define CAN_MB06_ID0		0xFFC02CD8	/* Mailbox 6 Identifier Low Register     	*/
#define CAN_MB06_ID1		0xFFC02CDC	/* Mailbox 6 Identifier High Register    	*/

#define CAN_MB07_DATA0		0xFFC02CE0	/* Mailbox 7 Data Word 0 [15:0] Register 	*/
#define CAN_MB07_DATA1		0xFFC02CE4	/* Mailbox 7 Data Word 1 [31:16] Register	*/
#define CAN_MB07_DATA2		0xFFC02CE8	/* Mailbox 7 Data Word 2 [47:32] Register	*/
#define CAN_MB07_DATA3		0xFFC02CEC	/* Mailbox 7 Data Word 3 [63:48] Register	*/
#define CAN_MB07_LENGTH		0xFFC02CF0	/* Mailbox 7 Data Length Code Register   	*/
#define CAN_MB07_TIMESTAMP	0xFFC02CF4	/* Mailbox 7 Time Stamp Value Register   	*/
#define CAN_MB07_ID0		0xFFC02CF8	/* Mailbox 7 Identifier Low Register     	*/
#define CAN_MB07_ID1		0xFFC02CFC	/* Mailbox 7 Identifier High Register    	*/

#define CAN_MB08_DATA0		0xFFC02D00	/* Mailbox 8 Data Word 0 [15:0] Register 	*/
#define CAN_MB08_DATA1		0xFFC02D04	/* Mailbox 8 Data Word 1 [31:16] Register	*/
#define CAN_MB08_DATA2		0xFFC02D08	/* Mailbox 8 Data Word 2 [47:32] Register	*/
#define CAN_MB08_DATA3		0xFFC02D0C	/* Mailbox 8 Data Word 3 [63:48] Register	*/
#define CAN_MB08_LENGTH		0xFFC02D10	/* Mailbox 8 Data Length Code Register   	*/
#define CAN_MB08_TIMESTAMP	0xFFC02D14	/* Mailbox 8 Time Stamp Value Register   	*/
#define CAN_MB08_ID0		0xFFC02D18	/* Mailbox 8 Identifier Low Register     	*/
#define CAN_MB08_ID1		0xFFC02D1C	/* Mailbox 8 Identifier High Register    	*/

#define CAN_MB09_DATA0		0xFFC02D20	/* Mailbox 9 Data Word 0 [15:0] Register 	*/
#define CAN_MB09_DATA1		0xFFC02D24	/* Mailbox 9 Data Word 1 [31:16] Register	*/
#define CAN_MB09_DATA2		0xFFC02D28	/* Mailbox 9 Data Word 2 [47:32] Register	*/
#define CAN_MB09_DATA3		0xFFC02D2C	/* Mailbox 9 Data Word 3 [63:48] Register	*/
#define CAN_MB09_LENGTH		0xFFC02D30	/* Mailbox 9 Data Length Code Register   	*/
#define CAN_MB09_TIMESTAMP	0xFFC02D34	/* Mailbox 9 Time Stamp Value Register   	*/
#define CAN_MB09_ID0		0xFFC02D38	/* Mailbox 9 Identifier Low Register     	*/
#define CAN_MB09_ID1		0xFFC02D3C	/* Mailbox 9 Identifier High Register    	*/

#define CAN_MB10_DATA0		0xFFC02D40	/* Mailbox 10 Data Word 0 [15:0] Register 	*/
#define CAN_MB10_DATA1		0xFFC02D44	/* Mailbox 10 Data Word 1 [31:16] Register	*/
#define CAN_MB10_DATA2		0xFFC02D48	/* Mailbox 10 Data Word 2 [47:32] Register	*/
#define CAN_MB10_DATA3		0xFFC02D4C	/* Mailbox 10 Data Word 3 [63:48] Register	*/
#define CAN_MB10_LENGTH		0xFFC02D50	/* Mailbox 10 Data Length Code Register   	*/
#define CAN_MB10_TIMESTAMP	0xFFC02D54	/* Mailbox 10 Time Stamp Value Register   	*/
#define CAN_MB10_ID0		0xFFC02D58	/* Mailbox 10 Identifier Low Register     	*/
#define CAN_MB10_ID1		0xFFC02D5C	/* Mailbox 10 Identifier High Register    	*/

#define CAN_MB11_DATA0		0xFFC02D60	/* Mailbox 11 Data Word 0 [15:0] Register 	*/
#define CAN_MB11_DATA1		0xFFC02D64	/* Mailbox 11 Data Word 1 [31:16] Register	*/
#define CAN_MB11_DATA2		0xFFC02D68	/* Mailbox 11 Data Word 2 [47:32] Register	*/
#define CAN_MB11_DATA3		0xFFC02D6C	/* Mailbox 11 Data Word 3 [63:48] Register	*/
#define CAN_MB11_LENGTH		0xFFC02D70	/* Mailbox 11 Data Length Code Register   	*/
#define CAN_MB11_TIMESTAMP	0xFFC02D74	/* Mailbox 11 Time Stamp Value Register   	*/
#define CAN_MB11_ID0		0xFFC02D78	/* Mailbox 11 Identifier Low Register     	*/
#define CAN_MB11_ID1		0xFFC02D7C	/* Mailbox 11 Identifier High Register    	*/

#define CAN_MB12_DATA0		0xFFC02D80	/* Mailbox 12 Data Word 0 [15:0] Register 	*/
#define CAN_MB12_DATA1		0xFFC02D84	/* Mailbox 12 Data Word 1 [31:16] Register	*/
#define CAN_MB12_DATA2		0xFFC02D88	/* Mailbox 12 Data Word 2 [47:32] Register	*/
#define CAN_MB12_DATA3		0xFFC02D8C	/* Mailbox 12 Data Word 3 [63:48] Register	*/
#define CAN_MB12_LENGTH		0xFFC02D90	/* Mailbox 12 Data Length Code Register   	*/
#define CAN_MB12_TIMESTAMP	0xFFC02D94	/* Mailbox 12 Time Stamp Value Register   	*/
#define CAN_MB12_ID0		0xFFC02D98	/* Mailbox 12 Identifier Low Register     	*/
#define CAN_MB12_ID1		0xFFC02D9C	/* Mailbox 12 Identifier High Register    	*/

#define CAN_MB13_DATA0		0xFFC02DA0	/* Mailbox 13 Data Word 0 [15:0] Register 	*/
#define CAN_MB13_DATA1		0xFFC02DA4	/* Mailbox 13 Data Word 1 [31:16] Register	*/
#define CAN_MB13_DATA2		0xFFC02DA8	/* Mailbox 13 Data Word 2 [47:32] Register	*/
#define CAN_MB13_DATA3		0xFFC02DAC	/* Mailbox 13 Data Word 3 [63:48] Register	*/
#define CAN_MB13_LENGTH		0xFFC02DB0	/* Mailbox 13 Data Length Code Register   	*/
#define CAN_MB13_TIMESTAMP	0xFFC02DB4	/* Mailbox 13 Time Stamp Value Register   	*/
#define CAN_MB13_ID0		0xFFC02DB8	/* Mailbox 13 Identifier Low Register     	*/
#define CAN_MB13_ID1		0xFFC02DBC	/* Mailbox 13 Identifier High Register    	*/

#define CAN_MB14_DATA0		0xFFC02DC0	/* Mailbox 14 Data Word 0 [15:0] Register 	*/
#define CAN_MB14_DATA1		0xFFC02DC4	/* Mailbox 14 Data Word 1 [31:16] Register	*/
#define CAN_MB14_DATA2		0xFFC02DC8	/* Mailbox 14 Data Word 2 [47:32] Register	*/
#define CAN_MB14_DATA3		0xFFC02DCC	/* Mailbox 14 Data Word 3 [63:48] Register	*/
#define CAN_MB14_LENGTH		0xFFC02DD0	/* Mailbox 14 Data Length Code Register   	*/
#define CAN_MB14_TIMESTAMP	0xFFC02DD4	/* Mailbox 14 Time Stamp Value Register   	*/
#define CAN_MB14_ID0		0xFFC02DD8	/* Mailbox 14 Identifier Low Register     	*/
#define CAN_MB14_ID1		0xFFC02DDC	/* Mailbox 14 Identifier High Register    	*/

#define CAN_MB15_DATA0		0xFFC02DE0	/* Mailbox 15 Data Word 0 [15:0] Register 	*/
#define CAN_MB15_DATA1		0xFFC02DE4	/* Mailbox 15 Data Word 1 [31:16] Register	*/
#define CAN_MB15_DATA2		0xFFC02DE8	/* Mailbox 15 Data Word 2 [47:32] Register	*/
#define CAN_MB15_DATA3		0xFFC02DEC	/* Mailbox 15 Data Word 3 [63:48] Register	*/
#define CAN_MB15_LENGTH		0xFFC02DF0	/* Mailbox 15 Data Length Code Register   	*/
#define CAN_MB15_TIMESTAMP	0xFFC02DF4	/* Mailbox 15 Time Stamp Value Register   	*/
#define CAN_MB15_ID0		0xFFC02DF8	/* Mailbox 15 Identifier Low Register     	*/
#define CAN_MB15_ID1		0xFFC02DFC	/* Mailbox 15 Identifier High Register    	*/

#define CAN_MB16_DATA0		0xFFC02E00	/* Mailbox 16 Data Word 0 [15:0] Register 	*/
#define CAN_MB16_DATA1		0xFFC02E04	/* Mailbox 16 Data Word 1 [31:16] Register	*/
#define CAN_MB16_DATA2		0xFFC02E08	/* Mailbox 16 Data Word 2 [47:32] Register	*/
#define CAN_MB16_DATA3		0xFFC02E0C	/* Mailbox 16 Data Word 3 [63:48] Register	*/
#define CAN_MB16_LENGTH		0xFFC02E10	/* Mailbox 16 Data Length Code Register   	*/
#define CAN_MB16_TIMESTAMP	0xFFC02E14	/* Mailbox 16 Time Stamp Value Register   	*/
#define CAN_MB16_ID0		0xFFC02E18	/* Mailbox 16 Identifier Low Register     	*/
#define CAN_MB16_ID1		0xFFC02E1C	/* Mailbox 16 Identifier High Register    	*/

#define CAN_MB17_DATA0		0xFFC02E20	/* Mailbox 17 Data Word 0 [15:0] Register 	*/
#define CAN_MB17_DATA1		0xFFC02E24	/* Mailbox 17 Data Word 1 [31:16] Register	*/
#define CAN_MB17_DATA2		0xFFC02E28	/* Mailbox 17 Data Word 2 [47:32] Register	*/
#define CAN_MB17_DATA3		0xFFC02E2C	/* Mailbox 17 Data Word 3 [63:48] Register	*/
#define CAN_MB17_LENGTH		0xFFC02E30	/* Mailbox 17 Data Length Code Register   	*/
#define CAN_MB17_TIMESTAMP	0xFFC02E34	/* Mailbox 17 Time Stamp Value Register   	*/
#define CAN_MB17_ID0		0xFFC02E38	/* Mailbox 17 Identifier Low Register     	*/
#define CAN_MB17_ID1		0xFFC02E3C	/* Mailbox 17 Identifier High Register    	*/

#define CAN_MB18_DATA0		0xFFC02E40	/* Mailbox 18 Data Word 0 [15:0] Register 	*/
#define CAN_MB18_DATA1		0xFFC02E44	/* Mailbox 18 Data Word 1 [31:16] Register	*/
#define CAN_MB18_DATA2		0xFFC02E48	/* Mailbox 18 Data Word 2 [47:32] Register	*/
#define CAN_MB18_DATA3		0xFFC02E4C	/* Mailbox 18 Data Word 3 [63:48] Register	*/
#define CAN_MB18_LENGTH		0xFFC02E50	/* Mailbox 18 Data Length Code Register   	*/
#define CAN_MB18_TIMESTAMP	0xFFC02E54	/* Mailbox 18 Time Stamp Value Register   	*/
#define CAN_MB18_ID0		0xFFC02E58	/* Mailbox 18 Identifier Low Register     	*/
#define CAN_MB18_ID1		0xFFC02E5C	/* Mailbox 18 Identifier High Register    	*/

#define CAN_MB19_DATA0		0xFFC02E60	/* Mailbox 19 Data Word 0 [15:0] Register 	*/
#define CAN_MB19_DATA1		0xFFC02E64	/* Mailbox 19 Data Word 1 [31:16] Register	*/
#define CAN_MB19_DATA2		0xFFC02E68	/* Mailbox 19 Data Word 2 [47:32] Register	*/
#define CAN_MB19_DATA3		0xFFC02E6C	/* Mailbox 19 Data Word 3 [63:48] Register	*/
#define CAN_MB19_LENGTH		0xFFC02E70	/* Mailbox 19 Data Length Code Register   	*/
#define CAN_MB19_TIMESTAMP	0xFFC02E74	/* Mailbox 19 Time Stamp Value Register   	*/
#define CAN_MB19_ID0		0xFFC02E78	/* Mailbox 19 Identifier Low Register     	*/
#define CAN_MB19_ID1		0xFFC02E7C	/* Mailbox 19 Identifier High Register    	*/

#define CAN_MB20_DATA0		0xFFC02E80	/* Mailbox 20 Data Word 0 [15:0] Register 	*/
#define CAN_MB20_DATA1		0xFFC02E84	/* Mailbox 20 Data Word 1 [31:16] Register	*/
#define CAN_MB20_DATA2		0xFFC02E88	/* Mailbox 20 Data Word 2 [47:32] Register	*/
#define CAN_MB20_DATA3		0xFFC02E8C	/* Mailbox 20 Data Word 3 [63:48] Register	*/
#define CAN_MB20_LENGTH		0xFFC02E90	/* Mailbox 20 Data Length Code Register   	*/
#define CAN_MB20_TIMESTAMP	0xFFC02E94	/* Mailbox 20 Time Stamp Value Register   	*/
#define CAN_MB20_ID0		0xFFC02E98	/* Mailbox 20 Identifier Low Register     	*/
#define CAN_MB20_ID1		0xFFC02E9C	/* Mailbox 20 Identifier High Register    	*/

#define CAN_MB21_DATA0		0xFFC02EA0	/* Mailbox 21 Data Word 0 [15:0] Register 	*/
#define CAN_MB21_DATA1		0xFFC02EA4	/* Mailbox 21 Data Word 1 [31:16] Register	*/
#define CAN_MB21_DATA2		0xFFC02EA8	/* Mailbox 21 Data Word 2 [47:32] Register	*/
#define CAN_MB21_DATA3		0xFFC02EAC	/* Mailbox 21 Data Word 3 [63:48] Register	*/
#define CAN_MB21_LENGTH		0xFFC02EB0	/* Mailbox 21 Data Length Code Register   	*/
#define CAN_MB21_TIMESTAMP	0xFFC02EB4	/* Mailbox 21 Time Stamp Value Register   	*/
#define CAN_MB21_ID0		0xFFC02EB8	/* Mailbox 21 Identifier Low Register     	*/
#define CAN_MB21_ID1		0xFFC02EBC	/* Mailbox 21 Identifier High Register    	*/

#define CAN_MB22_DATA0		0xFFC02EC0	/* Mailbox 22 Data Word 0 [15:0] Register 	*/
#define CAN_MB22_DATA1		0xFFC02EC4	/* Mailbox 22 Data Word 1 [31:16] Register	*/
#define CAN_MB22_DATA2		0xFFC02EC8	/* Mailbox 22 Data Word 2 [47:32] Register	*/
#define CAN_MB22_DATA3		0xFFC02ECC	/* Mailbox 22 Data Word 3 [63:48] Register	*/
#define CAN_MB22_LENGTH		0xFFC02ED0	/* Mailbox 22 Data Length Code Register   	*/
#define CAN_MB22_TIMESTAMP	0xFFC02ED4	/* Mailbox 22 Time Stamp Value Register   	*/
#define CAN_MB22_ID0		0xFFC02ED8	/* Mailbox 22 Identifier Low Register     	*/
#define CAN_MB22_ID1		0xFFC02EDC	/* Mailbox 22 Identifier High Register    	*/

#define CAN_MB23_DATA0		0xFFC02EE0	/* Mailbox 23 Data Word 0 [15:0] Register 	*/
#define CAN_MB23_DATA1		0xFFC02EE4	/* Mailbox 23 Data Word 1 [31:16] Register	*/
#define CAN_MB23_DATA2		0xFFC02EE8	/* Mailbox 23 Data Word 2 [47:32] Register	*/
#define CAN_MB23_DATA3		0xFFC02EEC	/* Mailbox 23 Data Word 3 [63:48] Register	*/
#define CAN_MB23_LENGTH		0xFFC02EF0	/* Mailbox 23 Data Length Code Register   	*/
#define CAN_MB23_TIMESTAMP	0xFFC02EF4	/* Mailbox 23 Time Stamp Value Register   	*/
#define CAN_MB23_ID0		0xFFC02EF8	/* Mailbox 23 Identifier Low Register     	*/
#define CAN_MB23_ID1		0xFFC02EFC	/* Mailbox 23 Identifier High Register    	*/

#define CAN_MB24_DATA0		0xFFC02F00	/* Mailbox 24 Data Word 0 [15:0] Register 	*/
#define CAN_MB24_DATA1		0xFFC02F04	/* Mailbox 24 Data Word 1 [31:16] Register	*/
#define CAN_MB24_DATA2		0xFFC02F08	/* Mailbox 24 Data Word 2 [47:32] Register	*/
#define CAN_MB24_DATA3		0xFFC02F0C	/* Mailbox 24 Data Word 3 [63:48] Register	*/
#define CAN_MB24_LENGTH		0xFFC02F10	/* Mailbox 24 Data Length Code Register   	*/
#define CAN_MB24_TIMESTAMP	0xFFC02F14	/* Mailbox 24 Time Stamp Value Register   	*/
#define CAN_MB24_ID0		0xFFC02F18	/* Mailbox 24 Identifier Low Register     	*/
#define CAN_MB24_ID1		0xFFC02F1C	/* Mailbox 24 Identifier High Register    	*/

#define CAN_MB25_DATA0		0xFFC02F20	/* Mailbox 25 Data Word 0 [15:0] Register 	*/
#define CAN_MB25_DATA1		0xFFC02F24	/* Mailbox 25 Data Word 1 [31:16] Register	*/
#define CAN_MB25_DATA2		0xFFC02F28	/* Mailbox 25 Data Word 2 [47:32] Register	*/
#define CAN_MB25_DATA3		0xFFC02F2C	/* Mailbox 25 Data Word 3 [63:48] Register	*/
#define CAN_MB25_LENGTH		0xFFC02F30	/* Mailbox 25 Data Length Code Register   	*/
#define CAN_MB25_TIMESTAMP	0xFFC02F34	/* Mailbox 25 Time Stamp Value Register   	*/
#define CAN_MB25_ID0		0xFFC02F38	/* Mailbox 25 Identifier Low Register     	*/
#define CAN_MB25_ID1		0xFFC02F3C	/* Mailbox 25 Identifier High Register    	*/

#define CAN_MB26_DATA0		0xFFC02F40	/* Mailbox 26 Data Word 0 [15:0] Register 	*/
#define CAN_MB26_DATA1		0xFFC02F44	/* Mailbox 26 Data Word 1 [31:16] Register	*/
#define CAN_MB26_DATA2		0xFFC02F48	/* Mailbox 26 Data Word 2 [47:32] Register	*/
#define CAN_MB26_DATA3		0xFFC02F4C	/* Mailbox 26 Data Word 3 [63:48] Register	*/
#define CAN_MB26_LENGTH		0xFFC02F50	/* Mailbox 26 Data Length Code Register   	*/
#define CAN_MB26_TIMESTAMP	0xFFC02F54	/* Mailbox 26 Time Stamp Value Register   	*/
#define CAN_MB26_ID0		0xFFC02F58	/* Mailbox 26 Identifier Low Register     	*/
#define CAN_MB26_ID1		0xFFC02F5C	/* Mailbox 26 Identifier High Register    	*/

#define CAN_MB27_DATA0		0xFFC02F60	/* Mailbox 27 Data Word 0 [15:0] Register 	*/
#define CAN_MB27_DATA1		0xFFC02F64	/* Mailbox 27 Data Word 1 [31:16] Register	*/
#define CAN_MB27_DATA2		0xFFC02F68	/* Mailbox 27 Data Word 2 [47:32] Register	*/
#define CAN_MB27_DATA3		0xFFC02F6C	/* Mailbox 27 Data Word 3 [63:48] Register	*/
#define CAN_MB27_LENGTH		0xFFC02F70	/* Mailbox 27 Data Length Code Register   	*/
#define CAN_MB27_TIMESTAMP	0xFFC02F74	/* Mailbox 27 Time Stamp Value Register   	*/
#define CAN_MB27_ID0		0xFFC02F78	/* Mailbox 27 Identifier Low Register     	*/
#define CAN_MB27_ID1		0xFFC02F7C	/* Mailbox 27 Identifier High Register    	*/

#define CAN_MB28_DATA0		0xFFC02F80	/* Mailbox 28 Data Word 0 [15:0] Register 	*/
#define CAN_MB28_DATA1		0xFFC02F84	/* Mailbox 28 Data Word 1 [31:16] Register	*/
#define CAN_MB28_DATA2		0xFFC02F88	/* Mailbox 28 Data Word 2 [47:32] Register	*/
#define CAN_MB28_DATA3		0xFFC02F8C	/* Mailbox 28 Data Word 3 [63:48] Register	*/
#define CAN_MB28_LENGTH		0xFFC02F90	/* Mailbox 28 Data Length Code Register   	*/
#define CAN_MB28_TIMESTAMP	0xFFC02F94	/* Mailbox 28 Time Stamp Value Register   	*/
#define CAN_MB28_ID0		0xFFC02F98	/* Mailbox 28 Identifier Low Register     	*/
#define CAN_MB28_ID1		0xFFC02F9C	/* Mailbox 28 Identifier High Register    	*/

#define CAN_MB29_DATA0		0xFFC02FA0	/* Mailbox 29 Data Word 0 [15:0] Register 	*/
#define CAN_MB29_DATA1		0xFFC02FA4	/* Mailbox 29 Data Word 1 [31:16] Register	*/
#define CAN_MB29_DATA2		0xFFC02FA8	/* Mailbox 29 Data Word 2 [47:32] Register	*/
#define CAN_MB29_DATA3		0xFFC02FAC	/* Mailbox 29 Data Word 3 [63:48] Register	*/
#define CAN_MB29_LENGTH		0xFFC02FB0	/* Mailbox 29 Data Length Code Register   	*/
#define CAN_MB29_TIMESTAMP	0xFFC02FB4	/* Mailbox 29 Time Stamp Value Register   	*/
#define CAN_MB29_ID0		0xFFC02FB8	/* Mailbox 29 Identifier Low Register     	*/
#define CAN_MB29_ID1		0xFFC02FBC	/* Mailbox 29 Identifier High Register    	*/

#define CAN_MB30_DATA0		0xFFC02FC0	/* Mailbox 30 Data Word 0 [15:0] Register 	*/
#define CAN_MB30_DATA1		0xFFC02FC4	/* Mailbox 30 Data Word 1 [31:16] Register	*/
#define CAN_MB30_DATA2		0xFFC02FC8	/* Mailbox 30 Data Word 2 [47:32] Register	*/
#define CAN_MB30_DATA3		0xFFC02FCC	/* Mailbox 30 Data Word 3 [63:48] Register	*/
#define CAN_MB30_LENGTH		0xFFC02FD0	/* Mailbox 30 Data Length Code Register   	*/
#define CAN_MB30_TIMESTAMP	0xFFC02FD4	/* Mailbox 30 Time Stamp Value Register   	*/
#define CAN_MB30_ID0		0xFFC02FD8	/* Mailbox 30 Identifier Low Register     	*/
#define CAN_MB30_ID1		0xFFC02FDC	/* Mailbox 30 Identifier High Register    	*/

#define CAN_MB31_DATA0		0xFFC02FE0	/* Mailbox 31 Data Word 0 [15:0] Register 	*/
#define CAN_MB31_DATA1		0xFFC02FE4	/* Mailbox 31 Data Word 1 [31:16] Register	*/
#define CAN_MB31_DATA2		0xFFC02FE8	/* Mailbox 31 Data Word 2 [47:32] Register	*/
#define CAN_MB31_DATA3		0xFFC02FEC	/* Mailbox 31 Data Word 3 [63:48] Register	*/
#define CAN_MB31_LENGTH		0xFFC02FF0	/* Mailbox 31 Data Length Code Register   	*/
#define CAN_MB31_TIMESTAMP	0xFFC02FF4	/* Mailbox 31 Time Stamp Value Register   	*/
#define CAN_MB31_ID0		0xFFC02FF8	/* Mailbox 31 Identifier Low Register     	*/
#define CAN_MB31_ID1		0xFFC02FFC	/* Mailbox 31 Identifier High Register    	*/

/* CAN Mailbox Area Macros				*/
#define CAN_MB_ID1(x)		(CAN_MB00_ID1+((x)*0x20))
#define CAN_MB_ID0(x)		(CAN_MB00_ID0+((x)*0x20))
#define CAN_MB_TIMESTAMP(x)	(CAN_MB00_TIMESTAMP+((x)*0x20))
#define CAN_MB_LENGTH(x)	(CAN_MB00_LENGTH+((x)*0x20))
#define CAN_MB_DATA3(x)		(CAN_MB00_DATA3+((x)*0x20))
#define CAN_MB_DATA2(x)		(CAN_MB00_DATA2+((x)*0x20))
#define CAN_MB_DATA1(x)		(CAN_MB00_DATA1+((x)*0x20))
#define CAN_MB_DATA0(x)		(CAN_MB00_DATA0+((x)*0x20))


/* Pin Control Registers	(0xFFC03200 - 0xFFC032FF)											*/
#define PORTF_FER			0xFFC03200	/* Port F Function Enable Register (Alternate/Flag*)	*/
#define PORTG_FER			0xFFC03204	/* Port G Function Enable Register (Alternate/Flag*)	*/
#define PORTH_FER			0xFFC03208	/* Port H Function Enable Register (Alternate/Flag*)	*/
#define PORT_MUX			0xFFC0320C	/* Port Multiplexer Control Register					*/


/* Handshake MDMA Registers	(0xFFC03300 - 0xFFC033FF)										*/
#define HMDMA0_CONTROL		0xFFC03300	/* Handshake MDMA0 Control Register					*/
#define HMDMA0_ECINIT		0xFFC03304	/* HMDMA0 Initial Edge Count Register				*/
#define HMDMA0_BCINIT		0xFFC03308	/* HMDMA0 Initial Block Count Register				*/
#define HMDMA0_ECURGENT		0xFFC0330C	/* HMDMA0 Urgent Edge Count Threshhold Register		*/
#define HMDMA0_ECOVERFLOW	0xFFC03310	/* HMDMA0 Edge Count Overflow Interrupt Register	*/
#define HMDMA0_ECOUNT		0xFFC03314	/* HMDMA0 Current Edge Count Register				*/
#define HMDMA0_BCOUNT		0xFFC03318	/* HMDMA0 Current Block Count Register				*/

#define HMDMA1_CONTROL		0xFFC03340	/* Handshake MDMA1 Control Register					*/
#define HMDMA1_ECINIT		0xFFC03344	/* HMDMA1 Initial Edge Count Register				*/
#define HMDMA1_BCINIT		0xFFC03348	/* HMDMA1 Initial Block Count Register				*/
#define HMDMA1_ECURGENT		0xFFC0334C	/* HMDMA1 Urgent Edge Count Threshhold Register		*/
#define HMDMA1_ECOVERFLOW	0xFFC03350	/* HMDMA1 Edge Count Overflow Interrupt Register	*/
#define HMDMA1_ECOUNT		0xFFC03354	/* HMDMA1 Current Edge Count Register				*/
#define HMDMA1_BCOUNT		0xFFC03358	/* HMDMA1 Current Block Count Register				*/


/***********************************************************************************
** System MMR Register Bits And Macros
**
** Disclaimer:	All macros are intended to make C and Assembly code more readable.
**				Use these macros carefully, as any that do left shifts for field
**				depositing will result in the lower order bits being destroyed.  Any
**				macro that shifts left to properly position the bit-field should be
**				used as part of an OR to initialize a register and NOT as a dynamic
**				modifier UNLESS the lower order bits are saved and ORed back in when
**				the macro is used.
*************************************************************************************/
/*
** ********************* PLL AND RESET MASKS ****************************************/
/* PLL_CTL Masks																	*/
#define DF				0x0001	/* 0: PLL = CLKIN, 1: PLL = CLKIN/2					*/
#define PLL_OFF			0x0002	/* PLL Not Powered									*/
#define STOPCK			0x0008	/* Core Clock Off									*/
#define PDWN			0x0020	/* Enter Deep Sleep Mode							*/
#define	IN_DELAY		0x0040	/* Add 200ps Delay To EBIU Input Latches			*/
#define	OUT_DELAY		0x0080	/* Add 200ps Delay To EBIU Output Signals			*/
#define BYPASS			0x0100	/* Bypass the PLL									*/
#define	MSEL			0x7E00	/* Multiplier Select For CCLK/VCO Factors			*/
#define SPORT_HYS               0x8000  /* Add 250mV of Hysteresis to SPORT Inputs */
/* PLL_CTL Macros											*/
#ifdef _MISRA_RULES
#define	SET_MSEL(x)		(((x)&0x3Fu) << 0x9)	/* Set MSEL = 0-63 --> VCO = CLKIN*MSEL		*/
#else
#define	SET_MSEL(x)		(((x)&0x3F) << 0x9)	/* Set MSEL = 0-63 --> VCO = CLKIN*MSEL		*/
#endif /* _MISRA_RULES */

/* PLL_DIV Masks														*/
#define SSEL			0x000F	/* System Select						*/
#define	CSEL			0x0030	/* Core Select							*/
#define CSEL_DIV1		0x0000	/* 	CCLK = VCO / 1					*/
#define CSEL_DIV2		0x0010	/* 	CCLK = VCO / 2					*/
#define	CSEL_DIV4		0x0020	/* 	CCLK = VCO / 4					*/
#define	CSEL_DIV8		0x0030	/* 	CCLK = VCO / 8					*/
/* PLL_DIV Macros														*/
#ifdef _MISRA_RULES
#define SET_SSEL(x)		((x)&0xFu)		/* Set SSEL = 0-15 --> SCLK = VCO/SSEL	*/
#else
#define SET_SSEL(x)		((x)&0xF)		/* Set SSEL = 0-15 --> SCLK = VCO/SSEL	*/
#endif /* _MISRA_RULES */

/* VR_CTL Masks																	*/
#define	FREQ			0x0003	/* Switching Oscillator Frequency For Regulator	*/
#define	HIBERNATE		0x0000	/* 	Powerdown/Bypass On-Board Regulation	*/
#define	FREQ_333		0x0001	/* 	Switching Frequency Is 333 kHz			*/
#define	FREQ_667		0x0002	/* 	Switching Frequency Is 667 kHz			*/
#define	FREQ_1000		0x0003	/* 	Switching Frequency Is 1 MHz			*/

#define GAIN			0x000C	/* Voltage Level Gain	*/
#define	GAIN_5			0x0000	/* 	GAIN = 5		*/
#define	GAIN_10			0x0004	/* 	GAIN = 10		*/
#define	GAIN_20			0x0008	/* 	GAIN = 20		*/
#define	GAIN_50			0x000C	/* 	GAIN = 50		*/

#define	VLEV			0x00F0	/* Internal Voltage Level - Only Program Values Within Specifications	*/
#define	VLEV_085 		0x0060	/* 	VLEV = 0.85 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_090		0x0070	/* 	VLEV = 0.90 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_095		0x0080	/* 	VLEV = 0.95 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_100		0x0090	/* 	VLEV = 1.00 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_105		0x00A0	/* 	VLEV = 1.05 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_110		0x00B0	/* 	VLEV = 1.10 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_115		0x00C0	/* 	VLEV = 1.15 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_120		0x00D0	/* 	VLEV = 1.20 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_125		0x00E0	/* 	VLEV = 1.25 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_130		0x00F0	/* 	VLEV = 1.30 V (See Datasheet for Regulator Tolerance)	*/

#define	WAKE			0x0100	/* Enable RTC/Reset Wakeup From Hibernate	*/
#define	CANWE			0x0200	/* Enable CAN Wakeup From Hibernate			*/
#define	PHYWE			0x0400	/* Enable PHY Wakeup From Hibernate			*/
#define	CLKBUFOE		0x4000	/* CLKIN Buffer Output Enable */
#define	PHYCLKOE		CLKBUFOE	/* Alternative legacy name for the above */
#define	SCKELOW		0x8000	/* Enable Drive CKE Low During Reset		*/

/* PLL_STAT Masks																	*/
#define ACTIVE_PLLENABLED	0x0001	/* Processor In Active Mode With PLL Enabled	*/
#define	FULL_ON				0x0002	/* Processor In Full On Mode					*/
#define ACTIVE_PLLDISABLED	0x0004	/* Processor In Active Mode With PLL Disabled	*/
#define	PLL_LOCKED			0x0020	/* PLL_LOCKCNT Has Been Reached					*/

/* SWRST Masks																		*/
#define SYSTEM_RESET		0x0007	/* Initiates A System Software Reset			*/
#define	DOUBLE_FAULT		0x0008	/* Core Double Fault Causes Reset				*/
#define RESET_DOUBLE		0x2000	/* SW Reset Generated By Core Double-Fault		*/
#define RESET_WDOG			0x4000	/* SW Reset Generated By Watchdog Timer			*/
#define RESET_SOFTWARE		0x8000	/* SW Reset Occurred Since Last Read Of SWRST	*/

/* SYSCR Masks																				*/
/* SYSCR Masks */
#define BMODE_BYPASS    0x0000   /* Bypass boot ROM, execute from 16-bit external memory */
#define BMODE_FLASH     0x0001   /* Use Boot ROM to load from 8-bit or 16-bit flash */
#define BMODE_SPIMEM    0x0003   /* Boot from serial SPI memory */
#define BMODE_SPIHOST   0x0004   /* Boot from SPI0 host (slave mode) */
#define BMODE_TWIMEM    0x0005   /* Boot from serial TWI memory */
#define BMODE_TWIHOST   0x0006   /* Boot from TWI0 host (slave mode) */
#define BMODE_UARTHOST  0x0007   /* Boot from UART0 host */
#define BMODE				0x0007	/* Boot Mode - Latched During HW Reset From Mode Pins	*/
#define	NOBOOT				0x0010	/* Execute From L1 or ASYNC Bank 0 When BMODE = 0		*/


/* *************  SYSTEM INTERRUPT CONTROLLER MASKS *************************************/
/* Peripheral Masks For SIC_ISR, SIC_IWR, SIC_IMASK										*/
#define IRQ_PLL_WAKEUP	0x00000001	/* PLL Wakeup Interrupt			 					*/

#define IRQ_ERROR1      0x00000002  /* Error Interrupt (DMA, DMARx Block, DMARx Overflow) */
#define IRQ_ERROR2      0x00000004  /* Error Interrupt (CAN, Ethernet, SPORTx, PPI, SPI, UARTx) */
#define IRQ_RTC			0x00000008	/* Real Time Clock Interrupt 						*/
#define IRQ_DMA0		0x00000010	/* DMA Channel 0 (PPI) Interrupt 					*/
#define IRQ_DMA3		0x00000020	/* DMA Channel 3 (SPORT0 RX) Interrupt 				*/
#define IRQ_DMA4		0x00000040	/* DMA Channel 4 (SPORT0 TX) Interrupt 				*/
#define IRQ_DMA5		0x00000080	/* DMA Channel 5 (SPORT1 RX) Interrupt 				*/

#define IRQ_DMA6		0x00000100	/* DMA Channel 6 (SPORT1 TX) Interrupt 		 		*/
#define IRQ_TWI			0x00000200	/* TWI Interrupt									*/
#define IRQ_DMA7		0x00000400	/* DMA Channel 7 (SPI) Interrupt 					*/
#define IRQ_DMA8		0x00000800	/* DMA Channel 8 (UART0 RX) Interrupt 				*/
#define IRQ_DMA9		0x00001000	/* DMA Channel 9 (UART0 TX) Interrupt 				*/
#define IRQ_DMA10		0x00002000	/* DMA Channel 10 (UART1 RX) Interrupt 				*/
#define IRQ_DMA11		0x00004000	/* DMA Channel 11 (UART1 TX) Interrupt 				*/
#define IRQ_CAN_RX		0x00008000	/* CAN Receive Interrupt 							*/

#define IRQ_CAN_TX		0x00010000	/* CAN Transmit Interrupt  							*/
#define IRQ_DMA1		0x00020000	/* DMA Channel 1 (Ethernet RX) Interrupt 			*/
#define IRQ_PFA_PORTH	0x00020000	/* PF Port H (PF47:32) Interrupt A 					*/
#define IRQ_DMA2		0x00040000	/* DMA Channel 2 (Ethernet TX) Interrupt 			*/
#define IRQ_PFB_PORTH	0x00040000	/* PF Port H (PF47:32) Interrupt B 					*/
#define IRQ_TIMER0		0x00080000	/* Timer 0 Interrupt								*/
#define IRQ_TIMER1		0x00100000	/* Timer 1 Interrupt 								*/
#define IRQ_TIMER2		0x00200000	/* Timer 2 Interrupt 								*/
#define IRQ_TIMER3		0x00400000	/* Timer 3 Interrupt 								*/
#define IRQ_TIMER4		0x00800000	/* Timer 4 Interrupt 								*/

#define IRQ_TIMER5		0x01000000	/* Timer 5 Interrupt 								*/
#define IRQ_TIMER6		0x02000000	/* Timer 6 Interrupt 								*/
#define IRQ_TIMER7		0x04000000	/* Timer 7 Interrupt 								*/
#define IRQ_PFA_PORTFG	0x08000000	/* PF Ports F&G (PF31:0) Interrupt A 				*/
#define IRQ_PFB_PORTF	0x80000000	/* PF Port F (PF15:0) Interrupt B 					*/
#define IRQ_DMA12		0x20000000	/* DMA Channels 12 (MDMA1 Source) RX Interrupt 		*/
#define IRQ_DMA13		0x20000000	/* DMA Channels 13 (MDMA1 Destination) TX Interrupt */
#define IRQ_DMA14		0x40000000	/* DMA Channels 14 (MDMA0 Source) RX Interrupt 		*/
#define IRQ_DMA15		0x40000000	/* DMA Channels 15 (MDMA0 Destination) TX Interrupt */
#define IRQ_WDOG		0x80000000	/* Software Watchdog Timer Interrupt 				*/
#define IRQ_PFB_PORTG	0x10000000	/* PF Port G (PF31:16) Interrupt B 					*/

#ifdef _MISRA_RULES
#define _MF15 0xFu
#define _MF7 7u
#else
#define _MF15 0xF
#define _MF7 7
#endif /* _MISRA_RULES */

/* SIC_IAR0 Macros															*/
#define P0_IVG(x)		(((x)&_MF15)-_MF7)			/* Peripheral #0 assigned IVG #x 	*/
#define P1_IVG(x)		(((x)&_MF15)-_MF7) << 0x4	/* Peripheral #1 assigned IVG #x 	*/
#define P2_IVG(x)		(((x)&_MF15)-_MF7) << 0x8	/* Peripheral #2 assigned IVG #x 	*/
#define P3_IVG(x)		(((x)&_MF15)-_MF7) << 0xC	/* Peripheral #3 assigned IVG #x	*/
#define P4_IVG(x)		(((x)&_MF15)-_MF7) << 0x10	/* Peripheral #4 assigned IVG #x	*/
#define P5_IVG(x)		(((x)&_MF15)-_MF7) << 0x14	/* Peripheral #5 assigned IVG #x	*/
#define P6_IVG(x)		(((x)&_MF15)-_MF7) << 0x18	/* Peripheral #6 assigned IVG #x	*/
#define P7_IVG(x)		(((x)&_MF15)-_MF7) << 0x1C	/* Peripheral #7 assigned IVG #x	*/

/* SIC_IAR1 Macros															*/
#define P8_IVG(x)		(((x)&_MF15)-_MF7)			/* Peripheral #8 assigned IVG #x 	*/
#define P9_IVG(x)		(((x)&_MF15)-_MF7) << 0x4	/* Peripheral #9 assigned IVG #x 	*/
#define P10_IVG(x)		(((x)&_MF15)-_MF7) << 0x8	/* Peripheral #10 assigned IVG #x	*/
#define P11_IVG(x)		(((x)&_MF15)-_MF7) << 0xC	/* Peripheral #11 assigned IVG #x 	*/
#define P12_IVG(x)		(((x)&_MF15)-_MF7) << 0x10	/* Peripheral #12 assigned IVG #x	*/
#define P13_IVG(x)		(((x)&_MF15)-_MF7) << 0x14	/* Peripheral #13 assigned IVG #x	*/
#define P14_IVG(x)		(((x)&_MF15)-_MF7) << 0x18	/* Peripheral #14 assigned IVG #x	*/
#define P15_IVG(x)		(((x)&_MF15)-_MF7) << 0x1C	/* Peripheral #15 assigned IVG #x	*/

/* SIC_IAR2 Macros															*/
#define P16_IVG(x)		(((x)&_MF15)-_MF7)			/* Peripheral #16 assigned IVG #x	*/
#define P17_IVG(x)		(((x)&_MF15)-_MF7) << 0x4	/* Peripheral #17 assigned IVG #x	*/
#define P18_IVG(x)		(((x)&_MF15)-_MF7) << 0x8	/* Peripheral #18 assigned IVG #x	*/
#define P19_IVG(x)		(((x)&_MF15)-_MF7) << 0xC	/* Peripheral #19 assigned IVG #x	*/
#define P20_IVG(x)		(((x)&_MF15)-_MF7) << 0x10	/* Peripheral #20 assigned IVG #x	*/
#define P21_IVG(x)		(((x)&_MF15)-_MF7) << 0x14	/* Peripheral #21 assigned IVG #x	*/
#define P22_IVG(x)		(((x)&_MF15)-_MF7) << 0x18	/* Peripheral #22 assigned IVG #x	*/
#define P23_IVG(x)		(((x)&_MF15)-_MF7) << 0x1C	/* Peripheral #23 assigned IVG #x	*/

/* SIC_IAR3 Macros															*/
#define P24_IVG(x)		(((x)&_MF15)-_MF7)			/* Peripheral #24 assigned IVG #x	*/
#define P25_IVG(x)		(((x)&_MF15)-_MF7) << 0x4	/* Peripheral #25 assigned IVG #x	*/
#define P26_IVG(x)		(((x)&_MF15)-_MF7) << 0x8	/* Peripheral #26 assigned IVG #x	*/
#define P27_IVG(x)		(((x)&_MF15)-_MF7) << 0xC	/* Peripheral #27 assigned IVG #x	*/
#define P28_IVG(x)		(((x)&_MF15)-_MF7) << 0x10	/* Peripheral #28 assigned IVG #x	*/
#define P29_IVG(x)		(((x)&_MF15)-_MF7) << 0x14	/* Peripheral #29 assigned IVG #x	*/
#define P30_IVG(x)		(((x)&_MF15)-_MF7) << 0x18	/* Peripheral #30 assigned IVG #x	*/
#define P31_IVG(x)		(((x)&_MF15)-_MF7) << 0x1C	/* Peripheral #31 assigned IVG #x	*/

/* SIC_IMASK Masks*/
#define SIC_UNMASK_ALL 0x00000000         /* Unmask all peripheral interrupts */
#define SIC_MASK_ALL   0xFFFFFFFF         /* Mask all peripheral interrupts   */
#ifdef _MISRA_RULES
#define SIC_MASK(x) ((int32_t)1 << ((x)&0x1Fu))  /* Mask Peripheral #x interrupt  */
#define SIC_UNMASK(x)  (0xFFFFFFFFu ^ ((uint32_t)1 << ((x)&0x1Fu)))  /*Unmask Peripheral #x interrupt*/
#else
#define SIC_MASK(x) (1 << ((x)&0x1F))     /* Mask Peripheral #x interrupt  */
#define SIC_UNMASK(x)  (0xFFFFFFFF ^ (1 << ((x)&0x1F)))  /* Unmask Peripheral #x interrupt */
#endif /* _MISRA_RULES */

/* SIC_IWR Masks*/
#define IWR_DISABLE_ALL 0x00000000        /* Wakeup Disable all peripherals   */
#define IWR_ENABLE_ALL  0xFFFFFFFF        /* Wakeup Enable all peripherals    */
#ifdef _MISRA_RULES
#define IWR_ENABLE(x)   ((int32_t)1 << ((x)&0x1Fu))  /* Wakeup Enable Peripheral #x   */
#define IWR_DISABLE(x)  (0xFFFFFFFFu ^ ((uint32_t)1 << ((x)&0x1Fu)))  /*Wakeup Disable Peripheral #x */
#else
#define IWR_ENABLE(x)   (1 << ((x)&0x1F)) /* Wakeup Enable Peripheral #x   */
#define IWR_DISABLE(x)  (0xFFFFFFFF ^ (1 << ((x)&0x1F)))  /* Wakeup Disable Peripheral #x  */
#endif /* _MISRA_RULES */


/* ********* WATCHDOG TIMER MASKS ******************** */

/* Watchdog Timer WDOG_CTL Register Masks */

#ifdef _MISRA_RULES
#define WDEV(x) (((x)<<1) & 0x0006u) /* event generated on roll over */
#else
#define WDEV(x) (((x)<<1) & 0x0006) /* event generated on roll over */
#endif /* _MISRA_RULES */
#define WDEV_RESET 0x0000 /* generate reset event on roll over */
#define WDEV_NMI 0x0002 /* generate NMI event on roll over */
#define WDEV_GPI 0x0004 /* generate GP IRQ on roll over */
#define WDEV_NONE 0x0006 /* no event on roll over */
#define WDEN 0x0FF0 /* enable watchdog */
#define WDDIS 0x0AD0 /* disable watchdog */
#define WDRO 0x8000 /* watchdog rolled over latch */

/* depreciated WDOG_CTL Register Masks for legacy code */


#define ICTL WDEV
#define ENABLE_RESET WDEV_RESET
#define WDOG_RESET WDEV_RESET
#define ENABLE_NMI WDEV_NMI
#define WDOG_NMI WDEV_NMI
#define ENABLE_GPI WDEV_GPI
#define WDOG_GPI WDEV_GPI
#define DISABLE_EVT WDEV_NONE
#define WDOG_NONE WDEV_NONE

#define TMR_EN WDEN
#define WDOG_DISABLE  WDDIS
#define TRO WDRO
#define ICTL_P0 0x01
 #define ICTL_P1 0x02
#define TRO_P 0x0F



/* ***************  REAL TIME CLOCK MASKS  **************************/
/* RTC_STAT and RTC_ALARM Masks										*/
#define	RTC_SEC				0x0000003F	/* Real-Time Clock Seconds	*/
#define	RTC_MIN				0x00000FC0	/* Real-Time Clock Minutes	*/
#define	RTC_HR				0x0001F000	/* Real-Time Clock Hours	*/
#define	RTC_DAY				0xFFFE0000	/* Real-Time Clock Days		*/

/* RTC_ALARM Macro			z=day		y=hr	x=min	w=sec		*/
#ifdef _MISRA_RULES
#define SET_ALARM(z,y,x,w)	((((z)&0x7FFFu)<<0x11)|(((y)&0x1Fu)<<0xC)|(((x)&0x3Fu)<<0x6)|((w)&0x3Fu))
#else
#define SET_ALARM(z,y,x,w)	((((z)&0x7FFF)<<0x11)|(((y)&0x1F)<<0xC)|(((x)&0x3F)<<0x6)|((w)&0x3F))
#endif /* _MISRA_RULES */

/* RTC_ICTL and RTC_ISTAT Masks																		*/
#define	STOPWATCH			0x0001		/* Stopwatch Interrupt Enable								*/
#define	ALARM				0x0002		/* Alarm Interrupt Enable									*/
#define	SECOND				0x0004		/* Seconds (1 Hz) Interrupt Enable							*/
#define	MINUTE				0x0008		/* Minutes Interrupt Enable									*/
#define	HOUR				0x0010		/* Hours Interrupt Enable									*/
#define	DAY					0x0020		/* 24 Hours (Days) Interrupt Enable							*/
#define	DAY_ALARM			0x0040		/* Day Alarm (Day, Hour, Minute, Second) Interrupt Enable	*/
#define	WRITE_PENDING		0x4000		/* Write Pending Status										*/
#define	WRITE_COMPLETE		0x8000		/* Write Complete Interrupt Enable							*/

/* RTC_FAST / RTC_PREN Mask												*/
#define PREN				0x0001	/* Enable Prescaler, RTC Runs @1 Hz	*/


/* ************** UART CONTROLLER MASKS *************************/
/* UARTx_LCR Masks												*/
#ifdef _MISRA_RULES
#define WLS(x)		(((x)-5u) & 0x03u)	/* Word Length Select */
#else
#define WLS(x)		(((x)-5) & 0x03)	/* Word Length Select */
#endif /* _MISRA_RULES */
#define STB			0x04				/* Stop Bits			*/
#define PEN			0x08				/* Parity Enable		*/
#define EPS			0x10				/* Even Parity Select	*/
#define STP			0x20				/* Stick Parity			*/
#define SB			0x40				/* Set Break			*/
#define DLAB		0x80				/* Divisor Latch Access	*/

/* UARTx_MCR Mask										*/
#define LOOP_ENA	0x10	/* Loopback Mode Enable */
#define LOOP_ENA_P	0x04

/* UARTx_LSR Masks										*/
#define DR			0x01	/* Data Ready				*/
#define OE			0x02	/* Overrun Error			*/
#define PE			0x04	/* Parity Error				*/
#define FE			0x08	/* Framing Error			*/
#define BI			0x10	/* Break Interrupt			*/
#define THRE		0x20	/* THR Empty				*/
#define TEMT		0x40	/* TSR and UART_THR Empty	*/

/* UARTx_IER Masks															*/
#define ERBFI		0x01		/* Enable Receive Buffer Full Interrupt		*/
#define ETBEI		0x02		/* Enable Transmit Buffer Empty Interrupt	*/
#define ELSI		0x04		/* Enable RX Status Interrupt				*/

/* UARTx_IIR Masks														*/
#define NINT		0x01		/* Pending Interrupt					*/
#define STATUS		0x06		/* Highest Priority Pending Interrupt	*/

/* UARTx_GCTL Masks													*/
#define UCEN		0x01		/* Enable UARTx Clocks				*/
#define IREN		0x02		/* Enable IrDA Mode					*/
#define TPOLC		0x04		/* IrDA TX Polarity Change			*/
#define RPOLC		0x08		/* IrDA RX Polarity Change			*/
#define FPE			0x10		/* Force Parity Error On Transmit	*/
#define FFE			0x20		/* Force Framing Error On Transmit	*/

/* Bit masks for UART Divisor Latch Registers: UARTx_DLL & UARTx_DLH */
#define UARTDLL                 0x00FF              /* Divisor Latch Low Byte */
#define UARTDLH                 0xFF00              /* Divisor Latch High Byte */


/* ***********  SERIAL PERIPHERAL INTERFACE (SPI) MASKS  ****************************/
/* SPI_CTL Masks																	*/
#define	TIMOD		0x0003		/* Transfer Initiate Mode							*/
#define RDBR_CORE	0x0000		/* 		RDBR Read Initiates, IRQ When RDBR Full		*/
#define	TDBR_CORE	0x0001		/* 		TDBR Write Initiates, IRQ When TDBR Empty	*/
#define RDBR_DMA	0x0002		/* 		DMA Read, DMA Until FIFO Empty				*/
#define TDBR_DMA	0x0003		/* 		DMA Write, DMA Until FIFO Full				*/
#define SZ			0x0004		/* Send Zero (When TDBR Empty, Send Zero/Last*)		*/
#define GM			0x0008		/* Get More (When RDBR Full, Overwrite/Discard*)	*/
#define PSSE		0x0010		/* Slave-Select Input Enable						*/
#define EMISO		0x0020		/* Enable MISO As Output							*/
#define SIZE		0x0100		/* Size of Words (16/8* Bits)						*/
#define LSBF		0x0200		/* LSB First										*/
#define CPHA		0x0400		/* Clock Phase										*/
#define CPOL		0x0800		/* Clock Polarity									*/
#define MSTR		0x1000		/* Master/Slave*									*/
#define WOM			0x2000		/* Write Open Drain Master							*/
#define SPE			0x4000		/* SPI Enable										*/

/* SPI_FLG Masks																	*/
#define FLS1		0x0002		/* Enables SPI_FLOUT1 as SPI Slave-Select Output	*/
#define FLS2		0x0004		/* Enables SPI_FLOUT2 as SPI Slave-Select Output	*/
#define FLS3		0x0008		/* Enables SPI_FLOUT3 as SPI Slave-Select Output	*/
#define FLS4		0x0010		/* Enables SPI_FLOUT4 as SPI Slave-Select Output	*/
#define FLS5		0x0020		/* Enables SPI_FLOUT5 as SPI Slave-Select Output	*/
#define FLS6		0x0040		/* Enables SPI_FLOUT6 as SPI Slave-Select Output	*/
#define FLS7		0x0080		/* Enables SPI_FLOUT7 as SPI Slave-Select Output	*/
#define FLG1		0xFDFF		/* Activates SPI_FLOUT1 							*/
#define FLG2		0xFBFF		/* Activates SPI_FLOUT2								*/
#define FLG3		0xF7FF		/* Activates SPI_FLOUT3								*/
#define FLG4		0xEFFF		/* Activates SPI_FLOUT4								*/
#define FLG5		0xDFFF		/* Activates SPI_FLOUT5								*/
#define FLG6		0xBFFF		/* Activates SPI_FLOUT6								*/
#define FLG7		0x7FFF		/* Activates SPI_FLOUT7								*/

/* SPI_STAT Masks																				*/
#define SPIF		0x0001		/* SPI Finished (Single-Word Transfer Complete)					*/
#define MODF		0x0002		/* Mode Fault Error (Another Device Tried To Become Master)		*/
#define TXE			0x0004		/* Transmission Error (Data Sent With No New Data In TDBR)		*/
#define TXS			0x0008		/* SPI_TDBR Data Buffer Status (Full/Empty*)					*/
#define RBSY		0x0010		/* Receive Error (Data Received With RDBR Full)					*/
#define RXS			0x0020		/* SPI_RDBR Data Buffer Status (Full/Empty*)					*/
#define TXCOL		0x0040		/* Transmit Collision Error (Corrupt Data May Have Been Sent)	*/


/*  ****************  GENERAL PURPOSE TIMER MASKS  **********************/
/* TIMER_ENABLE Masks													*/
#define TIMEN0			0x0001		/* Enable Timer 0					*/
#define TIMEN1			0x0002		/* Enable Timer 1					*/
#define TIMEN2			0x0004		/* Enable Timer 2					*/
#define TIMEN3			0x0008		/* Enable Timer 3					*/
#define TIMEN4			0x0010		/* Enable Timer 4					*/
#define TIMEN5			0x0020		/* Enable Timer 5					*/
#define TIMEN6			0x0040		/* Enable Timer 6					*/
#define TIMEN7			0x0080		/* Enable Timer 7					*/

/* TIMER_DISABLE Masks													*/
#define TIMDIS0			TIMEN0		/* Disable Timer 0					*/
#define TIMDIS1			TIMEN1		/* Disable Timer 1					*/
#define TIMDIS2			TIMEN2		/* Disable Timer 2					*/
#define TIMDIS3			TIMEN3		/* Disable Timer 3					*/
#define TIMDIS4			TIMEN4		/* Disable Timer 4					*/
#define TIMDIS5			TIMEN5		/* Disable Timer 5					*/
#define TIMDIS6			TIMEN6		/* Disable Timer 6					*/
#define TIMDIS7			TIMEN7		/* Disable Timer 7					*/

/* TIMER_STATUS Masks													*/
#define TIMIL0			0x00000001	/* Timer 0 Interrupt				*/
#define TIMIL1			0x00000002	/* Timer 1 Interrupt				*/
#define TIMIL2			0x00000004	/* Timer 2 Interrupt				*/
#define TIMIL3			0x00000008	/* Timer 3 Interrupt				*/
#define TOVF_ERR0		0x00000010	/* Timer 0 Counter Overflow			*/
#define TOVF_ERR1		0x00000020	/* Timer 1 Counter Overflow			*/
#define TOVF_ERR2		0x00000040	/* Timer 2 Counter Overflow			*/
#define TOVF_ERR3		0x00000080	/* Timer 3 Counter Overflow			*/
#define TRUN0			0x00001000	/* Timer 0 Slave Enable Status		*/
#define TRUN1			0x00002000	/* Timer 1 Slave Enable Status		*/
#define TRUN2			0x00004000	/* Timer 2 Slave Enable Status		*/
#define TRUN3			0x00008000	/* Timer 3 Slave Enable Status		*/
#define TIMIL4			0x00010000	/* Timer 4 Interrupt				*/
#define TIMIL5			0x00020000	/* Timer 5 Interrupt				*/
#define TIMIL6			0x00040000	/* Timer 6 Interrupt				*/
#define TIMIL7			0x00080000	/* Timer 7 Interrupt				*/
#define TOVF_ERR4		0x00100000	/* Timer 4 Counter Overflow			*/
#define TOVF_ERR5		0x00200000	/* Timer 5 Counter Overflow			*/
#define TOVF_ERR6		0x00400000	/* Timer 6 Counter Overflow			*/
#define TOVF_ERR7		0x00800000	/* Timer 7 Counter Overflow			*/
#define TRUN4			0x10000000	/* Timer 4 Slave Enable Status		*/
#define TRUN5			0x20000000	/* Timer 5 Slave Enable Status		*/
#define TRUN6			0x40000000	/* Timer 6 Slave Enable Status		*/
#define TRUN7			0x80000000	/* Timer 7 Slave Enable Status		*/

/* Alternate Deprecated Macros Provided For Backwards Code Compatibility */
#define TOVL_ERR0 TOVF_ERR0
#define TOVL_ERR1 TOVF_ERR1
#define TOVL_ERR2 TOVF_ERR2
#define TOVL_ERR3 TOVF_ERR3
#define TOVL_ERR4 TOVF_ERR4
#define TOVL_ERR5 TOVF_ERR5
#define TOVL_ERR6 TOVF_ERR6
#define TOVL_ERR7 TOVF_ERR7

/* TIMERx_CONFIG Masks													*/
#define PWM_OUT			0x0001	/* Pulse-Width Modulation Output Mode	*/
#define WDTH_CAP		0x0002	/* Width Capture Input Mode				*/
#define EXT_CLK			0x0003	/* External Clock Mode					*/
#define PULSE_HI		0x0004	/* Action Pulse (Positive/Negative*)	*/
#define PERIOD_CNT		0x0008	/* Period Count							*/
#define IRQ_ENA			0x0010	/* Interrupt Request Enable				*/
#define TIN_SEL			0x0020	/* Timer Input Select					*/
#define OUT_DIS			0x0040	/* Output Pad Disable					*/
#define CLK_SEL			0x0080	/* Timer Clock Select					*/
#define TOGGLE_HI		0x0100	/* PWM_OUT PULSE_HI Toggle Mode			*/
#define EMU_RUN			0x0200	/* Emulation Behavior Select			*/
#define ERR_TYP			0xC000	/* Error Type							*/


/* ******************   GPIO PORTS F, G, H MASKS  ***********************/
/*  General Purpose IO (0xFFC00700 - 0xFFC007FF)  Masks 				*/
/* Port F Masks 														*/
#define PF0		0x0001
#define PF1		0x0002
#define PF2		0x0004
#define PF3		0x0008
#define PF4		0x0010
#define PF5		0x0020
#define PF6		0x0040
#define PF7		0x0080
#define PF8		0x0100
#define PF9		0x0200
#define PF10	0x0400
#define PF11	0x0800
#define PF12	0x1000
#define PF13	0x2000
#define PF14	0x4000
#define PF15	0x8000

/* Port G Masks															*/
#define PG0		0x0001
#define PG1		0x0002
#define PG2		0x0004
#define PG3		0x0008
#define PG4		0x0010
#define PG5		0x0020
#define PG6		0x0040
#define PG7		0x0080
#define PG8		0x0100
#define PG9		0x0200
#define PG10	0x0400
#define PG11	0x0800
#define PG12	0x1000
#define PG13	0x2000
#define PG14	0x4000
#define PG15	0x8000

/* Port H Masks															*/
#define PH0		0x0001
#define PH1		0x0002
#define PH2		0x0004
#define PH3		0x0008
#define PH4		0x0010
#define PH5		0x0020
#define PH6		0x0040
#define PH7		0x0080
#define PH8		0x0100
#define PH9		0x0200
#define PH10	0x0400
#define PH11	0x0800
#define PH12	0x1000
#define PH13	0x2000
#define PH14	0x4000
#define PH15	0x8000


/* *******************  SERIAL PORT MASKS  **************************************/
/* SPORTx_TCR1 Masks															*/
#define TSPEN		0x0001		/* Transmit Enable								*/
#define ITCLK		0x0002		/* Internal Transmit Clock Select				*/
#define DTYPE_NORM	0x0000		/* Data Format Normal							*/
#define DTYPE_ULAW	0x0008		/* Compand Using u-Law							*/
#define DTYPE_ALAW	0x000C		/* Compand Using A-Law							*/
#define TLSBIT		0x0010		/* Transmit Bit Order							*/
#define ITFS		0x0200		/* Internal Transmit Frame Sync Select			*/
#define TFSR		0x0400		/* Transmit Frame Sync Required Select			*/
#define DITFS		0x0800		/* Data-Independent Transmit Frame Sync Select	*/
#define LTFS		0x1000		/* Low Transmit Frame Sync Select				*/
#define LATFS		0x2000		/* Late Transmit Frame Sync Select				*/
#define TCKFE		0x4000		/* Clock Falling Edge Select					*/

/* SPORTx_TCR2 Masks and Macro													*/
#ifdef _MISRA_RULES
#define SLEN(x)		((x)&0x1Fu)	/* SPORT TX Word Length (2 - 31)				*/
#else
#define SLEN(x)		((x)&0x1F)	/* SPORT TX Word Length (2 - 31)				*/
#endif /* _MISRA_RULES */
#define TXSE		0x0100		/* TX Secondary Enable							*/
#define TSFSE		0x0200		/* Transmit Stereo Frame Sync Enable			*/
#define TRFST		0x0400		/* Left/Right Order (1 = Right Channel 1st)		*/

/* SPORTx_RCR1 Masks															*/
#define RSPEN		0x0001		/* Receive Enable 								*/
#define IRCLK		0x0002		/* Internal Receive Clock Select 				*/
#define DTYPE_NORM	0x0000		/* Data Format Normal							*/
#define DTYPE_ULAW	0x0008		/* Compand Using u-Law							*/
#define DTYPE_ALAW	0x000C		/* Compand Using A-Law							*/
#define RLSBIT		0x0010		/* Receive Bit Order							*/
#define IRFS		0x0200		/* Internal Receive Frame Sync Select 			*/
#define RFSR		0x0400		/* Receive Frame Sync Required Select 			*/
#define LRFS		0x1000		/* Low Receive Frame Sync Select 				*/
#define LARFS		0x2000		/* Late Receive Frame Sync Select 				*/
#define RCKFE		0x4000		/* Clock Falling Edge Select 					*/

/* SPORTx_RCR2 Masks															*/
#ifdef _MISRA_RULES
#define SLEN(x)		((x)&0x1Fu)	/* SPORT RX Word Length (2 - 31)				*/
#else
#define SLEN(x)		((x)&0x1F)	/* SPORT RX Word Length (2 - 31)				*/
#endif /* _MISRA_RULES */
#define RXSE		0x0100		/* RX Secondary Enable							*/
#define RSFSE		0x0200		/* RX Stereo Frame Sync Enable					*/
#define RRFST		0x0400		/* Right-First Data Order 						*/

/* SPORTx_STAT Masks															*/
#define RXNE		0x0001		/* Receive FIFO Not Empty Status				*/
#define RUVF		0x0002		/* Sticky Receive Underflow Status				*/
#define ROVF		0x0004		/* Sticky Receive Overflow Status				*/
#define TXF			0x0008		/* Transmit FIFO Full Status					*/
#define TUVF		0x0010		/* Sticky Transmit Underflow Status				*/
#define TOVF		0x0020		/* Sticky Transmit Overflow Status				*/
#define TXHRE		0x0040		/* Transmit Hold Register Empty					*/

/* SPORTx_MCMC1 Macros															*/
#ifdef _MISRA_RULES
#define WOFF(x)		((x) & 0x3FFu) 	/* Multichannel Window Offset Field			*/

/* Only use WSIZE Macro With Logic OR While Setting Lower Order Bits						*/
#define WSIZE(x)	(((((x)>>0x3)-1u)&0xFu) << 0xC)	/* Multichannel Window Size = (x/8)-1	*/
#else
#define WOFF(x)		((x) & 0x3FF) 	/* Multichannel Window Offset Field			*/

/* Only use WSIZE Macro With Logic OR While Setting Lower Order Bits						*/
#define WSIZE(x)	(((((x)>>0x3)-1)&0xF) << 0xC)	/* Multichannel Window Size = (x/8)-1	*/
#endif /* _MISRA_RULES */

/* SPORTx_MCMC2 Masks															*/
#define REC_BYPASS	0x0000		/* Bypass Mode (No Clock Recovery)				*/
#define REC_2FROM4	0x0002		/* Recover 2 MHz Clock from 4 MHz Clock			*/
#define REC_8FROM16	0x0003		/* Recover 8 MHz Clock from 16 MHz Clock		*/
#define MCDTXPE		0x0004 		/* Multichannel DMA Transmit Packing			*/
#define MCDRXPE		0x0008 		/* Multichannel DMA Receive Packing				*/
#define MCMEN		0x0010 		/* Multichannel Frame Mode Enable				*/
#define FSDR		0x0080 		/* Multichannel Frame Sync to Data Relationship	*/
#define MFD_0		0x0000		/* Multichannel Frame Delay = 0					*/
#define MFD_1		0x1000		/* Multichannel Frame Delay = 1					*/
#define MFD_2		0x2000		/* Multichannel Frame Delay = 2					*/
#define MFD_3		0x3000		/* Multichannel Frame Delay = 3					*/
#define MFD_4		0x4000		/* Multichannel Frame Delay = 4					*/
#define MFD_5		0x5000		/* Multichannel Frame Delay = 5					*/
#define MFD_6		0x6000		/* Multichannel Frame Delay = 6					*/
#define MFD_7		0x7000		/* Multichannel Frame Delay = 7					*/
#define MFD_8		0x8000		/* Multichannel Frame Delay = 8					*/
#define MFD_9		0x9000		/* Multichannel Frame Delay = 9					*/
#define MFD_10		0xA000		/* Multichannel Frame Delay = 10				*/
#define MFD_11		0xB000		/* Multichannel Frame Delay = 11				*/
#define MFD_12		0xC000		/* Multichannel Frame Delay = 12				*/
#define MFD_13		0xD000		/* Multichannel Frame Delay = 13				*/
#define MFD_14		0xE000		/* Multichannel Frame Delay = 14				*/
#define MFD_15		0xF000		/* Multichannel Frame Delay = 15				*/


/* *********************  ASYNCHRONOUS MEMORY CONTROLLER MASKS  *************************/
/* EBIU_AMGCTL Masks																	*/
#define AMCKEN			0x0001		/* Enable CLKOUT									*/
#define	AMBEN_NONE		0x0000		/* All Banks Disabled								*/
#define AMBEN_B0		0x0002		/* Enable Async Memory Bank 0 only					*/
#define AMBEN_B0_B1		0x0004		/* Enable Async Memory Banks 0 & 1 only				*/
#define AMBEN_B0_B1_B2		0x0006		/* Enable Async Memory Banks 0, 1, and 2			*/
#define AMBEN_ALL		0x0008		/* Enable Async Memory Banks (all) 0, 1, 2, and 3	*/
#define CDPRIO                  0x0100      	/* DMA has priority over core for for external accesses */

/* EBIU_AMBCTL0 Masks																	*/
#define B0RDYEN			0x00000001  /* Bank 0 (B0) RDY Enable							*/
#define B0RDYPOL		0x00000002  /* B0 RDY Active High								*/
#define B0TT_1			0x00000004  /* B0 Transition Time (Read to Write) = 1 cycle		*/
#define B0TT_2			0x00000008  /* B0 Transition Time (Read to Write) = 2 cycles	*/
#define B0TT_3			0x0000000C  /* B0 Transition Time (Read to Write) = 3 cycles	*/
#define B0TT_4			0x00000000  /* B0 Transition Time (Read to Write) = 4 cycles	*/
#define B0ST_1			0x00000010  /* B0 Setup Time (AOE to Read/Write) = 1 cycle		*/
#define B0ST_2			0x00000020  /* B0 Setup Time (AOE to Read/Write) = 2 cycles		*/
#define B0ST_3			0x00000030  /* B0 Setup Time (AOE to Read/Write) = 3 cycles		*/
#define B0ST_4			0x00000000  /* B0 Setup Time (AOE to Read/Write) = 4 cycles		*/
#define B0HT_1			0x00000040  /* B0 Hold Time (~Read/Write to ~AOE) = 1 cycle		*/
#define B0HT_2			0x00000080  /* B0 Hold Time (~Read/Write to ~AOE) = 2 cycles	*/
#define B0HT_3			0x000000C0  /* B0 Hold Time (~Read/Write to ~AOE) = 3 cycles	*/
#define B0HT_0			0x00000000  /* B0 Hold Time (~Read/Write to ~AOE) = 0 cycles	*/
#define B0RAT_1			0x00000100  /* B0 Read Access Time = 1 cycle					*/
#define B0RAT_2			0x00000200  /* B0 Read Access Time = 2 cycles					*/
#define B0RAT_3			0x00000300  /* B0 Read Access Time = 3 cycles					*/
#define B0RAT_4			0x00000400  /* B0 Read Access Time = 4 cycles					*/
#define B0RAT_5			0x00000500  /* B0 Read Access Time = 5 cycles					*/
#define B0RAT_6			0x00000600  /* B0 Read Access Time = 6 cycles					*/
#define B0RAT_7			0x00000700  /* B0 Read Access Time = 7 cycles					*/
#define B0RAT_8			0x00000800  /* B0 Read Access Time = 8 cycles					*/
#define B0RAT_9			0x00000900  /* B0 Read Access Time = 9 cycles					*/
#define B0RAT_10		0x00000A00  /* B0 Read Access Time = 10 cycles					*/
#define B0RAT_11		0x00000B00  /* B0 Read Access Time = 11 cycles					*/
#define B0RAT_12		0x00000C00  /* B0 Read Access Time = 12 cycles					*/
#define B0RAT_13		0x00000D00  /* B0 Read Access Time = 13 cycles					*/
#define B0RAT_14		0x00000E00  /* B0 Read Access Time = 14 cycles					*/
#define B0RAT_15		0x00000F00  /* B0 Read Access Time = 15 cycles					*/
#define B0WAT_1			0x00001000  /* B0 Write Access Time = 1 cycle					*/
#define B0WAT_2			0x00002000  /* B0 Write Access Time = 2 cycles					*/
#define B0WAT_3			0x00003000  /* B0 Write Access Time = 3 cycles					*/
#define B0WAT_4			0x00004000  /* B0 Write Access Time = 4 cycles					*/
#define B0WAT_5			0x00005000  /* B0 Write Access Time = 5 cycles					*/
#define B0WAT_6			0x00006000  /* B0 Write Access Time = 6 cycles					*/
#define B0WAT_7			0x00007000  /* B0 Write Access Time = 7 cycles					*/
#define B0WAT_8			0x00008000  /* B0 Write Access Time = 8 cycles					*/
#define B0WAT_9			0x00009000  /* B0 Write Access Time = 9 cycles					*/
#define B0WAT_10		0x0000A000  /* B0 Write Access Time = 10 cycles					*/
#define B0WAT_11		0x0000B000  /* B0 Write Access Time = 11 cycles					*/
#define B0WAT_12		0x0000C000  /* B0 Write Access Time = 12 cycles					*/
#define B0WAT_13		0x0000D000  /* B0 Write Access Time = 13 cycles					*/
#define B0WAT_14		0x0000E000  /* B0 Write Access Time = 14 cycles					*/
#define B0WAT_15		0x0000F000  /* B0 Write Access Time = 15 cycles					*/

#define B1RDYEN			0x00010000  /* Bank 1 (B1) RDY Enable                       	*/
#define B1RDYPOL		0x00020000  /* B1 RDY Active High                           	*/
#define B1TT_1			0x00040000  /* B1 Transition Time (Read to Write) = 1 cycle 	*/
#define B1TT_2			0x00080000  /* B1 Transition Time (Read to Write) = 2 cycles	*/
#define B1TT_3			0x000C0000  /* B1 Transition Time (Read to Write) = 3 cycles	*/
#define B1TT_4			0x00000000  /* B1 Transition Time (Read to Write) = 4 cycles	*/
#define B1ST_1			0x00100000  /* B1 Setup Time (AOE to Read/Write) = 1 cycle  	*/
#define B1ST_2			0x00200000  /* B1 Setup Time (AOE to Read/Write) = 2 cycles 	*/
#define B1ST_3			0x00300000  /* B1 Setup Time (AOE to Read/Write) = 3 cycles 	*/
#define B1ST_4			0x00000000  /* B1 Setup Time (AOE to Read/Write) = 4 cycles 	*/
#define B1HT_1			0x00400000  /* B1 Hold Time (~Read/Write to ~AOE) = 1 cycle 	*/
#define B1HT_2			0x00800000  /* B1 Hold Time (~Read/Write to ~AOE) = 2 cycles	*/
#define B1HT_3			0x00C00000  /* B1 Hold Time (~Read/Write to ~AOE) = 3 cycles	*/
#define B1HT_0			0x00000000  /* B1 Hold Time (~Read/Write to ~AOE) = 0 cycles	*/
#define B1RAT_1			0x01000000  /* B1 Read Access Time = 1 cycle					*/
#define B1RAT_2			0x02000000  /* B1 Read Access Time = 2 cycles					*/
#define B1RAT_3			0x03000000  /* B1 Read Access Time = 3 cycles					*/
#define B1RAT_4			0x04000000  /* B1 Read Access Time = 4 cycles					*/
#define B1RAT_5			0x05000000  /* B1 Read Access Time = 5 cycles					*/
#define B1RAT_6			0x06000000  /* B1 Read Access Time = 6 cycles					*/
#define B1RAT_7			0x07000000  /* B1 Read Access Time = 7 cycles					*/
#define B1RAT_8			0x08000000  /* B1 Read Access Time = 8 cycles					*/
#define B1RAT_9			0x09000000  /* B1 Read Access Time = 9 cycles					*/
#define B1RAT_10		0x0A000000  /* B1 Read Access Time = 10 cycles					*/
#define B1RAT_11		0x0B000000  /* B1 Read Access Time = 11 cycles					*/
#define B1RAT_12		0x0C000000  /* B1 Read Access Time = 12 cycles					*/
#define B1RAT_13		0x0D000000  /* B1 Read Access Time = 13 cycles					*/
#define B1RAT_14		0x0E000000  /* B1 Read Access Time = 14 cycles					*/
#define B1RAT_15		0x0F000000  /* B1 Read Access Time = 15 cycles					*/
#define B1WAT_1			0x10000000  /* B1 Write Access Time = 1 cycle					*/
#define B1WAT_2			0x20000000  /* B1 Write Access Time = 2 cycles					*/
#define B1WAT_3			0x30000000  /* B1 Write Access Time = 3 cycles					*/
#define B1WAT_4			0x40000000  /* B1 Write Access Time = 4 cycles					*/
#define B1WAT_5			0x50000000  /* B1 Write Access Time = 5 cycles					*/
#define B1WAT_6			0x60000000  /* B1 Write Access Time = 6 cycles					*/
#define B1WAT_7			0x70000000  /* B1 Write Access Time = 7 cycles					*/
#define B1WAT_8			0x80000000  /* B1 Write Access Time = 8 cycles					*/
#define B1WAT_9			0x90000000  /* B1 Write Access Time = 9 cycles					*/
#define B1WAT_10		0xA0000000  /* B1 Write Access Time = 10 cycles					*/
#define B1WAT_11		0xB0000000  /* B1 Write Access Time = 11 cycles					*/
#define B1WAT_12		0xC0000000  /* B1 Write Access Time = 12 cycles					*/
#define B1WAT_13		0xD0000000  /* B1 Write Access Time = 13 cycles					*/
#define B1WAT_14		0xE0000000  /* B1 Write Access Time = 14 cycles					*/
#define B1WAT_15		0xF0000000  /* B1 Write Access Time = 15 cycles					*/

/* EBIU_AMBCTL1 Masks																	*/
#define B2RDYEN			0x00000001  /* Bank 2 (B2) RDY Enable							*/
#define B2RDYPOL		0x00000002  /* B2 RDY Active High								*/
#define B2TT_1			0x00000004  /* B2 Transition Time (Read to Write) = 1 cycle		*/
#define B2TT_2			0x00000008  /* B2 Transition Time (Read to Write) = 2 cycles	*/
#define B2TT_3			0x0000000C  /* B2 Transition Time (Read to Write) = 3 cycles	*/
#define B2TT_4			0x00000000  /* B2 Transition Time (Read to Write) = 4 cycles	*/
#define B2ST_1			0x00000010  /* B2 Setup Time (AOE to Read/Write) = 1 cycle		*/
#define B2ST_2			0x00000020  /* B2 Setup Time (AOE to Read/Write) = 2 cycles		*/
#define B2ST_3			0x00000030  /* B2 Setup Time (AOE to Read/Write) = 3 cycles		*/
#define B2ST_4			0x00000000  /* B2 Setup Time (AOE to Read/Write) = 4 cycles		*/
#define B2HT_1			0x00000040  /* B2 Hold Time (~Read/Write to ~AOE) = 1 cycle		*/
#define B2HT_2			0x00000080  /* B2 Hold Time (~Read/Write to ~AOE) = 2 cycles	*/
#define B2HT_3			0x000000C0  /* B2 Hold Time (~Read/Write to ~AOE) = 3 cycles	*/
#define B2HT_0			0x00000000  /* B2 Hold Time (~Read/Write to ~AOE) = 0 cycles	*/
#define B2RAT_1			0x00000100  /* B2 Read Access Time = 1 cycle					*/
#define B2RAT_2			0x00000200  /* B2 Read Access Time = 2 cycles					*/
#define B2RAT_3			0x00000300  /* B2 Read Access Time = 3 cycles					*/
#define B2RAT_4			0x00000400  /* B2 Read Access Time = 4 cycles					*/
#define B2RAT_5			0x00000500  /* B2 Read Access Time = 5 cycles					*/
#define B2RAT_6			0x00000600  /* B2 Read Access Time = 6 cycles					*/
#define B2RAT_7			0x00000700  /* B2 Read Access Time = 7 cycles					*/
#define B2RAT_8			0x00000800  /* B2 Read Access Time = 8 cycles					*/
#define B2RAT_9			0x00000900  /* B2 Read Access Time = 9 cycles					*/
#define B2RAT_10		0x00000A00  /* B2 Read Access Time = 10 cycles					*/
#define B2RAT_11		0x00000B00  /* B2 Read Access Time = 11 cycles					*/
#define B2RAT_12		0x00000C00  /* B2 Read Access Time = 12 cycles					*/
#define B2RAT_13		0x00000D00  /* B2 Read Access Time = 13 cycles					*/
#define B2RAT_14		0x00000E00  /* B2 Read Access Time = 14 cycles					*/
#define B2RAT_15		0x00000F00  /* B2 Read Access Time = 15 cycles					*/
#define B2WAT_1			0x00001000  /* B2 Write Access Time = 1 cycle					*/
#define B2WAT_2			0x00002000  /* B2 Write Access Time = 2 cycles					*/
#define B2WAT_3			0x00003000  /* B2 Write Access Time = 3 cycles					*/
#define B2WAT_4			0x00004000  /* B2 Write Access Time = 4 cycles					*/
#define B2WAT_5			0x00005000  /* B2 Write Access Time = 5 cycles					*/
#define B2WAT_6			0x00006000  /* B2 Write Access Time = 6 cycles					*/
#define B2WAT_7			0x00007000  /* B2 Write Access Time = 7 cycles					*/
#define B2WAT_8			0x00008000  /* B2 Write Access Time = 8 cycles					*/
#define B2WAT_9			0x00009000  /* B2 Write Access Time = 9 cycles					*/
#define B2WAT_10		0x0000A000  /* B2 Write Access Time = 10 cycles					*/
#define B2WAT_11		0x0000B000  /* B2 Write Access Time = 11 cycles					*/
#define B2WAT_12		0x0000C000  /* B2 Write Access Time = 12 cycles					*/
#define B2WAT_13		0x0000D000  /* B2 Write Access Time = 13 cycles					*/
#define B2WAT_14		0x0000E000  /* B2 Write Access Time = 14 cycles					*/
#define B2WAT_15		0x0000F000  /* B2 Write Access Time = 15 cycles					*/

#define B3RDYEN			0x00010000  /* Bank 3 (B3) RDY Enable							*/
#define B3RDYPOL		0x00020000  /* B3 RDY Active High								*/
#define B3TT_1			0x00040000  /* B3 Transition Time (Read to Write) = 1 cycle		*/
#define B3TT_2			0x00080000  /* B3 Transition Time (Read to Write) = 2 cycles	*/
#define B3TT_3			0x000C0000  /* B3 Transition Time (Read to Write) = 3 cycles	*/
#define B3TT_4			0x00000000  /* B3 Transition Time (Read to Write) = 4 cycles	*/
#define B3ST_1			0x00100000  /* B3 Setup Time (AOE to Read/Write) = 1 cycle		*/
#define B3ST_2			0x00200000  /* B3 Setup Time (AOE to Read/Write) = 2 cycles		*/
#define B3ST_3			0x00300000  /* B3 Setup Time (AOE to Read/Write) = 3 cycles		*/
#define B3ST_4			0x00000000  /* B3 Setup Time (AOE to Read/Write) = 4 cycles		*/
#define B3HT_1			0x00400000  /* B3 Hold Time (~Read/Write to ~AOE) = 1 cycle		*/
#define B3HT_2			0x00800000  /* B3 Hold Time (~Read/Write to ~AOE) = 2 cycles	*/
#define B3HT_3			0x00C00000  /* B3 Hold Time (~Read/Write to ~AOE) = 3 cycles	*/
#define B3HT_0			0x00000000  /* B3 Hold Time (~Read/Write to ~AOE) = 0 cycles	*/
#define B3RAT_1			0x01000000  /* B3 Read Access Time = 1 cycle					*/
#define B3RAT_2			0x02000000  /* B3 Read Access Time = 2 cycles					*/
#define B3RAT_3			0x03000000  /* B3 Read Access Time = 3 cycles					*/
#define B3RAT_4			0x04000000  /* B3 Read Access Time = 4 cycles					*/
#define B3RAT_5			0x05000000  /* B3 Read Access Time = 5 cycles					*/
#define B3RAT_6			0x06000000  /* B3 Read Access Time = 6 cycles					*/
#define B3RAT_7			0x07000000  /* B3 Read Access Time = 7 cycles					*/
#define B3RAT_8			0x08000000  /* B3 Read Access Time = 8 cycles					*/
#define B3RAT_9			0x09000000  /* B3 Read Access Time = 9 cycles					*/
#define B3RAT_10		0x0A000000  /* B3 Read Access Time = 10 cycles					*/
#define B3RAT_11		0x0B000000  /* B3 Read Access Time = 11 cycles					*/
#define B3RAT_12		0x0C000000  /* B3 Read Access Time = 12 cycles					*/
#define B3RAT_13		0x0D000000  /* B3 Read Access Time = 13 cycles					*/
#define B3RAT_14		0x0E000000  /* B3 Read Access Time = 14 cycles					*/
#define B3RAT_15		0x0F000000  /* B3 Read Access Time = 15 cycles					*/
#define B3WAT_1			0x10000000  /* B3 Write Access Time = 1 cycle					*/
#define B3WAT_2			0x20000000  /* B3 Write Access Time = 2 cycles					*/
#define B3WAT_3			0x30000000  /* B3 Write Access Time = 3 cycles					*/
#define B3WAT_4			0x40000000  /* B3 Write Access Time = 4 cycles					*/
#define B3WAT_5			0x50000000  /* B3 Write Access Time = 5 cycles					*/
#define B3WAT_6			0x60000000  /* B3 Write Access Time = 6 cycles					*/
#define B3WAT_7			0x70000000  /* B3 Write Access Time = 7 cycles					*/
#define B3WAT_8			0x80000000  /* B3 Write Access Time = 8 cycles					*/
#define B3WAT_9			0x90000000  /* B3 Write Access Time = 9 cycles					*/
#define B3WAT_10		0xA0000000  /* B3 Write Access Time = 10 cycles					*/
#define B3WAT_11		0xB0000000  /* B3 Write Access Time = 11 cycles					*/
#define B3WAT_12		0xC0000000  /* B3 Write Access Time = 12 cycles					*/
#define B3WAT_13		0xD0000000  /* B3 Write Access Time = 13 cycles					*/
#define B3WAT_14		0xE0000000  /* B3 Write Access Time = 14 cycles					*/
#define B3WAT_15		0xF0000000  /* B3 Write Access Time = 15 cycles					*/


/* **********************  SDRAM CONTROLLER MASKS  **********************************************/
/* EBIU_SDGCTL Masks																			*/

#define SCTLE			0x00000001	/* Enable SDRAM Signals										*/
#define CL_2			0x00000008	/* SDRAM CAS Latency = 2 cycles								*/
#define CL_3			0x0000000C	/* SDRAM CAS Latency = 3 cycles								*/
#define CL          0x0000000C  /* SDRAM CAS latency */
#define PASR_ALL		0x00000000	/* All 4 SDRAM Banks Refreshed In Self-Refresh				*/
#define PASR_B0_B1		0x00000010	/* SDRAM Banks 0 and 1 Are Refreshed In Self-Refresh		*/
#define PASR_B0			0x00000020	/* Only SDRAM Bank 0 Is Refreshed In Self-Refresh			*/
#define PASR         0x00000030  /* SDRAM partial array self-refresh */
#define TRAS_1			0x00000040	/* SDRAM tRAS = 1 cycle										*/
#define TRAS_2			0x00000080	/* SDRAM tRAS = 2 cycles									*/
#define TRAS_3			0x000000C0	/* SDRAM tRAS = 3 cycles									*/
#define TRAS_4			0x00000100	/* SDRAM tRAS = 4 cycles									*/
#define TRAS_5			0x00000140	/* SDRAM tRAS = 5 cycles									*/
#define TRAS_6			0x00000180	/* SDRAM tRAS = 6 cycles									*/
#define TRAS_7			0x000001C0	/* SDRAM tRAS = 7 cycles									*/
#define TRAS_8			0x00000200	/* SDRAM tRAS = 8 cycles									*/
#define TRAS_9			0x00000240	/* SDRAM tRAS = 9 cycles									*/
#define TRAS_10			0x00000280	/* SDRAM tRAS = 10 cycles									*/
#define TRAS_11			0x000002C0	/* SDRAM tRAS = 11 cycles									*/
#define TRAS_12			0x00000300	/* SDRAM tRAS = 12 cycles									*/
#define TRAS_13			0x00000340	/* SDRAM tRAS = 13 cycles									*/
#define TRAS_14			0x00000380	/* SDRAM tRAS = 14 cycles									*/
#define TRAS_15			0x000003C0	/* SDRAM tRAS = 15 cycles									*/
#define TRAS         0x000003C0  /* SDRAM tRAS in SCLK cycles */
#define TRP_1			0x00000800	/* SDRAM tRP = 1 cycle										*/
#define TRP_2			0x00001000	/* SDRAM tRP = 2 cycles										*/
#define TRP_3			0x00001800	/* SDRAM tRP = 3 cycles										*/
#define TRP_4			0x00002000	/* SDRAM tRP = 4 cycles										*/
#define TRP_5			0x00002800	/* SDRAM tRP = 5 cycles										*/
#define TRP_6			0x00003000	/* SDRAM tRP = 6 cycles										*/
#define TRP_7			0x00003800	/* SDRAM tRP = 7 cycles										*/
#define TRP          0x00003800  /* SDRAM tRP in SCLK cycles */
#define TRCD_1			0x00008000	/* SDRAM tRCD = 1 cycle										*/
#define TRCD_2			0x00010000	/* SDRAM tRCD = 2 cycles									*/
#define TRCD_3			0x00018000	/* SDRAM tRCD = 3 cycles									*/
#define TRCD_4			0x00020000	/* SDRAM tRCD = 4 cycles									*/
#define TRCD_5			0x00028000	/* SDRAM tRCD = 5 cycles									*/
#define TRCD_6			0x00030000	/* SDRAM tRCD = 6 cycles									*/
#define TRCD_7			0x00038000	/* SDRAM tRCD = 7 cycles									*/
#define TRCD         0x00030000  /* SDRAM tRCD in SCLK cycles */
#define TWR_1			0x00080000	/* SDRAM tWR = 1 cycle										*/
#define TWR_2			0x00100000	/* SDRAM tWR = 2 cycles										*/
#define TWR_3			0x00180000	/* SDRAM tWR = 3 cycles										*/
#define TWR          0x00180000  /* SDRAM tWR in SCLK cycles */
#define PUPSD			0x00200000	/* Power-Up Start Delay (15 SCLK Cycles Delay)				*/
#define PSM				0x00400000	/* Power-Up Sequence (Mode Register Before/After* Refresh)	*/
#define PSS				0x00800000	/* Enable Power-Up Sequence on Next SDRAM Access			*/
#define SRFS			0x01000000	/* Enable SDRAM Self-Refresh Mode							*/
#define EBUFE			0x02000000	/* Enable External Buffering Timing							*/
#define FBBRW			0x04000000	/* Enable Fast Back-To-Back Read To Write					*/
#define EMREN			0x10000000	/* Extended Mode Register Enable							*/
#define TCSR			0x20000000	/* Temp-Compensated Self-Refresh Value (85/45* Deg C)		*/
#define CDDBG			0x40000000	/* Tristate SDRAM Controls During Bus Grant					*/

/* EBIU_SDBCTL Masks																		*/
#define EBE				0x0001		/* Enable SDRAM External Bank							*/
#define EBSZ_16			0x0000		/* SDRAM External Bank Size = 16MB	*/
#define EBSZ_32			0x0002		/* SDRAM External Bank Size = 32MB	*/
#define EBSZ_64			0x0004		/* SDRAM External Bank Size = 64MB	*/
#define EBSZ_128		0x0006		/* SDRAM External Bank Size = 128MB		*/
#define EBSZ         0x0006      /* SDRAM external bank size */

#define EBCAW_8			0x0000		/* SDRAM External Bank Column Address Width = 8 Bits	*/
#define EBCAW_9			0x0010		/* SDRAM External Bank Column Address Width = 9 Bits	*/
#define EBCAW_10		0x0020		/* SDRAM External Bank Column Address Width = 10 Bits	*/
#define EBCAW_11		0x0030		/* SDRAM External Bank Column Address Width = 11 Bits	*/
#define EBCAW        0x0030      /* SDRAM external bank column address width */

/* EBIU_SDSTAT Masks														*/
#define SDCI			0x0001		/* SDRAM Controller Idle 				*/
#define SDSRA			0x0002		/* SDRAM Self-Refresh Active			*/
#define SDPUA			0x0004		/* SDRAM Power-Up Active 				*/
#define SDRS			0x0008		/* SDRAM Will Power-Up On Next Access	*/
#define SDEASE			0x0010		/* SDRAM EAB Sticky Error Status		*/
#define BGSTAT			0x0020		/* Bus Grant Status						*/


/* **************************  DMA CONTROLLER MASKS  ********************************/
/* DMAx_CONFIG, MDMA_yy_CONFIG Masks												*/
#define DMAEN			0x0001		/* DMA Channel Enable							*/
#define WNR				0x0002		/* Channel Direction (W/R*)						*/
#define WDSIZE_8		0x0000		/* Transfer Word Size = 8						*/
#define WDSIZE_16		0x0004		/* Transfer Word Size = 16						*/
#define WDSIZE_32		0x0008		/* Transfer Word Size = 32						*/
#define DMA2D			0x0010		/* DMA Mode (2D/1D*)							*/
#define SYNC			0x0020		/* DMA Buffer Clear								*/
#define DI_SEL			0x0040		/* Data Interrupt Timing Select					*/
#define DI_EN			0x0080		/* Data Interrupt Enable						*/
#define NDSIZE_0		0x0000		/* Next Descriptor Size = 0 (Stop/Autobuffer)	*/
#define NDSIZE_1		0x0100		/* Next Descriptor Size = 1						*/
#define NDSIZE_2		0x0200		/* Next Descriptor Size = 2						*/
#define NDSIZE_3		0x0300		/* Next Descriptor Size = 3						*/
#define NDSIZE_4		0x0400		/* Next Descriptor Size = 4						*/
#define NDSIZE_5		0x0500		/* Next Descriptor Size = 5						*/
#define NDSIZE_6		0x0600		/* Next Descriptor Size = 6						*/
#define NDSIZE_7		0x0700		/* Next Descriptor Size = 7						*/
#define NDSIZE_8		0x0800		/* Next Descriptor Size = 8						*/
#define NDSIZE_9		0x0900		/* Next Descriptor Size = 9						*/
#define FLOW_STOP		0x0000		/* Stop Mode									*/
#define FLOW_AUTO		0x1000		/* Autobuffer Mode								*/
#define FLOW_ARRAY		0x4000		/* Descriptor Array Mode						*/
#define FLOW_SMALL		0x6000		/* Small Model Descriptor List Mode				*/
#define FLOW_LARGE		0x7000		/* Large Model Descriptor List Mode				*/

/* DMAx_PERIPHERAL_MAP, MDMA_yy_PERIPHERAL_MAP Masks								*/
#define CTYPE			0x0040	/* DMA Channel Type Indicator (Memory/Peripheral*)	*/
#define PMAP			0xF000	/* Peripheral Mapped To This Channel				*/
#define PMAP_PPI		0x0000	/* 		PPI Port DMA								*/
#define	PMAP_EMACRX		0x1000	/* 		Ethernet Receive DMA						*/
#define PMAP_EMACTX		0x2000	/* 		Ethernet Transmit DMA						*/
#define PMAP_SPORT0RX	0x3000	/* 		SPORT0 Receive DMA							*/
#define PMAP_SPORT0TX	0x4000	/* 		SPORT0 Transmit DMA							*/
#define PMAP_SPORT1RX	0x5000	/* 		SPORT1 Receive DMA							*/
#define PMAP_SPORT1TX	0x6000	/* 		SPORT1 Transmit DMA							*/
#define PMAP_SPI		0x7000	/* 		SPI Port DMA								*/
#define PMAP_UART0RX	0x8000	/* 		UART0 Port Receive DMA						*/
#define PMAP_UART0TX	0x9000	/* 		UART0 Port Transmit DMA						*/
#define	PMAP_UART1RX	0xA000	/* 		UART1 Port Receive DMA						*/
#define	PMAP_UART1TX	0xB000	/* 		UART1 Port Transmit DMA						*/

/* DMAx_IRQ_STATUS, MDMA_yy_IRQ_STATUS Masks						*/
#define DMA_DONE		0x0001	/* DMA Completion Interrupt Status	*/
#define DMA_ERR			0x0002	/* DMA Error Interrupt Status		*/
#define DFETCH			0x0004	/* DMA Descriptor Fetch Indicator	*/
#define DMA_RUN			0x0008	/* DMA Channel Running Indicator	*/


/*  ************  PARALLEL PERIPHERAL INTERFACE (PPI) MASKS *************/
/*  PPI_CONTROL Masks													*/
#define PORT_EN			0x0001		/* PPI Port Enable					*/
#define PORT_DIR		0x0002		/* PPI Port Direction				*/
#define XFR_TYPE		0x000C		/* PPI Transfer Type				*/
#define PORT_CFG		0x0030		/* PPI Port Configuration			*/
#define FLD_SEL			0x0040		/* PPI Active Field Select			*/
#define PACK_EN			0x0080		/* PPI Packing Mode					*/
/* previous versions of defBF534.h erroneously included DMA32 (PPI 32-bit DMA Enable) */
#define SKIP_EN			0x0200		/* PPI Skip Element Enable			*/
#define SKIP_EO			0x0400		/* PPI Skip Even/Odd Elements		*/
#define DLEN_8			0x0000		/* Data Length = 8 Bits				*/
#define DLEN_10			0x0800		/* Data Length = 10 Bits			*/
#define DLEN_11			0x1000		/* Data Length = 11 Bits			*/
#define DLEN_12			0x1800		/* Data Length = 12 Bits			*/
#define DLEN_13			0x2000		/* Data Length = 13 Bits			*/
#define DLEN_14			0x2800		/* Data Length = 14 Bits			*/
#define DLEN_15			0x3000		/* Data Length = 15 Bits			*/
#define DLEN_16			0x3800		/* Data Length = 16 Bits			*/
#define POLC			0x4000		/* PPI Clock Polarity				*/
#define POLS			0x8000		/* PPI Frame Sync Polarity			*/

/* PPI_STATUS Masks														*/
#define FLD				0x0400		/* Field Indicator					*/
#define FT_ERR			0x0800		/* Frame Track Error				*/
#define OVR				0x1000		/* FIFO Overflow Error				*/
#define UNDR			0x2000		/* FIFO Underrun Error				*/
#define ERR_DET			0x4000		/* Error Detected Indicator			*/
#define ERR_NCOR		0x8000		/* Error Not Corrected Indicator	*/


/*  ********************  TWO-WIRE INTERFACE (TWI) MASKS  ***********************/
/* TWI_CLKDIV Macros (Use: *pTWI_CLKDIV = CLKLOW(x)|CLKHI(y);  )				*/
#ifdef _MISRA_RULES
#define	CLKLOW(x)	((x) & 0xFFu)		/* Periods Clock Is Held Low			*/
#define CLKHI(y)	(((y)&0xFFu)<<0x8)	/* Periods Before New Clock Low			*/
#else
#define	CLKLOW(x)	((x) & 0xFF)		/* Periods Clock Is Held Low			*/
#define CLKHI(y)	(((y)&0xFF)<<0x8)	/* Periods Before New Clock Low			*/
#endif /* _MISRA_RULES */

/* TWI_PRESCALE Masks															*/
#define	PRESCALE	0x007F		/* SCLKs Per Internal Time Reference (10MHz)	*/
#define	TWI_ENA		0x0080		/* TWI Enable									*/
#define	SCCB		0x0200		/* SCCB Compatibility Enable					*/

/* TWI_SLAVE_CTRL Masks															*/
#define	SEN			0x0001		/* Slave Enable									*/
#define	SADD_LEN	0x0002		/* Slave Address Length							*/
#define	STDVAL		0x0004		/* Slave Transmit Data Valid					*/
#define	NAK			0x0008		/* NAK/ACK* Generated At Conclusion Of Transfer */
#define	GEN			0x0010		/* General Call Adrress Matching Enabled		*/

/* TWI_SLAVE_STAT Masks															*/
#define	SDIR		0x0001		/* Slave Transfer Direction (Transmit/Receive*)	*/
#define GCALL		0x0002		/* General Call Indicator						*/

/* TWI_MASTER_CTRL Masks													*/
#define	MEN			0x0001		/* Master Mode Enable						*/
#define	MADD_LEN	0x0002		/* Master Address Length					*/
#define	MDIR		0x0004		/* Master Transmit Direction (RX/TX*)		*/
#define	FAST		0x0008		/* Use Fast Mode Timing Specs				*/
#define	STOP		0x0010		/* Issue Stop Condition						*/
#define	RSTART		0x0020		/* Repeat Start or Stop* At End Of Transfer	*/
#define	DCNT		0x3FC0		/* Data Bytes To Transfer					*/
#define	SDAOVR		0x4000		/* Serial Data Override						*/
#define	SCLOVR		0x8000		/* Serial Clock Override					*/

/* TWI_MASTER_STAT Masks														*/
#define	MPROG		0x0001		/* Master Transfer In Progress					*/
#define	LOSTARB		0x0002		/* Lost Arbitration Indicator (Xfer Aborted)	*/
#define	ANAK		0x0004		/* Address Not Acknowledged						*/
#define	DNAK		0x0008		/* Data Not Acknowledged						*/
#define	BUFRDERR	0x0010		/* Buffer Read Error							*/
#define	BUFWRERR	0x0020		/* Buffer Write Error							*/
#define	SDASEN		0x0040		/* Serial Data Sense							*/
#define	SCLSEN		0x0080		/* Serial Clock Sense							*/
#define	BUSBUSY		0x0100		/* Bus Busy Indicator							*/

/* TWI_INT_SRC and TWI_INT_ENABLE Masks						*/
#define	SINIT		0x0001		/* Slave Transfer Initiated	*/
#define	SCOMP		0x0002		/* Slave Transfer Complete	*/
#define	SERR		0x0004		/* Slave Transfer Error		*/
#define	SOVF		0x0008		/* Slave Overflow			*/
#define	MCOMP		0x0010		/* Master Transfer Complete	*/
#define	MERR		0x0020		/* Master Transfer Error	*/
#define	XMTSERV		0x0040		/* Transmit FIFO Service	*/
#define	RCVSERV		0x0080		/* Receive FIFO Service		*/

/* TWI_FIFO_CTRL Masks												*/
#define	XMTFLUSH	0x0001		/* Transmit Buffer Flush			*/
#define	RCVFLUSH	0x0002		/* Receive Buffer Flush				*/
#define	XMTINTLEN	0x0004		/* Transmit Buffer Interrupt Length	*/
#define	RCVINTLEN	0x0008		/* Receive Buffer Interrupt Length	*/

/* TWI_FIFO_STAT Masks															*/
#define	XMTSTAT		0x0003		/* Transmit FIFO Status							*/
#define	XMT_EMPTY	0x0000		/* 		Transmit FIFO Empty						*/
#define	XMT_HALF	0x0001		/* 		Transmit FIFO Has 1 Byte To Write		*/
#define	XMT_FULL	0x0003		/* 		Transmit FIFO Full (2 Bytes To Write)	*/

#define	RCVSTAT		0x000C		/* Receive FIFO Status							*/
#define	RCV_EMPTY	0x0000		/* 		Receive FIFO Empty						*/
#define	RCV_HALF	0x0004		/* 		Receive FIFO Has 1 Byte To Read			*/
#define	RCV_FULL	0x000C		/* 		Receive FIFO Full (2 Bytes To Read)		*/


/* ************  CONTROLLER AREA NETWORK (CAN) MASKS  ***************/
/* CAN_CONTROL Masks												*/
#define	SRS			0x0001	/* Software Reset						*/
#define	DNM			0x0002	/* Device Net Mode						*/
#define	ABO			0x0004	/* Auto-Bus On Enable					*/
#define	WBA			0x0010	/* Wake-Up On CAN Bus Activity Enable	*/
#define	SMR			0x0020	/* Sleep Mode Request					*/
#define	CSR			0x0040	/* CAN Suspend Mode Request				*/
#define	CCR			0x0080	/* CAN Configuration Mode Request		*/

/* CAN_STATUS Masks												*/
#define	WT			0x0001	/* TX Warning Flag					*/
#define	WR			0x0002	/* RX Warning Flag					*/
#define	EP			0x0004	/* Error Passive Mode				*/
#define	EBO			0x0008	/* Error Bus Off Mode				*/
#define	CSA			0x0040	/* Suspend Mode Acknowledge			*/
#define	CCA			0x0080	/* Configuration Mode Acknowledge	*/
#define	MBPTR		0x1F00	/* Mailbox Pointer					*/
#define	TRM			0x4000	/* Transmit Mode					*/
#define	REC			0x8000	/* Receive Mode						*/

/* CAN_CLOCK Masks									*/
#define	BRP			0x03FF	/* Bit-Rate Pre-Scaler	*/

/* CAN_TIMING Masks											*/
#define	TSEG1		0x000F	/* Time Segment 1				*/
#define	TSEG2		0x0070	/* Time Segment 2				*/
#define	SAM			0x0080	/* Sampling						*/
#define	SJW			0x0300	/* Synchronization Jump Width	*/

/* CAN_DEBUG Masks											*/
#define	DEC			0x0001	/* Disable CAN Error Counters	*/
#define	DRI			0x0002	/* Disable CAN RX Input			*/
#define	DTO			0x0004	/* Disable CAN TX Output		*/
#define	DIL			0x0008	/* Disable CAN Internal Loop	*/
#define	MAA			0x0010	/* Mode Auto-Acknowledge Enable	*/
#define	MRB			0x0020	/* Mode Read Back Enable		*/
#define	CDE			0x8000	/* CAN Debug Enable				*/

/* CAN_CEC Masks										*/
#define	RXECNT		0x00FF	/* Receive Error Counter	*/
#define	TXECNT		0xFF00	/* Transmit Error Counter	*/

/* CAN_INTR Masks											*/
#define	MBRIRQ	0x0001	/* Mailbox Receive Interrupt	*/
#define	MBRIF		MBRIRQ	/* legacy */
#define	MBTIRQ	0x0002	/* Mailbox Transmit Interrupt	*/
#define	MBTIF		MBTIRQ	/* legacy */
#define	GIRQ		0x0004	/* Global Interrupt				*/
#define	SMACK		0x0008	/* Sleep Mode Acknowledge		*/
#define	CANTX		0x0040	/* CAN TX Bus Value				*/
#define	CANRX		0x0080	/* CAN RX Bus Value				*/

/* CAN_MBxx_ID1 and CAN_MBxx_ID0 Masks										*/
#define DFC			0xFFFF	/* Data Filtering Code (If Enabled) (ID0)		*/
#define	EXTID_LO	0xFFFF	/* Lower 16 Bits of Extended Identifier (ID0)	*/
#define	EXTID_HI	0x0003	/* Upper 2 Bits of Extended Identifier (ID1)	*/
#define	BASEID		0x1FFC	/* Base Identifier								*/
#define	IDE			0x2000	/* Identifier Extension							*/
#define	RTR			0x4000	/* Remote Frame Transmission Request			*/
#define	AME			0x8000	/* Acceptance Mask Enable						*/

/* CAN_MBxx_TIMESTAMP Masks					*/
#define TSV			0xFFFF	/* Timestamp	*/

/* CAN_MBxx_LENGTH Masks						*/
#define DLC			0x000F	/* Data Length Code	*/

/* CAN_AMxxH and CAN_AMxxL Masks												*/
#define DFM			0xFFFF	/* Data Field Mask (If Enabled) (CAN_AMxxL)			*/
#define	EXTID_LO	0xFFFF	/* Lower 16 Bits of Extended Identifier (CAN_AMxxL)	*/
#define	EXTID_HI	0x0003	/* Upper 2 Bits of Extended Identifier (CAN_AMxxH)	*/
#define	BASEID		0x1FFC	/* Base Identifier									*/
#define	AMIDE		0x2000	/* Acceptance Mask ID Extension Enable				*/
#define	FMD			0x4000	/* Full Mask Data Field Enable						*/
#define	FDF			0x8000	/* Filter On Data Field Enable						*/

/* CAN_MC1 Masks									*/
#define	MC0			0x0001	/* Enable Mailbox 0		*/
#define	MC1			0x0002	/* Enable Mailbox 1		*/
#define	MC2			0x0004	/* Enable Mailbox 2		*/
#define	MC3			0x0008	/* Enable Mailbox 3		*/
#define	MC4			0x0010	/* Enable Mailbox 4		*/
#define	MC5			0x0020	/* Enable Mailbox 5		*/
#define	MC6			0x0040	/* Enable Mailbox 6		*/
#define	MC7			0x0080	/* Enable Mailbox 7		*/
#define	MC8			0x0100	/* Enable Mailbox 8		*/
#define	MC9			0x0200	/* Enable Mailbox 9		*/
#define	MC10		0x0400	/* Enable Mailbox 10	*/
#define	MC11		0x0800	/* Enable Mailbox 11	*/
#define	MC12		0x1000	/* Enable Mailbox 12	*/
#define	MC13		0x2000	/* Enable Mailbox 13	*/
#define	MC14		0x4000	/* Enable Mailbox 14	*/
#define	MC15		0x8000	/* Enable Mailbox 15	*/

/* CAN_MC2 Masks									*/
#define	MC16		0x0001	/* Enable Mailbox 16	*/
#define	MC17		0x0002	/* Enable Mailbox 17	*/
#define	MC18		0x0004	/* Enable Mailbox 18	*/
#define	MC19		0x0008	/* Enable Mailbox 19	*/
#define	MC20		0x0010	/* Enable Mailbox 20	*/
#define	MC21		0x0020	/* Enable Mailbox 21	*/
#define	MC22		0x0040	/* Enable Mailbox 22	*/
#define	MC23		0x0080	/* Enable Mailbox 23	*/
#define	MC24		0x0100	/* Enable Mailbox 24	*/
#define	MC25		0x0200	/* Enable Mailbox 25	*/
#define	MC26		0x0400	/* Enable Mailbox 26	*/
#define	MC27		0x0800	/* Enable Mailbox 27	*/
#define	MC28		0x1000	/* Enable Mailbox 28	*/
#define	MC29		0x2000	/* Enable Mailbox 29	*/
#define	MC30		0x4000	/* Enable Mailbox 30	*/
#define	MC31		0x8000	/* Enable Mailbox 31	*/

/* CAN_MD1 Masks												*/
#define	MD0			0x0001	/* Enable Mailbox 0 For Receive		*/
#define	MD1			0x0002	/* Enable Mailbox 1 For Receive		*/
#define	MD2			0x0004	/* Enable Mailbox 2 For Receive		*/
#define	MD3			0x0008	/* Enable Mailbox 3 For Receive		*/
#define	MD4			0x0010	/* Enable Mailbox 4 For Receive		*/
#define	MD5			0x0020	/* Enable Mailbox 5 For Receive		*/
#define	MD6			0x0040	/* Enable Mailbox 6 For Receive		*/
#define	MD7			0x0080	/* Enable Mailbox 7 For Receive		*/
#define	MD8			0x0100	/* Enable Mailbox 8 For Receive		*/
#define	MD9			0x0200	/* Enable Mailbox 9 For Receive		*/
#define	MD10		0x0400	/* Enable Mailbox 10 For Receive	*/
#define	MD11		0x0800	/* Enable Mailbox 11 For Receive	*/
#define	MD12		0x1000	/* Enable Mailbox 12 For Receive	*/
#define	MD13		0x2000	/* Enable Mailbox 13 For Receive	*/
#define	MD14		0x4000	/* Enable Mailbox 14 For Receive	*/
#define	MD15		0x8000	/* Enable Mailbox 15 For Receive	*/

/* CAN_MD2 Masks												*/
#define	MD16		0x0001	/* Enable Mailbox 16 For Receive	*/
#define	MD17		0x0002	/* Enable Mailbox 17 For Receive	*/
#define	MD18		0x0004	/* Enable Mailbox 18 For Receive	*/
#define	MD19		0x0008	/* Enable Mailbox 19 For Receive	*/
#define	MD20		0x0010	/* Enable Mailbox 20 For Receive	*/
#define	MD21		0x0020	/* Enable Mailbox 21 For Receive	*/
#define	MD22		0x0040	/* Enable Mailbox 22 For Receive	*/
#define	MD23		0x0080	/* Enable Mailbox 23 For Receive	*/
#define	MD24		0x0100	/* Enable Mailbox 24 For Receive	*/
#define	MD25		0x0200	/* Enable Mailbox 25 For Receive	*/
#define	MD26		0x0400	/* Enable Mailbox 26 For Receive	*/
#define	MD27		0x0800	/* Enable Mailbox 27 For Receive	*/
#define	MD28		0x1000	/* Enable Mailbox 28 For Receive	*/
#define	MD29		0x2000	/* Enable Mailbox 29 For Receive	*/
#define	MD30		0x4000	/* Enable Mailbox 30 For Receive	*/
#define	MD31		0x8000	/* Enable Mailbox 31 For Receive	*/

/* CAN_RMP1 Masks												*/
#define	RMP0		0x0001	/* RX Message Pending In Mailbox 0	*/
#define	RMP1		0x0002	/* RX Message Pending In Mailbox 1	*/
#define	RMP2		0x0004	/* RX Message Pending In Mailbox 2	*/
#define	RMP3		0x0008	/* RX Message Pending In Mailbox 3	*/
#define	RMP4		0x0010	/* RX Message Pending In Mailbox 4	*/
#define	RMP5		0x0020	/* RX Message Pending In Mailbox 5	*/
#define	RMP6		0x0040	/* RX Message Pending In Mailbox 6	*/
#define	RMP7		0x0080	/* RX Message Pending In Mailbox 7	*/
#define	RMP8		0x0100	/* RX Message Pending In Mailbox 8	*/
#define	RMP9		0x0200	/* RX Message Pending In Mailbox 9	*/
#define	RMP10		0x0400	/* RX Message Pending In Mailbox 10	*/
#define	RMP11		0x0800	/* RX Message Pending In Mailbox 11	*/
#define	RMP12		0x1000	/* RX Message Pending In Mailbox 12	*/
#define	RMP13		0x2000	/* RX Message Pending In Mailbox 13	*/
#define	RMP14		0x4000	/* RX Message Pending In Mailbox 14	*/
#define	RMP15		0x8000	/* RX Message Pending In Mailbox 15	*/

/* CAN_RMP2 Masks												*/
#define	RMP16		0x0001	/* RX Message Pending In Mailbox 16	*/
#define	RMP17		0x0002	/* RX Message Pending In Mailbox 17	*/
#define	RMP18		0x0004	/* RX Message Pending In Mailbox 18	*/
#define	RMP19		0x0008	/* RX Message Pending In Mailbox 19	*/
#define	RMP20		0x0010	/* RX Message Pending In Mailbox 20	*/
#define	RMP21		0x0020	/* RX Message Pending In Mailbox 21	*/
#define	RMP22		0x0040	/* RX Message Pending In Mailbox 22	*/
#define	RMP23		0x0080	/* RX Message Pending In Mailbox 23	*/
#define	RMP24		0x0100	/* RX Message Pending In Mailbox 24	*/
#define	RMP25		0x0200	/* RX Message Pending In Mailbox 25	*/
#define	RMP26		0x0400	/* RX Message Pending In Mailbox 26	*/
#define	RMP27		0x0800	/* RX Message Pending In Mailbox 27	*/
#define	RMP28		0x1000	/* RX Message Pending In Mailbox 28	*/
#define	RMP29		0x2000	/* RX Message Pending In Mailbox 29	*/
#define	RMP30		0x4000	/* RX Message Pending In Mailbox 30	*/
#define	RMP31		0x8000	/* RX Message Pending In Mailbox 31	*/

/* CAN_RML1 Masks												*/
#define	RML0		0x0001	/* RX Message Lost In Mailbox 0		*/
#define	RML1		0x0002	/* RX Message Lost In Mailbox 1		*/
#define	RML2		0x0004	/* RX Message Lost In Mailbox 2		*/
#define	RML3		0x0008	/* RX Message Lost In Mailbox 3		*/
#define	RML4		0x0010	/* RX Message Lost In Mailbox 4		*/
#define	RML5		0x0020	/* RX Message Lost In Mailbox 5		*/
#define	RML6		0x0040	/* RX Message Lost In Mailbox 6		*/
#define	RML7		0x0080	/* RX Message Lost In Mailbox 7		*/
#define	RML8		0x0100	/* RX Message Lost In Mailbox 8		*/
#define	RML9		0x0200	/* RX Message Lost In Mailbox 9		*/
#define	RML10		0x0400	/* RX Message Lost In Mailbox 10	*/
#define	RML11		0x0800	/* RX Message Lost In Mailbox 11	*/
#define	RML12		0x1000	/* RX Message Lost In Mailbox 12	*/
#define	RML13		0x2000	/* RX Message Lost In Mailbox 13	*/
#define	RML14		0x4000	/* RX Message Lost In Mailbox 14	*/
#define	RML15		0x8000	/* RX Message Lost In Mailbox 15	*/

/* CAN_RML2 Masks												*/
#define	RML16		0x0001	/* RX Message Lost In Mailbox 16	*/
#define	RML17		0x0002	/* RX Message Lost In Mailbox 17	*/
#define	RML18		0x0004	/* RX Message Lost In Mailbox 18	*/
#define	RML19		0x0008	/* RX Message Lost In Mailbox 19	*/
#define	RML20		0x0010	/* RX Message Lost In Mailbox 20	*/
#define	RML21		0x0020	/* RX Message Lost In Mailbox 21	*/
#define	RML22		0x0040	/* RX Message Lost In Mailbox 22	*/
#define	RML23		0x0080	/* RX Message Lost In Mailbox 23	*/
#define	RML24		0x0100	/* RX Message Lost In Mailbox 24	*/
#define	RML25		0x0200	/* RX Message Lost In Mailbox 25	*/
#define	RML26		0x0400	/* RX Message Lost In Mailbox 26	*/
#define	RML27		0x0800	/* RX Message Lost In Mailbox 27	*/
#define	RML28		0x1000	/* RX Message Lost In Mailbox 28	*/
#define	RML29		0x2000	/* RX Message Lost In Mailbox 29	*/
#define	RML30		0x4000	/* RX Message Lost In Mailbox 30	*/
#define	RML31		0x8000	/* RX Message Lost In Mailbox 31	*/

/* CAN_OPSS1 Masks																				*/
#define	OPSS0		0x0001	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 0	*/
#define	OPSS1		0x0002	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 1	*/
#define	OPSS2		0x0004	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 2	*/
#define	OPSS3		0x0008	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 3	*/
#define	OPSS4		0x0010	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 4	*/
#define	OPSS5		0x0020	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 5	*/
#define	OPSS6		0x0040	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 6	*/
#define	OPSS7		0x0080	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 7	*/
#define	OPSS8		0x0100	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 8	*/
#define	OPSS9		0x0200	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 9	*/
#define	OPSS10		0x0400	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 10	*/
#define	OPSS11		0x0800	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 11	*/
#define	OPSS12		0x1000	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 12	*/
#define	OPSS13		0x2000	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 13	*/
#define	OPSS14		0x4000	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 14	*/
#define	OPSS15		0x8000	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 15	*/

/* CAN_OPSS2 Masks																				*/
#define	OPSS16		0x0001	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 16	*/
#define	OPSS17		0x0002	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 17	*/
#define	OPSS18		0x0004	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 18	*/
#define	OPSS19		0x0008	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 19	*/
#define	OPSS20		0x0010	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 20	*/
#define	OPSS21		0x0020	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 21	*/
#define	OPSS22		0x0040	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 22	*/
#define	OPSS23		0x0080	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 23	*/
#define	OPSS24		0x0100	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 24	*/
#define	OPSS25		0x0200	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 25	*/
#define	OPSS26		0x0400	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 26	*/
#define	OPSS27		0x0800	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 27	*/
#define	OPSS28		0x1000	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 28	*/
#define	OPSS29		0x2000	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 29	*/
#define	OPSS30		0x4000	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 30	*/
#define	OPSS31		0x8000	/* Enable RX Overwrite Protection or TX Single-Shot For Mailbox 31	*/

/* CAN_TRR1 Masks														*/
#define	TRR0		0x0001	/* Deny But Don't Lock Access To Mailbox 0	*/
#define	TRR1		0x0002	/* Deny But Don't Lock Access To Mailbox 1	*/
#define	TRR2		0x0004	/* Deny But Don't Lock Access To Mailbox 2	*/
#define	TRR3		0x0008	/* Deny But Don't Lock Access To Mailbox 3	*/
#define	TRR4		0x0010	/* Deny But Don't Lock Access To Mailbox 4	*/
#define	TRR5		0x0020	/* Deny But Don't Lock Access To Mailbox 5	*/
#define	TRR6		0x0040	/* Deny But Don't Lock Access To Mailbox 6	*/
#define	TRR7		0x0080	/* Deny But Don't Lock Access To Mailbox 7	*/
#define	TRR8		0x0100	/* Deny But Don't Lock Access To Mailbox 8	*/
#define	TRR9		0x0200	/* Deny But Don't Lock Access To Mailbox 9	*/
#define	TRR10		0x0400	/* Deny But Don't Lock Access To Mailbox 10	*/
#define	TRR11		0x0800	/* Deny But Don't Lock Access To Mailbox 11	*/
#define	TRR12		0x1000	/* Deny But Don't Lock Access To Mailbox 12	*/
#define	TRR13		0x2000	/* Deny But Don't Lock Access To Mailbox 13	*/
#define	TRR14		0x4000	/* Deny But Don't Lock Access To Mailbox 14	*/
#define	TRR15		0x8000	/* Deny But Don't Lock Access To Mailbox 15	*/

/* CAN_TRR2 Masks														*/
#define	TRR16		0x0001	/* Deny But Don't Lock Access To Mailbox 16	*/
#define	TRR17		0x0002	/* Deny But Don't Lock Access To Mailbox 17	*/
#define	TRR18		0x0004	/* Deny But Don't Lock Access To Mailbox 18	*/
#define	TRR19		0x0008	/* Deny But Don't Lock Access To Mailbox 19	*/
#define	TRR20		0x0010	/* Deny But Don't Lock Access To Mailbox 20	*/
#define	TRR21		0x0020	/* Deny But Don't Lock Access To Mailbox 21	*/
#define	TRR22		0x0040	/* Deny But Don't Lock Access To Mailbox 22	*/
#define	TRR23		0x0080	/* Deny But Don't Lock Access To Mailbox 23	*/
#define	TRR24		0x0100	/* Deny But Don't Lock Access To Mailbox 24	*/
#define	TRR25		0x0200	/* Deny But Don't Lock Access To Mailbox 25	*/
#define	TRR26		0x0400	/* Deny But Don't Lock Access To Mailbox 26	*/
#define	TRR27		0x0800	/* Deny But Don't Lock Access To Mailbox 27	*/
#define	TRR28		0x1000	/* Deny But Don't Lock Access To Mailbox 28	*/
#define	TRR29		0x2000	/* Deny But Don't Lock Access To Mailbox 29	*/
#define	TRR30		0x4000	/* Deny But Don't Lock Access To Mailbox 30	*/
#define	TRR31		0x8000	/* Deny But Don't Lock Access To Mailbox 31	*/

/* CAN_TRS1 Masks													*/
#define	TRS0		0x0001	/* Remote Frame Request For Mailbox 0	*/
#define	TRS1		0x0002	/* Remote Frame Request For Mailbox 1	*/
#define	TRS2		0x0004	/* Remote Frame Request For Mailbox 2	*/
#define	TRS3		0x0008	/* Remote Frame Request For Mailbox 3	*/
#define	TRS4		0x0010	/* Remote Frame Request For Mailbox 4	*/
#define	TRS5		0x0020	/* Remote Frame Request For Mailbox 5	*/
#define	TRS6		0x0040	/* Remote Frame Request For Mailbox 6	*/
#define	TRS7		0x0080	/* Remote Frame Request For Mailbox 7	*/
#define	TRS8		0x0100	/* Remote Frame Request For Mailbox 8	*/
#define	TRS9		0x0200	/* Remote Frame Request For Mailbox 9	*/
#define	TRS10		0x0400	/* Remote Frame Request For Mailbox 10	*/
#define	TRS11		0x0800	/* Remote Frame Request For Mailbox 11	*/
#define	TRS12		0x1000	/* Remote Frame Request For Mailbox 12	*/
#define	TRS13		0x2000	/* Remote Frame Request For Mailbox 13	*/
#define	TRS14		0x4000	/* Remote Frame Request For Mailbox 14	*/
#define	TRS15		0x8000	/* Remote Frame Request For Mailbox 15	*/

/* CAN_TRS2 Masks													*/
#define	TRS16		0x0001	/* Remote Frame Request For Mailbox 16	*/
#define	TRS17		0x0002	/* Remote Frame Request For Mailbox 17	*/
#define	TRS18		0x0004	/* Remote Frame Request For Mailbox 18	*/
#define	TRS19		0x0008	/* Remote Frame Request For Mailbox 19	*/
#define	TRS20		0x0010	/* Remote Frame Request For Mailbox 20	*/
#define	TRS21		0x0020	/* Remote Frame Request For Mailbox 21	*/
#define	TRS22		0x0040	/* Remote Frame Request For Mailbox 22	*/
#define	TRS23		0x0080	/* Remote Frame Request For Mailbox 23	*/
#define	TRS24		0x0100	/* Remote Frame Request For Mailbox 24	*/
#define	TRS25		0x0200	/* Remote Frame Request For Mailbox 25	*/
#define	TRS26		0x0400	/* Remote Frame Request For Mailbox 26	*/
#define	TRS27		0x0800	/* Remote Frame Request For Mailbox 27	*/
#define	TRS28		0x1000	/* Remote Frame Request For Mailbox 28	*/
#define	TRS29		0x2000	/* Remote Frame Request For Mailbox 29	*/
#define	TRS30		0x4000	/* Remote Frame Request For Mailbox 30	*/
#define	TRS31		0x8000	/* Remote Frame Request For Mailbox 31	*/

/* CAN_AA1 Masks												*/
#define	AA0			0x0001	/* Aborted Message In Mailbox 0		*/
#define	AA1			0x0002	/* Aborted Message In Mailbox 1		*/
#define	AA2			0x0004	/* Aborted Message In Mailbox 2		*/
#define	AA3			0x0008	/* Aborted Message In Mailbox 3		*/
#define	AA4			0x0010	/* Aborted Message In Mailbox 4		*/
#define	AA5			0x0020	/* Aborted Message In Mailbox 5		*/
#define	AA6			0x0040	/* Aborted Message In Mailbox 6		*/
#define	AA7			0x0080	/* Aborted Message In Mailbox 7		*/
#define	AA8			0x0100	/* Aborted Message In Mailbox 8		*/
#define	AA9			0x0200	/* Aborted Message In Mailbox 9		*/
#define	AA10		0x0400	/* Aborted Message In Mailbox 10	*/
#define	AA11		0x0800	/* Aborted Message In Mailbox 11	*/
#define	AA12		0x1000	/* Aborted Message In Mailbox 12	*/
#define	AA13		0x2000	/* Aborted Message In Mailbox 13	*/
#define	AA14		0x4000	/* Aborted Message In Mailbox 14	*/
#define	AA15		0x8000	/* Aborted Message In Mailbox 15	*/

/* CAN_AA2 Masks												*/
#define	AA16		0x0001	/* Aborted Message In Mailbox 16	*/
#define	AA17		0x0002	/* Aborted Message In Mailbox 17	*/
#define	AA18		0x0004	/* Aborted Message In Mailbox 18	*/
#define	AA19		0x0008	/* Aborted Message In Mailbox 19	*/
#define	AA20		0x0010	/* Aborted Message In Mailbox 20	*/
#define	AA21		0x0020	/* Aborted Message In Mailbox 21	*/
#define	AA22		0x0040	/* Aborted Message In Mailbox 22	*/
#define	AA23		0x0080	/* Aborted Message In Mailbox 23	*/
#define	AA24		0x0100	/* Aborted Message In Mailbox 24	*/
#define	AA25		0x0200	/* Aborted Message In Mailbox 25	*/
#define	AA26		0x0400	/* Aborted Message In Mailbox 26	*/
#define	AA27		0x0800	/* Aborted Message In Mailbox 27	*/
#define	AA28		0x1000	/* Aborted Message In Mailbox 28	*/
#define	AA29		0x2000	/* Aborted Message In Mailbox 29	*/
#define	AA30		0x4000	/* Aborted Message In Mailbox 30	*/
#define	AA31		0x8000	/* Aborted Message In Mailbox 31	*/

/* CAN_TA1 Masks													*/
#define	TA0			0x0001	/* Transmit Successful From Mailbox 0	*/
#define	TA1			0x0002	/* Transmit Successful From Mailbox 1	*/
#define	TA2			0x0004	/* Transmit Successful From Mailbox 2	*/
#define	TA3			0x0008	/* Transmit Successful From Mailbox 3	*/
#define	TA4			0x0010	/* Transmit Successful From Mailbox 4	*/
#define	TA5			0x0020	/* Transmit Successful From Mailbox 5	*/
#define	TA6			0x0040	/* Transmit Successful From Mailbox 6	*/
#define	TA7			0x0080	/* Transmit Successful From Mailbox 7	*/
#define	TA8			0x0100	/* Transmit Successful From Mailbox 8	*/
#define	TA9			0x0200	/* Transmit Successful From Mailbox 9	*/
#define	TA10		0x0400	/* Transmit Successful From Mailbox 10	*/
#define	TA11		0x0800	/* Transmit Successful From Mailbox 11	*/
#define	TA12		0x1000	/* Transmit Successful From Mailbox 12	*/
#define	TA13		0x2000	/* Transmit Successful From Mailbox 13	*/
#define	TA14		0x4000	/* Transmit Successful From Mailbox 14	*/
#define	TA15		0x8000	/* Transmit Successful From Mailbox 15	*/

/* CAN_TA2 Masks													*/
#define	TA16		0x0001	/* Transmit Successful From Mailbox 16	*/
#define	TA17		0x0002	/* Transmit Successful From Mailbox 17	*/
#define	TA18		0x0004	/* Transmit Successful From Mailbox 18	*/
#define	TA19		0x0008	/* Transmit Successful From Mailbox 19	*/
#define	TA20		0x0010	/* Transmit Successful From Mailbox 20	*/
#define	TA21		0x0020	/* Transmit Successful From Mailbox 21	*/
#define	TA22		0x0040	/* Transmit Successful From Mailbox 22	*/
#define	TA23		0x0080	/* Transmit Successful From Mailbox 23	*/
#define	TA24		0x0100	/* Transmit Successful From Mailbox 24	*/
#define	TA25		0x0200	/* Transmit Successful From Mailbox 25	*/
#define	TA26		0x0400	/* Transmit Successful From Mailbox 26	*/
#define	TA27		0x0800	/* Transmit Successful From Mailbox 27	*/
#define	TA28		0x1000	/* Transmit Successful From Mailbox 28	*/
#define	TA29		0x2000	/* Transmit Successful From Mailbox 29	*/
#define	TA30		0x4000	/* Transmit Successful From Mailbox 30	*/
#define	TA31		0x8000	/* Transmit Successful From Mailbox 31	*/

/* CAN_MBTD Masks												*/
#define TDPTR		0x001F	/* Mailbox To Temporarily Disable	*/
#define	TDA			0x0040	/* Temporary Disable Acknowledge	*/
#define	TDR			0x0080	/* Temporary Disable Request		*/

/* CAN_RFH1 Masks																		*/
#define	RFH0		0x0001	/* Enable Automatic Remote Frame Handling For Mailbox 0		*/
#define	RFH1		0x0002	/* Enable Automatic Remote Frame Handling For Mailbox 1		*/
#define	RFH2		0x0004	/* Enable Automatic Remote Frame Handling For Mailbox 2		*/
#define	RFH3		0x0008	/* Enable Automatic Remote Frame Handling For Mailbox 3		*/
#define	RFH4		0x0010	/* Enable Automatic Remote Frame Handling For Mailbox 4		*/
#define	RFH5		0x0020	/* Enable Automatic Remote Frame Handling For Mailbox 5		*/
#define	RFH6		0x0040	/* Enable Automatic Remote Frame Handling For Mailbox 6		*/
#define	RFH7		0x0080	/* Enable Automatic Remote Frame Handling For Mailbox 7		*/
#define	RFH8		0x0100	/* Enable Automatic Remote Frame Handling For Mailbox 8		*/
#define	RFH9		0x0200	/* Enable Automatic Remote Frame Handling For Mailbox 9		*/
#define	RFH10		0x0400	/* Enable Automatic Remote Frame Handling For Mailbox 10	*/
#define	RFH11		0x0800	/* Enable Automatic Remote Frame Handling For Mailbox 11	*/
#define	RFH12		0x1000	/* Enable Automatic Remote Frame Handling For Mailbox 12	*/
#define	RFH13		0x2000	/* Enable Automatic Remote Frame Handling For Mailbox 13	*/
#define	RFH14		0x4000	/* Enable Automatic Remote Frame Handling For Mailbox 14	*/
#define	RFH15		0x8000	/* Enable Automatic Remote Frame Handling For Mailbox 15	*/

/* CAN_RFH2 Masks																		*/
#define	RFH16		0x0001	/* Enable Automatic Remote Frame Handling For Mailbox 16	*/
#define	RFH17		0x0002	/* Enable Automatic Remote Frame Handling For Mailbox 17	*/
#define	RFH18		0x0004	/* Enable Automatic Remote Frame Handling For Mailbox 18	*/
#define	RFH19		0x0008	/* Enable Automatic Remote Frame Handling For Mailbox 19	*/
#define	RFH20		0x0010	/* Enable Automatic Remote Frame Handling For Mailbox 20	*/
#define	RFH21		0x0020	/* Enable Automatic Remote Frame Handling For Mailbox 21	*/
#define	RFH22		0x0040	/* Enable Automatic Remote Frame Handling For Mailbox 22	*/
#define	RFH23		0x0080	/* Enable Automatic Remote Frame Handling For Mailbox 23	*/
#define	RFH24		0x0100	/* Enable Automatic Remote Frame Handling For Mailbox 24	*/
#define	RFH25		0x0200	/* Enable Automatic Remote Frame Handling For Mailbox 25	*/
#define	RFH26		0x0400	/* Enable Automatic Remote Frame Handling For Mailbox 26	*/
#define	RFH27		0x0800	/* Enable Automatic Remote Frame Handling For Mailbox 27	*/
#define	RFH28		0x1000	/* Enable Automatic Remote Frame Handling For Mailbox 28	*/
#define	RFH29		0x2000	/* Enable Automatic Remote Frame Handling For Mailbox 29	*/
#define	RFH30		0x4000	/* Enable Automatic Remote Frame Handling For Mailbox 30	*/
#define	RFH31		0x8000	/* Enable Automatic Remote Frame Handling For Mailbox 31	*/

/* CAN_MBTIF1 Masks													*/
#define	MBTIF0		0x0001	/* TX Interrupt Active In Mailbox 0		*/
#define	MBTIF1		0x0002	/* TX Interrupt Active In Mailbox 1		*/
#define	MBTIF2		0x0004	/* TX Interrupt Active In Mailbox 2		*/
#define	MBTIF3		0x0008	/* TX Interrupt Active In Mailbox 3		*/
#define	MBTIF4		0x0010	/* TX Interrupt Active In Mailbox 4		*/
#define	MBTIF5		0x0020	/* TX Interrupt Active In Mailbox 5		*/
#define	MBTIF6		0x0040	/* TX Interrupt Active In Mailbox 6		*/
#define	MBTIF7		0x0080	/* TX Interrupt Active In Mailbox 7		*/
#define	MBTIF8		0x0100	/* TX Interrupt Active In Mailbox 8		*/
#define	MBTIF9		0x0200	/* TX Interrupt Active In Mailbox 9		*/
#define	MBTIF10		0x0400	/* TX Interrupt Active In Mailbox 10	*/
#define	MBTIF11		0x0800	/* TX Interrupt Active In Mailbox 11	*/
#define	MBTIF12		0x1000	/* TX Interrupt Active In Mailbox 12	*/
#define	MBTIF13		0x2000	/* TX Interrupt Active In Mailbox 13	*/
#define	MBTIF14		0x4000	/* TX Interrupt Active In Mailbox 14	*/
#define	MBTIF15		0x8000	/* TX Interrupt Active In Mailbox 15	*/

/* CAN_MBTIF2 Masks													*/
#define	MBTIF16		0x0001	/* TX Interrupt Active In Mailbox 16	*/
#define	MBTIF17		0x0002	/* TX Interrupt Active In Mailbox 17	*/
#define	MBTIF18		0x0004	/* TX Interrupt Active In Mailbox 18	*/
#define	MBTIF19		0x0008	/* TX Interrupt Active In Mailbox 19	*/
#define	MBTIF20		0x0010	/* TX Interrupt Active In Mailbox 20	*/
#define	MBTIF21		0x0020	/* TX Interrupt Active In Mailbox 21	*/
#define	MBTIF22		0x0040	/* TX Interrupt Active In Mailbox 22	*/
#define	MBTIF23		0x0080	/* TX Interrupt Active In Mailbox 23	*/
#define	MBTIF24		0x0100	/* TX Interrupt Active In Mailbox 24	*/
#define	MBTIF25		0x0200	/* TX Interrupt Active In Mailbox 25	*/
#define	MBTIF26		0x0400	/* TX Interrupt Active In Mailbox 26	*/
#define	MBTIF27		0x0800	/* TX Interrupt Active In Mailbox 27	*/
#define	MBTIF28		0x1000	/* TX Interrupt Active In Mailbox 28	*/
#define	MBTIF29		0x2000	/* TX Interrupt Active In Mailbox 29	*/
#define	MBTIF30		0x4000	/* TX Interrupt Active In Mailbox 30	*/
#define	MBTIF31		0x8000	/* TX Interrupt Active In Mailbox 31	*/

/* CAN_MBRIF1 Masks													*/
#define	MBRIF0		0x0001	/* RX Interrupt Active In Mailbox 0		*/
#define	MBRIF1		0x0002	/* RX Interrupt Active In Mailbox 1		*/
#define	MBRIF2		0x0004	/* RX Interrupt Active In Mailbox 2		*/
#define	MBRIF3		0x0008	/* RX Interrupt Active In Mailbox 3		*/
#define	MBRIF4		0x0010	/* RX Interrupt Active In Mailbox 4		*/
#define	MBRIF5		0x0020	/* RX Interrupt Active In Mailbox 5		*/
#define	MBRIF6		0x0040	/* RX Interrupt Active In Mailbox 6		*/
#define	MBRIF7		0x0080	/* RX Interrupt Active In Mailbox 7		*/
#define	MBRIF8		0x0100	/* RX Interrupt Active In Mailbox 8		*/
#define	MBRIF9		0x0200	/* RX Interrupt Active In Mailbox 9		*/
#define	MBRIF10		0x0400	/* RX Interrupt Active In Mailbox 10	*/
#define	MBRIF11		0x0800	/* RX Interrupt Active In Mailbox 11	*/
#define	MBRIF12		0x1000	/* RX Interrupt Active In Mailbox 12	*/
#define	MBRIF13		0x2000	/* RX Interrupt Active In Mailbox 13	*/
#define	MBRIF14		0x4000	/* RX Interrupt Active In Mailbox 14	*/
#define	MBRIF15		0x8000	/* RX Interrupt Active In Mailbox 15	*/

/* CAN_MBRIF2 Masks													*/
#define	MBRIF16		0x0001	/* RX Interrupt Active In Mailbox 16	*/
#define	MBRIF17		0x0002	/* RX Interrupt Active In Mailbox 17	*/
#define	MBRIF18		0x0004	/* RX Interrupt Active In Mailbox 18	*/
#define	MBRIF19		0x0008	/* RX Interrupt Active In Mailbox 19	*/
#define	MBRIF20		0x0010	/* RX Interrupt Active In Mailbox 20	*/
#define	MBRIF21		0x0020	/* RX Interrupt Active In Mailbox 21	*/
#define	MBRIF22		0x0040	/* RX Interrupt Active In Mailbox 22	*/
#define	MBRIF23		0x0080	/* RX Interrupt Active In Mailbox 23	*/
#define	MBRIF24		0x0100	/* RX Interrupt Active In Mailbox 24	*/
#define	MBRIF25		0x0200	/* RX Interrupt Active In Mailbox 25	*/
#define	MBRIF26		0x0400	/* RX Interrupt Active In Mailbox 26	*/
#define	MBRIF27		0x0800	/* RX Interrupt Active In Mailbox 27	*/
#define	MBRIF28		0x1000	/* RX Interrupt Active In Mailbox 28	*/
#define	MBRIF29		0x2000	/* RX Interrupt Active In Mailbox 29	*/
#define	MBRIF30		0x4000	/* RX Interrupt Active In Mailbox 30	*/
#define	MBRIF31		0x8000	/* RX Interrupt Active In Mailbox 31	*/

/* CAN_MBIM1 Masks												*/
#define	MBIM0		0x0001	/* Enable Interrupt For Mailbox 0	*/
#define	MBIM1		0x0002	/* Enable Interrupt For Mailbox 1	*/
#define	MBIM2		0x0004	/* Enable Interrupt For Mailbox 2	*/
#define	MBIM3		0x0008	/* Enable Interrupt For Mailbox 3	*/
#define	MBIM4		0x0010	/* Enable Interrupt For Mailbox 4	*/
#define	MBIM5		0x0020	/* Enable Interrupt For Mailbox 5	*/
#define	MBIM6		0x0040	/* Enable Interrupt For Mailbox 6	*/
#define	MBIM7		0x0080	/* Enable Interrupt For Mailbox 7	*/
#define	MBIM8		0x0100	/* Enable Interrupt For Mailbox 8	*/
#define	MBIM9		0x0200	/* Enable Interrupt For Mailbox 9	*/
#define	MBIM10		0x0400	/* Enable Interrupt For Mailbox 10	*/
#define	MBIM11		0x0800	/* Enable Interrupt For Mailbox 11	*/
#define	MBIM12		0x1000	/* Enable Interrupt For Mailbox 12	*/
#define	MBIM13		0x2000	/* Enable Interrupt For Mailbox 13	*/
#define	MBIM14		0x4000	/* Enable Interrupt For Mailbox 14	*/
#define	MBIM15		0x8000	/* Enable Interrupt For Mailbox 15	*/

/* CAN_MBIM2 Masks												*/
#define	MBIM16		0x0001	/* Enable Interrupt For Mailbox 16	*/
#define	MBIM17		0x0002	/* Enable Interrupt For Mailbox 17	*/
#define	MBIM18		0x0004	/* Enable Interrupt For Mailbox 18	*/
#define	MBIM19		0x0008	/* Enable Interrupt For Mailbox 19	*/
#define	MBIM20		0x0010	/* Enable Interrupt For Mailbox 20	*/
#define	MBIM21		0x0020	/* Enable Interrupt For Mailbox 21	*/
#define	MBIM22		0x0040	/* Enable Interrupt For Mailbox 22	*/
#define	MBIM23		0x0080	/* Enable Interrupt For Mailbox 23	*/
#define	MBIM24		0x0100	/* Enable Interrupt For Mailbox 24	*/
#define	MBIM25		0x0200	/* Enable Interrupt For Mailbox 25	*/
#define	MBIM26		0x0400	/* Enable Interrupt For Mailbox 26	*/
#define	MBIM27		0x0800	/* Enable Interrupt For Mailbox 27	*/
#define	MBIM28		0x1000	/* Enable Interrupt For Mailbox 28	*/
#define	MBIM29		0x2000	/* Enable Interrupt For Mailbox 29	*/
#define	MBIM30		0x4000	/* Enable Interrupt For Mailbox 30	*/
#define	MBIM31		0x8000	/* Enable Interrupt For Mailbox 31	*/

/* CAN_GIM Masks																*/
#define	EWTIM		0x0001	/* Enable TX Error Count Interrupt					*/
#define	EWRIM		0x0002	/* Enable RX Error Count Interrupt					*/
#define	EPIM		0x0004	/* Enable Error-Passive Mode Interrupt				*/
#define	BOIM		0x0008	/* Enable Bus Off Interrupt							*/
#define	WUIM		0x0010	/* Enable Wake-Up Interrupt							*/
#define	UIAIM		0x0020	/* Enable Access To Unimplemented Address Interrupt	*/
#define	AAIM		0x0040	/* Enable Abort Acknowledge Interrupt				*/
#define	RMLIM		0x0080	/* Enable RX Message Lost Interrupt					*/
#define	UCEIM		0x0100	/* Enable Universal Counter Overflow Interrupt		*/
#define	EXTIM		0x0200	/* Enable External Trigger Output Interrupt			*/
#define	ADIM		0x0400	/* Enable Access Denied Interrupt					*/

/* CAN_GIS Masks															*/
#define	EWTIS		0x0001	/* TX Error Count IRQ Status					*/
#define	EWRIS		0x0002	/* RX Error Count IRQ Status					*/
#define	EPIS		0x0004	/* Error-Passive Mode IRQ Status				*/
#define	BOIS		0x0008	/* Bus Off IRQ Status							*/
#define	WUIS		0x0010	/* Wake-Up IRQ Status							*/
#define	UIAIS		0x0020	/* Access To Unimplemented Address IRQ Status	*/
#define	AAIS		0x0040	/* Abort Acknowledge IRQ Status					*/
#define	RMLIS		0x0080	/* RX Message Lost IRQ Status					*/
#define	UCEIS		0x0100	/* Universal Counter Overflow IRQ Status		*/
#define	EXTIS		0x0200	/* External Trigger Output IRQ Status			*/
#define	ADIS		0x0400	/* Access Denied IRQ Status						*/

/* CAN_GIF Masks															*/
#define	EWTIF		0x0001	/* TX Error Count IRQ Flag						*/
#define	EWRIF		0x0002	/* RX Error Count IRQ Flag						*/
#define	EPIF		0x0004	/* Error-Passive Mode IRQ Flag					*/
#define	BOIF		0x0008	/* Bus Off IRQ Flag								*/
#define	WUIF		0x0010	/* Wake-Up IRQ Flag								*/
#define	UIAIF		0x0020	/* Access To Unimplemented Address IRQ Flag		*/
#define	AAIF		0x0040	/* Abort Acknowledge IRQ Flag					*/
#define	RMLIF		0x0080	/* RX Message Lost IRQ Flag						*/
#define	UCEIF		0x0100	/* Universal Counter Overflow IRQ Flag			*/
#define	EXTIF		0x0200	/* External Trigger Output IRQ Flag				*/
#define	ADIF		0x0400	/* Access Denied IRQ Flag						*/

/* CAN_UCCNF Masks															*/
#define	UCCNF		0x000F	/* Universal Counter Mode						*/
#define UC_STAMP	0x0001	/* 		Timestamp Mode							*/
#define UC_WDOG		0x0002	/* 		Watchdog Mode							*/
#define UC_AUTOTX	0x0003	/* 		Auto-Transmit Mode						*/
#define UC_ERROR	0x0006	/* 		CAN Error Frame Count					*/
#define UC_OVER		0x0007	/* 		CAN Overload Frame Count				*/
#define UC_LOST		0x0008	/* 		Arbitration Lost During TX Count		*/
#define UC_AA		0x0009	/* 		TX Abort Count							*/
#define UC_TA		0x000A	/* 		TX Successful Count						*/
#define UC_REJECT	0x000B	/* 		RX Message Rejected Count				*/
#define UC_RML		0x000C	/* 		RX Message Lost Count					*/
#define UC_RX		0x000D	/* 		Total Successful RX Messages Count		*/
#define UC_RMP		0x000E	/* 		Successful RX W/Matching ID Count		*/
#define UC_ALL		0x000F	/* 		Correct Message On CAN Bus Line Count	*/
#define	UCRC		0x0020	/* Universal Counter Reload/Clear				*/
#define	UCCT		0x0040	/* Universal Counter CAN Trigger				*/
#define	UCE			0x0080	/* Universal Counter Enable						*/

/* CAN_ESR Masks										*/
#define	ACKE		0x0004	/* Acknowledge Error		*/
#define	SER			0x0008	/* Stuff Error				*/
#define	CRCE		0x0010	/* CRC Error				*/
#define	SA0			0x0020	/* Stuck At Dominant Error	*/
#define	BEF			0x0040	/* Bit Error Flag			*/
#define	FER			0x0080	/* Form Error Flag			*/

/* CAN_EWR Masks												*/
#define	EWLREC		0x00FF	/* RX Error Count Limit (For EWRIS)	*/
#define	EWLTEC		0xFF00	/* TX Error Count Limit (For EWTIS)	*/


/*  *******************  PIN CONTROL REGISTER MASKS  ************************/
/* PORT_MUX Masks															*/
#define	PJSE			0x0001			/* Port J SPI/SPORT Enable			*/
#define	PJSE_SPORT		0x0000			/* 		Enable TFS0/DT0PRI			*/
#define	PJSE_SPI		0x0001			/* 		Enable SPI_SSEL3:2			*/

#ifdef _MISRA_RULES
#define	PJCE(x)			(((x)&0x3u)<<1)	/* Port J CAN/SPI/SPORT Enable		*/
#else
#define	PJCE(x)			(((x)&0x3)<<1)	/* Port J CAN/SPI/SPORT Enable		*/
#endif /* _MISRA_RULES */

#define	PJCE_SPORT		0x0000			/* 		Enable DR0SEC/DT0SEC		*/
#define	PJCE_CAN		0x0002			/* 		Enable CAN RX/TX			*/
#define	PJCE_SPI		0x0004			/* 		Enable SPI_SSEL7			*/

#define	PFDE			0x0008			/* Port F DMA Request Enable		*/
#define	PFDE_UART		0x0000			/* 		Enable UART0 RX/TX			*/
#define	PFDE_DMA		0x0008			/* 		Enable DMAR1:0				*/

#define	PFTE			0x0010			/* Port F Timer Enable				*/
#define	PFTE_UART		0x0000			/*		Enable UART1 RX/TX			*/
#define	PFTE_TIMER		0x0010			/* 		Enable TMR7:6				*/

#define	PFS6E			0x0020			/* Port F SPI SSEL 6 Enable			*/
#define	PFS6E_TIMER		0x0000			/*		Enable TMR5					*/
#define	PFS6E_SPI		0x0020			/* 		Enable SPI_SSEL6			*/

#define	PFS5E			0x0040			/* Port F SPI SSEL 5 Enable			*/
#define	PFS5E_TIMER		0x0000			/*		Enable TMR4					*/
#define	PFS5E_SPI		0x0040			/* 		Enable SPI_SSEL5			*/

#define	PFS4E			0x0080			/* Port F SPI SSEL 4 Enable			*/
#define	PFS4E_TIMER		0x0000			/*		Enable TMR3					*/
#define	PFS4E_SPI		0x0080			/* 		Enable SPI_SSEL4			*/

#define	PFFE			0x0100			/* Port F PPI Frame Sync Enable		*/
#define	PFFE_TIMER		0x0000			/* 		Enable TMR2					*/
#define	PFFE_PPI		0x0100			/* 		Enable PPI FS3				*/

#define	PGSE			0x0200			/* Port G SPORT1 Secondary Enable	*/
#define	PGSE_PPI		0x0000			/* 		Enable PPI D9:8				*/
#define	PGSE_SPORT		0x0200			/* 		Enable DR1SEC/DT1SEC		*/

#define	PGRE			0x0400			/* Port G SPORT1 Receive Enable		*/
#define	PGRE_PPI		0x0000			/* 		Enable PPI D12:10			*/
#define	PGRE_SPORT		0x0400			/* 		Enable DR1PRI/RFS1/RSCLK1	*/

#define	PGTE			0x0800			/* Port G SPORT1 Transmit Enable	*/
#define	PGTE_PPI		0x0000			/* 		Enable PPI D15:13			*/
#define	PGTE_SPORT		0x0800			/* 		Enable DT1PRI/TFS1/TSCLK1	*/


/*  ******************  HANDSHAKE DMA (HDMA) MASKS  *********************/
/* HDMAx_CTL Masks														*/
#define	HMDMAEN		0x0001	/* Enable Handshake DMA 0/1					*/
#define	REP			0x0002	/* HDMA Request Polarity					*/
#define	UTE			0x0004	/* Urgency Threshold Enable					*/
#define	OIE			0x0010	/* Overflow Interrupt Enable				*/
#define	BDIE		0x0020	/* Block Done Interrupt Enable				*/
#define	MBDI		0x0040	/* Mask Block Done IRQ If Pending ECNT		*/
#define	DRQ			0x0300	/* HDMA Request Type						*/
#define	DRQ_NONE	0x0000	/* 		No Request							*/
#define	DRQ_SINGLE	0x0100	/* 		Channels Request Single				*/
#define	DRQ_MULTI	0x0200	/* 		Channels Request Multi (Default)	*/
#define	DRQ_URGENT	0x0300	/* 		Channels Request Multi Urgent		*/
#define	RBC			0x1000	/* Reload BCNT With IBCNT					*/
#define	PS			0x2000	/* HDMA Pin Status							*/
#define	OI			0x4000	/* Overflow Interrupt Generated				*/
#define	BDI			0x8000	/* Block Done Interrupt Generated			*/

/* entry addresses of the user-callable Boot ROM functions */

#define _BOOTROM_RESET 0xEF000000
#define _BOOTROM_FINAL_INIT 0xEF000002
#define _BOOTROM_DO_MEMORY_DMA 0xEF000006
#define _BOOTROM_BOOT_DXE_FLASH 0xEF000008
#define _BOOTROM_BOOT_DXE_SPI 0xEF00000A
#define _BOOTROM_BOOT_DXE_TWI 0xEF00000C
#define _BOOTROM_GET_DXE_ADDRESS_FLASH 0xEF000010
#define _BOOTROM_GET_DXE_ADDRESS_SPI 0xEF000012
#define _BOOTROM_GET_DXE_ADDRESS_TWI 0xEF000014

/* Alternate Deprecated Macros Provided For Backwards Code Compatibility */
#define	PGDE_UART   PFDE_UART
#define	PGDE_DMA    PFDE_DMA
#define	CKELOW		SCKELOW

#ifdef _MISRA_RULES
#pragma diag(pop)
#endif /* _MISRA_RULES */

#endif /* _DEF_BF534_H */

