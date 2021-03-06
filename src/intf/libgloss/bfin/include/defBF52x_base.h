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
** defBF52x_base.h
**
** Copyright (C) 2007-2009 Analog Devices Inc., All Rights Reserved.
**
************************************************************************************
**
** This include file contains a list of macro "defines" to enable the programmer
** to use symbolic names for the registers common to the ADSP-BF52x peripherals.
**
************************************************************************************
** System MMR Register Map
************************************************************************************/

#ifndef _DEF_BF52X_H
#define _DEF_BF52X_H

#ifdef _MISRA_RULES
#pragma diag(push)
#pragma diag(suppress:misra_rule_19_4)
#pragma diag(suppress:misra_rule_19_7)
#include "libgloss/bfin/include/stdint.h"
#endif /* _MISRA_RULES */


/* ************************************************************** */
/*   SYSTEM & MMR ADDRESS DEFINITIONS COMMON TO ALL ADSP-BF52x    */
/* ************************************************************** */

/* ==== begin from defBF534.h ==== */

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

#define SIC_IMASK0			0xFFC0010C	/* Interrupt Mask Register					*/
/* legacy register name (below) provided for backwards code compatibility */
#define SIC_IMASK			SIC_IMASK0

#define SIC_IAR0			0xFFC00110	/* Interrupt Assignment Register 0			*/
#define SIC_IAR1			0xFFC00114	/* Interrupt Assignment Register 1			*/
#define SIC_IAR2			0xFFC00118	/* Interrupt Assignment Register 2			*/
#define SIC_IAR3			0xFFC0011C	/* Interrupt Assignment Register 3			*/

#define SIC_ISR0			0xFFC00120	/* Interrupt Status Register				*/
/* legacy register name (below) provided for backwards code compatibility */
#define SIC_ISR				SIC_ISR0

#define SIC_IWR0			0xFFC00124	/* Interrupt Wakeup Register				*/
/* legacy register name (below) provided for backwards code compatibility */
#define SIC_IWR				SIC_IWR0

/* SIC Additions to ADSP-BF52x (0xFFC0014C - 0xFFC00162) */
#define SIC_IMASK1                      0xFFC0014C     /* Interrupt Mask register of SIC2 */
#define SIC_IAR4                        0xFFC00150     /* Interrupt Assignment register4 */
#define SIC_IAR5                        0xFFC00154     /* Interrupt Assignment register5 */
#define SIC_IAR6                        0xFFC00158     /* Interrupt Assignment register6 */
#define SIC_IAR7                        0xFFC0015C     /* Interrupt Assignment register7 */
#define SIC_ISR1                        0xFFC00160     /* Interrupt Statur register */
#define SIC_IWR1                        0xFFC00164     /* Interrupt Wakeup register */


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


/* Omit CAN register sets from the defBF534.h (CAN is not in the ADSP-BF52x processor) */

/* Pin Control Registers	(0xFFC03200 - 0xFFC032FF)											*/
#define PORTF_FER			0xFFC03200	/* Port F Function Enable Register (Alternate/Flag*)	*/
#define PORTG_FER			0xFFC03204	/* Port G Function Enable Register (Alternate/Flag*)	*/
#define PORTH_FER			0xFFC03208	/* Port H Function Enable Register (Alternate/Flag*)	*/


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

/* GPIO PIN mux (0xFFC03210 - OxFFC03288) */
#define PORTF_MUX               0xFFC03210      /* Port F mux control */
#define PORTG_MUX               0xFFC03214      /* Port G mux control */
#define PORTH_MUX               0xFFC03218      /* Port H mux control */
#define PORTF_DRIVE             0xFFC03220      /* Port F drive strength control */
#define PORTG_DRIVE             0xFFC03224      /* Port G drive strength control */
#define PORTH_DRIVE             0xFFC03228      /* Port H drive strength control */
#define PORTF_HYSTERESIS        0xFFC03240      /* Port F Schmitt trigger control */
#define PORTG_HYSTERESIS        0xFFC03244      /* Port G Schmitt trigger control */
#define PORTH_HYSTERESIS        0xFFC03248      /* Port H Schmitt trigger control */
#define NONGPIO_DRIVE           0xFFC03280      /* Drive strength control for non-GPIO pins */
#define NONGPIO_HYSTERESIS      0xFFC03288      /* Schmitt trigger control for non-GPIO pins */

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
/* PLL_CTL Macros (Only Use With Logic OR While Setting Lower Order Bits)			*/
#ifdef _MISRA_RULES
#define	SET_MSEL(x)		(((x)&0x3Fu) << 0x9)	/* Set MSEL = 0-63 --> VCO = CLKIN*MSEL		*/
#else
#define	SET_MSEL(x)		(((x)&0x3F) << 0x9)	/* Set MSEL = 0-63 --> VCO = CLKIN*MSEL		*/
#endif /* _MISRA_RULES */

/* PLL_DIV Masks														*/
#define SSEL			0x000F	/* System Select						*/
#define	CSEL			0x0030	/* Core Select							*/
#define CSEL_DIV1		0x0000	/* 		CCLK = VCO / 1					*/
#define CSEL_DIV2		0x0010	/* 		CCLK = VCO / 2					*/
#define	CSEL_DIV4		0x0020	/* 		CCLK = VCO / 4					*/
#define	CSEL_DIV8		0x0030	/* 		CCLK = VCO / 8					*/
/* PLL_DIV Macros														*/
#ifdef _MISRA_RULES
#define SET_SSEL(x)		((x)&0xFu)		/* Set SSEL = 0-15 --> SCLK = VCO/SSEL	*/
#else
#define SET_SSEL(x)		((x)&0xF)		/* Set SSEL = 0-15 --> SCLK = VCO/SSEL	*/
#endif /* _MISRA_RULES */

/* VR_CTL Masks																	*/
#define	FREQ			0x3000	/* Switching Oscillator Frequency For Regulator	*/
#define	HIBERNATE		0x0000	/* 		Powerdown/Bypass On-Board Regulation	*/

#define	VLEV			0x00F0	/* Internal Voltage Level - Only Program Values Within Specifications */
#define	VLEV_085		0x0040	/*	VLEV = 0.85 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_090		0x0050	/*	VLEV = 0.90 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_095		0x0060	/*	VLEV = 0.95 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_100		0x0070	/*	VLEV = 1.00 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_105		0x0080	/*	VLEV = 1.05 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_110		0x0090	/*	VLEV = 1.10 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_115		0x00A0	/*	VLEV = 1.15 V (See Datasheet for Regulator Tolerance)	*/
#define	VLEV_120		0x00B0	/*	VLEV = 1.20 V (See Datasheet for Regulator Tolerance)	*/

#define	WAKE			0x0100	/* Enable RTC/Reset Wakeup From Hibernate	*/
#define	USBWE			0x0200	/* Enable USB Wakeup From Hibernate			*/
#define	PHYWE			0x0400	/* Enable PHY Wakeup From Hibernate			*/
#define	CLKBUFOE		0x4000	/* CLKIN Buffer Output Enable */
#define	PHYCLKOE		CLKBUFOE	/* Alternative legacy name for the above */
#define	SCKELOW			0x8000	/* Enable Drive CKE Low During Reset		*/

/* PLL_STAT Masks																	*/
#define ACTIVE_PLLENABLED	0x0001	/* Processor In Active Mode With PLL Enabled	*/
#define	FULL_ON				0x0002	/* Processor In Full On Mode					*/
#define ACTIVE_PLLDISABLED	0x0004	/* Processor In Active Mode With PLL Disabled	*/
#define	PLL_LOCKED			0x0020	/* PLL_LOCKCNT Has Been Reached					*/
#define	VSTAT				0x0080	/* Voltage Regulator Status: Regulator at programmed voltage */

/* SWRST Masks																		*/
#define SYSTEM_RESET		0x0007	/* Initiates A System Software Reset			*/
#define	DOUBLE_FAULT		0x0008	/* Core Double Fault Causes Reset				*/
#define RESET_DOUBLE		0x2000	/* SW Reset Generated By Core Double-Fault		*/
#define RESET_WDOG			0x4000	/* SW Reset Generated By Watchdog Timer			*/
#define RESET_SOFTWARE		0x8000	/* SW Reset Occurred Since Last Read Of SWRST	*/

/* SYSCR Masks */

#define BMODE_BYPASS        0x0000  /* Bypass boot ROM, execute from 16-bit external memory */
#define BMODE_FLASH         0x0001  /* Use Boot ROM to load from 8-bit or 16-bit flash */
#define BMODE_SPIMEM        0x0003  /* Boot from serial SPI memory */
#define BMODE_SPIHOST       0x0004  /* Boot from SPI0 host (slave mode) */
#define BMODE_TWIMEM        0x0005  /* Boot from serial TWI memory */
#define BMODE_TWIHOST       0x0006  /* Boot from TWI0 host (slave mode) */
#define BMODE_UART0HOST     0x0007  /* Boot from UART0 host */
#define BMODE_UART1HOST     0x0008  /* Boot from UART1 host */
#define BMODE_SDRAMMEM      0x000A  /* Boot from SDRAM memory (warm boot) */
#define BMODE_OTPMEM        0x000B  /* Boot from OTP memory */
#define BMODE_HOSTDMA_ACK   0x000E  /* Boot from 16-bit host DMA (ACK mode) */
#define BMODE_HOSTDMA_INT   0x000F   /* Boot from 8-bit host DMA (INT mode) */
#define BMODE 0x000F /* Boot Mode. Mirror of BMODE Mode Pins */

#define BCODE 0x00F0
#define BCODE_NORMAL 0x0000 /* normal boot, update PLL/VR, quickboot as by WURESET */
#define BCODE_NOBOOT 0x0010 /* bypass boot, don't update PLL/VR */
#define BCODE_QUICKBOOT 0x0020 /* quick boot, overrule WURESET, don't update PLL/VR */
#define BCODE_ALLBOOT 0x0040 /* no quick boot, overrule WURESET, don't update PLL/VR */
#define BCODE_FULLBOOT 0x0060 /* no quick boot, overrule WURESET, update PLL/VR */

#define DCB1_PRIO 0x0100 /* DCB1 requests are urgent */
#define DCB_ROT_PRIO 0x0200 /* enable rotating DCB priority */
#define DEB1_PRIO 0x0400 /* DEB1 requests are urgent */
#define DEB_ROT_PRIO 0x0800 /* enable rotating DEB priority */

#define WURESET 0x1000 /* wakeup event since last hardware reset */
#define DFRESET 0x2000 /* recent reset was due to a double fault event */
#define WDRESET 0x4000 /* recent reset was due to a watchdog event */
#define SWRESET 0x8000 /* recent reset was issued by software */

/* *************  SYSTEM INTERRUPT CONTROLLER MASKS *************************************/
/* Peripheral Masks For SIC_ISR0, SIC_IWR0, SIC_IMASK0										*/
#define IRQ_PLL_WAKEUP	0x00000001	/* PLL Wakeup Interrupt			 					*/

#define IRQ_DMA_ERR0   0x00000002  /* Error Interrupt (DMA error 0 interrupt (generic)) */
#define IRQ_DMAR0      0x00000004  /* DMAR0 Block (DMAR0 block interrupt) 				*/
#define IRQ_DMAR1      0x00000008  /* DMAR1 Block  (DMAR1 block interrupt) 				*/
#define IRQ_DMAR0_ERR  0x00000010  /* Error Interrupt (DMAR0 overflow error interrupt)  */
#define IRQ_DMAR1_ERR  0x00000020  /* Error Interrupt (DMAR1 overflow error interrupt)  */
#define IRQ_PPI_ERR    0x00000040  /* Error Interrupt (PPI error interrupt) 			*/
#define IRQ_MAC_ERR    0x00000080  /* Error Interrupt (MAC status interrupt) 			*/
#define IRQ_SPORT0_ERR 0x00000100  /* Error Interrupt (SPORT0 status interrupt) 		*/
#define IRQ_SPORT1_ERR 0x00000200  /* Error Interrupt (SPORT1 status interrupt) 		*/
#define IRQ_UART0_ERR  0x00001000  /* Error Interrupt (UART0 status interrupt) 			*/
#define IRQ_UART1_ERR  0x00002000  /* Error Interrupt (UART1 status interrupt) 			*/
#define IRQ_RTC		   0x00004000  /* Real Time Clock Interrupt 						*/
#define IRQ_DMA0	   0x00008000  /* DMA channel 0 (PPI/NFC) Interrupt 				*/
#define IRQ_DMA3	   0x00010000  /* DMA Channel 3 (SPORT0 RX) Interrupt 				*/
#define IRQ_DMA4	   0x00020000  /* DMA Channel 4 (SPORT0 TX) Interrupt 				*/
#define IRQ_DMA5	   0x00040000  /* DMA Channel 5 (SPORT1 RX) Interrupt 				*/
#define IRQ_DMA6	   0x00080000  /* DMA Channel 6 (SPORT1 TX) Interrupt 		 		*/
#define IRQ_TWI		   0x00100000  /* TWI Interrupt										*/
#define IRQ_DMA7	   0x00200000  /* DMA Channel 7 (SPI) Interrupt 					*/
#define IRQ_DMA8	   0x00400000  /* DMA Channel 8 (UART0 RX) Interrupt 				*/
#define IRQ_DMA9	   0x00800000  /* DMA Channel 9 (UART0 TX) Interrupt 				*/
#define IRQ_DMA10	   0x01000000  /* DMA Channel 10 (UART1 RX) Interrupt 				*/
#define IRQ_DMA11	   0x02000000  /* DMA Channel 11 (UART1 TX) Interrupt 				*/
#define IRQ_OTP	   0x04000000  /* OTP Interrupt 									*/
#define IRQ_CNT  	   0x08000000  /* GP Counter Interrupt  							*/
#define IRQ_DMA1	   0x10000000  /* DMA Channel 1 (EthernetRX/HOSTDP) Interrupt		*/
#define IRQ_PFA_PORTH  0x20000000  /* PF Port H Interrupt A 							*/
#define IRQ_DMA2	   0x40000000  /* DMA Channel 2 (Ethernet TX/NFC) Interrupt 		*/
#define IRQ_PFB_PORTH  0x80000000  /* PF Port H  Interrupt B 							*/

/* Peripheral Masks For SIC_ISR1, SIC_IWR1, SIC_IMASK1									*/

#define IRQ_TIMER0		0x00000001	/* Timer 0 Interrupt								*/
#define IRQ_TIMER1		0x00000002	/* Timer 1 Interrupt 								*/
#define IRQ_TIMER2		0x00000004	/* Timer 2 Interrupt 								*/
#define IRQ_TIMER3		0x00000008	/* Timer 3 Interrupt 								*/
#define IRQ_TIMER4		0x00000010	/* Timer 4 Interrupt 								*/
#define IRQ_TIMER5		0x00000020	/* Timer 5 Interrupt 								*/
#define IRQ_TIMER6		0x00000040	/* Timer 6 Interrupt 								*/
#define IRQ_TIMER7		0x00000080	/* Timer 7 Interrupt 								*/
#define IRQ_PFA_PORTG	0x00000100	/* PF Port G Interrupt A 							*/
#define IRQ_PFB_PORTG	0x00000200	/* PF Port G Interrupt B		 					*/
#define IRQ_DMA12		0x00000400	/* DMA Channels 12 (MDMA0 Destination) TX Interrupt	*/
#define IRQ_DMA13		0x00000400	/* DMA Channels 13 (MDMA0 Source) RX Interrupt		*/
#define IRQ_DMA14		0x00000800	/* DMA Channels 14 (MDMA1 Destination) TX Interrupt	*/
#define IRQ_DMA15		0x00000800	/* DMA Channels 15 (MDMA1 Source) RX Interrupt 		*/
#define IRQ_WDOG		0x00001000	/* Software Watchdog Timer Interrupt 				*/
#define IRQ_PFA_PORTF	0x00002000	/* PF Port F Interrupt A		 					*/
#define IRQ_PFB_PORTF	0x00004000	/* PF Port F Interrupt B 							*/
#define IRQ_SPI_ERR     0x00008000  /* Error Interrupt (SPI status interrupt) 			*/
#define IRQ_NAND_ERR	0x00010000	/* NAND error interrupt								*/
#define IRQ_HOSTDP_STATUS	0x00020000	/* HOSTDP status interrupt  */
#define IRQ_HOSTRD_DONE	0x00040000		/* Host Read Done interrupt */
#define IRQ_USB_EINT	0x00080000	/* USB EINT interrupt 								*/
#define IRQ_USB_INT0	0x00100000	/* USB INT0 interrupt 								*/
#define IRQ_USB_INT1	0x00200000	/* USB INT1 interrupt 								*/
#define IRQ_USB_INT2	0x00400000	/* USB INT1 interrupt 								*/
#define IRQ_USB_DMAINT	0x00800000	/* USB DMAINT interrupt								*/

/* Peripheral Masks For SIC_ISR, SIC_IWR, SIC_IMASK */
#define IWR_DISABLE_ALL   0x00000000   /* Wakeup Disable all peripherals */
#define IWR_ENABLE_ALL    0xFFFFFFFF   /* Wakeup Enable all peripherals */
/* x = pos 0 to 31, for 32-63 use value-32 */
#define IWR_ENABLE(x)     (1 << (x))   /* Wakeup Enable Peripheral #x */
#ifdef _MISRA_RULES
#define IWR_DISABLE(x)    (0xFFFFFFFFu^(1<<(x)))/* Wakeup Disable Peripheral #x */
#else
#define IWR_DISABLE(x)    (0xFFFFFFFF^(1<<(x)))/* Wakeup Disable Peripheral #x */
#endif /* _MISRA_RULES */


#ifdef _MISRA_RULES
#define _MF15 0xFu
#define _MF7 7u
#else
#define _MF15 0xF
#define _MF7 7
#endif /* _MISRA_RULES */

/* SIC_IAR0 Macros */
#define P0_IVG(x)       (((x)&_MF15)-_MF7)           /* Peripheral #0 assigned IVG #x    */
#define P1_IVG(x)       ((((x)&_MF15)-_MF7) << 0x4)  /* Peripheral #1 assigned IVG #x    */
#define P2_IVG(x)       ((((x)&_MF15)-_MF7) << 0x8)  /* Peripheral #2 assigned IVG #x    */
#define P3_IVG(x)       ((((x)&_MF15)-_MF7) << 0xC)  /* Peripheral #3 assigned IVG #x    */
#define P4_IVG(x)       ((((x)&_MF15)-_MF7) << 0x10) /* Peripheral #4 assigned IVG #x    */
#define P5_IVG(x)       ((((x)&_MF15)-_MF7) << 0x14) /* Peripheral #5 assigned IVG #x    */
#define P6_IVG(x)       ((((x)&_MF15)-_MF7) << 0x18) /* Peripheral #6 assigned IVG #x    */
#define P7_IVG(x)       ((((x)&_MF15)-_MF7) << 0x1C) /* Peripheral #7 assigned IVG #x    */

/* SIC_IAR1 Macros */
#define P8_IVG(x)       (((x)&_MF15)-_MF7)           /* Peripheral #8 assigned IVG #x    */
#define P9_IVG(x)       ((((x)&_MF15)-_MF7) << 0x4)  /* Peripheral #9 assigned IVG #x    */
#define P10_IVG(x)                                   /* Reserved                         */
#define P11_IVG(x)                                   /* Reserved                         */
#define P12_IVG(x)      ((((x)&_MF15)-_MF7) << 0x10) /* Peripheral #12 assigned IVG #x   */
#define P13_IVG(x)      ((((x)&_MF15)-_MF7) << 0x14) /* Peripheral #13 assigned IVG #x   */
#define P14_IVG(x)      ((((x)&_MF15)-_MF7) << 0x18) /* Peripheral #14 assigned IVG #x   */
#define P15_IVG(x)      ((((x)&_MF15)-_MF7) << 0x1C) /* Peripheral #15 assigned IVG #x   */

/* SIC_IAR2 Macros */
#define P16_IVG(x)      (((x)&_MF15)-_MF7)           /* Peripheral #16 assigned IVG #x   */
#define P17_IVG(x)      ((((x)&_MF15)-_MF7) << 0x4)  /* Peripheral #17 assigned IVG #x   */
#define P18_IVG(x)      ((((x)&_MF15)-_MF7) << 0x8)  /* Peripheral #18 assigned IVG #x   */
#define P19_IVG(x)      ((((x)&_MF15)-_MF7) << 0xC)  /* Peripheral #19 assigned IVG #x   */
#define P20_IVG(x)      ((((x)&_MF15)-_MF7) << 0x10) /* Peripheral #20 assigned IVG #x   */
#define P21_IVG(x)      ((((x)&_MF15)-_MF7) << 0x14) /* Peripheral #21 assigned IVG #x   */
#define P22_IVG(x)      ((((x)&_MF15)-_MF7) << 0x18) /* Peripheral #22 assigned IVG #x   */
#define P23_IVG(x)      ((((x)&_MF15)-_MF7) << 0x1C) /* Peripheral #23 assigned IVG #x   */

/* SIC_IAR3 Macros */
#define P24_IVG(x)      (((x)&_MF15)-_MF7)           /* Peripheral #24 assigned IVG #x   */
#define P25_IVG(x)      ((((x)&_MF15)-_MF7) << 0x4)  /* Peripheral #25 assigned IVG #x   */
#define P26_IVG(x)      ((((x)&_MF15)-_MF7) << 0x8)  /* Peripheral #26 assigned IVG #x   */
#define P27_IVG(x)      ((((x)&_MF15)-_MF7) << 0xC)  /* Peripheral #27 assigned IVG #x   */
#define P28_IVG(x)      ((((x)&_MF15)-_MF7) << 0x10) /* Peripheral #28 assigned IVG #x   */
#define P29_IVG(x)      ((((x)&_MF15)-_MF7) << 0x14) /* Peripheral #29 assigned IVG #x   */
#define P30_IVG(x)      ((((x)&_MF15)-_MF7) << 0x18) /* Peripheral #30 assigned IVG #x   */
#define P31_IVG(x)      ((((x)&_MF15)-_MF7) << 0x1C) /* Peripheral #31 assigned IVG #x   */

/* SIC_IAR4 Macros */
#define P32_IVG(x)      (((x)&_MF15)-_MF7)           /* Peripheral #32 assigned IVG #x   */
#define P33_IVG(x)      ((((x)&_MF15)-_MF7) << 0x4)  /* Peripheral #33 assigned IVG #x   */
#define P34_IVG(x)      ((((x)&_MF15)-_MF7) << 0x8)  /* Peripheral #34 assigned IVG #x   */
#define P35_IVG(x)      ((((x)&_MF15)-_MF7) << 0xC)  /* Peripheral #35 assigned IVG #x   */
#define P36_IVG(x)      ((((x)&_MF15)-_MF7) << 0x10) /* Peripheral #36 assigned IVG #x   */
#define P37_IVG(x)      ((((x)&_MF15)-_MF7) << 0x14) /* Peripheral #37 assigned IVG #x   */
#define P38_IVG(x)      ((((x)&_MF15)-_MF7) << 0x18) /* Peripheral #38 assigned IVG #x   */
#define P39_IVG(x)      ((((x)&_MF15)-_MF7) << 0x1C) /* Peripheral #39 assigned IVG #x   */

/* SIC_IAR5 Macros */
#define P40_IVG(x)      (((x)&_MF15)-_MF7)           /* Peripheral #40 assigned IVG #x   */
#define P41_IVG(x)      ((((x)&_MF15)-_MF7) << 0x4)  /* Peripheral #41 assigned IVG #x   */
#define P42_IVG(x)      ((((x)&_MF15)-_MF7) << 0x8)  /* Peripheral #42 assigned IVG #x   */
#define P43_IVG(x)      ((((x)&_MF15)-_MF7) << 0xC)  /* Peripheral #43 assigned IVG #x   */
#define P44_IVG(x)      ((((x)&_MF15)-_MF7) << 0x10) /* Peripheral #44 assigned IVG #x   */
#define P45_IVG(x)      ((((x)&_MF15)-_MF7) << 0x14) /* Peripheral #45 assigned IVG #x   */
#define P46_IVG(x)      ((((x)&_MF15)-_MF7) << 0x18) /* Peripheral #46 assigned IVG #x   */
#define P47_IVG(x)      ((((x)&_MF15)-_MF7) << 0x1C) /* Peripheral #47 assigned IVG #x   */

/* SIC_IAR6 Macros */
#define P48_IVG(x)      (((x)&_MF15)-_MF7)           /* Peripheral #48 assigned IVG #x   */
#define P49_IVG(x)      ((((x)&_MF15)-_MF7) << 0x4)  /* Peripheral #49 assigned IVG #x   */
#define P50_IVG(x)      ((((x)&_MF15)-_MF7) << 0x8)  /* Peripheral #50 assigned IVG #x   */
#define P51_IVG(x)                                   /* Reserved                         */
#define P52_IVG(x)      ((((x)&_MF15)-_MF7) << 0x10) /* Peripheral #52 assigned IVG #x   */
#define P53_IVG(x)      ((((x)&_MF15)-_MF7) << 0x14) /* Peripheral #53 assigned IVG #x   */
#define P54_IVG(x)      ((((x)&_MF15)-_MF7) << 0x18) /* Peripheral #54 assigned IVG #x   */
#define P55_IVG(x)      ((((x)&_MF15)-_MF7) << 0x1C) /* Peripheral #55 assigned IVG #x   */

/* SIC_IAR7 Macros */
#define P56_IVG(x)                                   /* Reserved                         */
#define P57_IVG(x)                                   /* Reserved                         */
#define P58_IVG(x)                                   /* Reserved                         */
#define P59_IVG(x)                                   /* Reserved                         */
#define P60_IVG(x)                                   /* Reserved                         */
#define P61_IVG(x)                                   /* Reserved                         */
#define P62_IVG(x)                                   /* Reserved                         */
#define P63_IVG(x)                                   /* Reserved                         */


/* SIC_IMASK0 Masks*/
#define SIC_UNMASK0_ALL 0x00000000        /* Unmask all peripheral interrupts */
#define SIC_MASK0_ALL   0xFFFFF3FF        /* Mask all peripheral interrupts   */
#ifdef _MISRA_RULES
#define SIC_MASK0(x) ((int32_t)1 << ((x)&0x1Fu))  /* Mask Peripheral #x interrupt  */
#define SIC_UNMASK0(x)  (0xFFFFFFFFu ^ ((uint32_t)1 << ((x)&0x1Fu)))  /*Unmask Peripheral #x interrupt*/
#else
#define SIC_MASK0(x) (1 << ((x)&0x1F))  /* Mask Peripheral #x interrupt  */
#define SIC_UNMASK0(x)  (0xFFFFFFFF ^ (1 << ((x)&0x1F)))  /* Unmask Peripheral #x interrupt */
#endif /* _MISRA_RULES */

/* SIC_IMASK1 Masks*/
#define SIC_UNMASK1_ALL 0x00000000        /* Unmask all peripheral interrupts */
#define SIC_MASK1_ALL   0xFFFFFF          /* Mask all peripheral interrupts   */
#ifdef _MISRA_RULES
#define SIC_MASK1(x) ((int32_t)1 << ((x)&0x1Fu))  /* Mask Peripheral #x interrupt  */
#define SIC_UNMASK1(x)  (0xFFFFFFFFu ^ ((uint32_t)1 << ((x)&0x1Fu)))  /*Unmask Peripheral #x interrupt*/
#else
#define SIC_MASK1(x) (1 << ((x)&0x1F))  /* Mask Peripheral #x interrupt  */
#define SIC_UNMASK1(x)  (0xFFFFFFFF ^ (1 << ((x)&0x1F)))  /* Unmask Peripheral #x interrupt */
#endif /* _MISRA_RULES */


/* SIC_IWR0 Masks*/
#define IWR0_DISABLE_ALL 0x00000000       /* Wakeup Disable all peripherals   */
#define IWR0_ENABLE_ALL  0xFFFFF3FF       /* Wakeup Enable all peripherals    */
#ifdef _MISRA_RULES
#define IWR0_ENABLE(x)   ((int32_t)1 << ((x)&0x1Fu))  /* Wakeup Enable Peripheral #x   */
#define IWR0_DISABLE(x)  (0xFFFFFFFFu ^ ((uint32_t)1 << ((x)&0x1Fu)))  /*Wakeup Disable Peripheral #x */
#else
#define IWR0_ENABLE(x)   (1 << ((x)&0x1F))  /* Wakeup Enable Peripheral #x   */
#define IWR0_DISABLE(x)  (0xFFFFFFFF ^ (1 << ((x)&0x1F)))  /* Wakeup Disable Peripheral #x  */
#endif /* _MISRA_RULES */

/* SIC_IWR1 Masks*/
#define IWR1_DISABLE_ALL 0x00000000       /* Wakeup Disable all peripherals   */
#define IWR1_ENABLE_ALL  0xFFFFFF         /* Wakeup Enable all peripherals    */
#ifdef _MISRA_RULES
#define IWR1_ENABLE(x)   ((int32_t)1 << ((x)&0x1Fu))  /* Wakeup Enable Peripheral #x   */
#define IWR1_DISABLE(x)  (0xFFFFFFFFu ^ ((uint32_t)1 << ((x)&0x1Fu)))  /* Wakeup Disable Peripheral #x*/
#else
#define IWR1_ENABLE(x)   (1 << ((x)&0x1F))  /* Wakeup Enable Peripheral #x   */
#define IWR1_DISABLE(x)  (0xFFFFFFFF ^ (1 << ((x)&0x1F)))/* Wakeup Disable Peripheral #x  */
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
#define TMR_DIS WDDIS
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
#define UARTDLL   0x00FF   /* Divisor Latch Low Byte */
#define UARTDLH   0xFF00   /* Divisor Latch High Byte */


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
#define AMBEN           0x000e      /* Async bank enable                                */
#define	AMBEN_NONE		0x0000		/* All Banks Disabled								*/
#define AMBEN_B0		0x0002		/* Enable Async Memory Bank 0 only					*/
#define AMBEN_B0_B1		0x0004		/* Enable Async Memory Banks 0 & 1 only				*/
#define AMBEN_B0_B1_B2	0x0006		/* Enable Async Memory Banks 0, 1, and 2			*/
#define AMBEN_ALL		0x0008		/* Enable Async Memory Banks (all) 0, 1, 2, and 3	*/
#define CDPRIO                  0x0100        /* DMA has priority over core for for external accesses */

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
/* EBIU_SDGCTL Masks */
#define CL           0x0000000C  /* SDRAM CAS latency */
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
#define EBSZ         0x0006       /* SDRAM external bank size */
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
/* previous versions of defBF532.h erroneously included DMA32 (PPI 32-bit DMA Enable) */
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
#define LT_ERR_OVR	0x0100		/* Line Track Overflow Error	*/
#define LT_ERR_UNDR	0x0200		/* Line Track Underflow Error	*/
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


/* Omit CAN masks from defBF534.h */

/*  *******************  PIN CONTROL REGISTER MASKS  ************************/
/* PORT_MUX deleted in VisualDSP++ 5.0 Update 3 */


/*  ******************  HANDSHAKE DMA (HMDMA) MASKS  *********************/
/* HMDMAx_CTL Masks														*/
#define	HMDMAEN		0x0001	/* Enable Handshake DMA 0/1					*/
#define	REP			0x0002	/* HMDMA Request Polarity					*/
#define	UTE			0x0004	/* Urgency Threshold Enable					*/
#define	OIE			0x0010	/* Overflow Interrupt Enable				*/
#define	BDIE		0x0020	/* Block Done Interrupt Enable				*/
#define	MBDI		0x0040	/* Mask Block Done IRQ If Pending ECNT		*/
#define	DRQ			0x0300	/* HMDMA Request Type						*/
#define	DRQ_NONE	0x0000	/* 		No Request							*/
#define	DRQ_SINGLE	0x0100	/* 		Channels Request Single				*/
#define	DRQ_MULTI	0x0200	/* 		Channels Request Multi (Default)	*/
#define	DRQ_URGENT	0x0300	/* 		Channels Request Multi Urgent		*/
#define	RBC			0x1000	/* Reload BCNT With IBCNT					*/
#define	PS			0x2000	/* HMDMA Pin Status							*/
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
#define	CKELOW		SCKELOW

/* ==== end from defBF534.h ==== */

/* HOST Port Registers */

#define                     HOST_CONTROL  0xffc03400   /* HOSTDP Control Register */
#define                      HOST_STATUS  0xffc03404   /* HOSTDP Status Register */
#define                     HOST_TIMEOUT  0xffc03408   /* HOSTDP Acknowledge Mode Timeout Register */

/* Counter Registers */

#define                       CNT_CONFIG  0xffc03500   /* Configuration Register */
#define                        CNT_IMASK  0xffc03504   /* Interrupt Mask Register */
#define                       CNT_STATUS  0xffc03508   /* Status Register */
#define                      CNT_COMMAND  0xffc0350c   /* Command Register */
#define                     CNT_DEBOUNCE  0xffc03510   /* Debounce Register */
#define                      CNT_COUNTER  0xffc03514   /* Counter Register */
#define                          CNT_MAX  0xffc03518   /* Maximal Count Register */
#define                          CNT_MIN  0xffc0351c   /* Minimal Count Register */

/* OTP/FUSE Registers */

#define                      OTP_CONTROL  0xffc03600   /* OTP/Fuse Control Register */
#define                          OTP_BEN  0xffc03604   /* OTP/Fuse Byte Enable */
#define                       OTP_STATUS  0xffc03608   /* OTP/Fuse Status */
#define                       OTP_TIMING  0xffc0360c   /* OTP/Fuse Access Timing */

/* Security Registers */

#define                    SECURE_SYSSWT  0xffc03620   /* Secure System Switches */
#define                   SECURE_CONTROL  0xffc03624   /* Secure Control */
#define                    SECURE_STATUS  0xffc03628   /* Secure Status */

/* OTP Read/Write Data Buffer Registers */

#define                        OTP_DATA0  0xffc03680   /* OTP/Fuse Data (OTP_DATA0-3) accesses the fuse read write buffer */
#define                        OTP_DATA1  0xffc03684   /* OTP/Fuse Data (OTP_DATA0-3) accesses the fuse read write buffer */
#define                        OTP_DATA2  0xffc03688   /* OTP/Fuse Data (OTP_DATA0-3) accesses the fuse read write buffer */
#define                        OTP_DATA3  0xffc0368c   /* OTP/Fuse Data (OTP_DATA0-3) accesses the fuse read write buffer */

/* NFC Registers */

#define                          NFC_CTL  0xffc03700   /* NAND Control Register */
#define                         NFC_STAT  0xffc03704   /* NAND Status Register */
#define                      NFC_IRQSTAT  0xffc03708   /* NAND Interrupt Status Register */
#define                      NFC_IRQMASK  0xffc0370c   /* NAND Interrupt Mask Register */
#define                         NFC_ECC0  0xffc03710   /* NAND ECC Register 0 */
#define                         NFC_ECC1  0xffc03714   /* NAND ECC Register 1 */
#define                         NFC_ECC2  0xffc03718   /* NAND ECC Register 2 */
#define                         NFC_ECC3  0xffc0371c   /* NAND ECC Register 3 */
#define                        NFC_COUNT  0xffc03720   /* NAND ECC Count Register */
#define                          NFC_RST  0xffc03724   /* NAND ECC Reset Register */
#define                        NFC_PGCTL  0xffc03728   /* NAND Page Control Register */
#define                         NFC_READ  0xffc0372c   /* NAND Read Data Register */
#define                         NFC_ADDR  0xffc03740   /* NAND Address Register */
#define                          NFC_CMD  0xffc03744   /* NAND Command Register */
#define                      NFC_DATA_WR  0xffc03748   /* NAND Data Write Register */
#define                      NFC_DATA_RD  0xffc0374c   /* NAND Data Read Register */

/* ********************************************************** */
/*     SINGLE BIT MACRO PAIRS (bit mask and negated one)      */
/*     and MULTI BIT READ MACROS                              */
/* ********************************************************** */

/* Bit masks for HOST_CONTROL */

#define                 HOSTDP_EN  0x1        /* HOSTDP Enable */
#define                nHOSTDP_EN  0x0
#define                HOSTDP_END  0x2        /* Host Endianess */
#define               nHOSTDP_END  0x0
#define          HOSTDP_DATA_SIZE  0x4        /* Data Size */
#define         nHOSTDP_DATA_SIZE  0x0
#define                HOSTDP_RST  0x8        /* HOSTDP Reset */
#define               nHOSTDP_RST  0x0
#define                  HRDY_OVR  0x20       /* HRDY Override */
#define                 nHRDY_OVR  0x0
#define                  INT_MODE  0x40       /* Interrupt Mode */
#define                 nINT_MODE  0x0
#define                     BT_EN  0x80       /* Bus Timeout Enable */
#define                    nBT_EN  0x0
#define                       EHW  0x100      /* Enable Host Write */
#define                      nEHW  0x0
#define                       EHR  0x200      /* Enable Host Read */
#define                      nEHR  0x0
#define                       BDR  0x400      /* Burst DMA Requests */
#define                      nBDR  0x0

/* Bit masks for HOST_STATUS */

#define                   DMA_RDY  0x1        /* DMA Ready */
#define                  nDMA_RDY  0x0
#define                  FIFOFULL  0x2        /* FIFO Full */
#define                 nFIFOFULL  0x0
#define                 FIFOEMPTY  0x4        /* FIFO Empty */
#define                nFIFOEMPTY  0x0
#define                 DMA_CMPLT  0x8        /* DMA Complete */
#define                nDMA_CMPLT  0x0
#define                      HSHK  0x10       /* Host Handshake */
#define                     nHSHK  0x0
#define               HOSTDP_TOUT  0x20       /* HOSTDP Timeout */
#define              nHOSTDP_TOUT  0x0
#define                      HIRQ  0x40       /* Host Interrupt Request */
#define                     nHIRQ  0x0
#define                ALLOW_CNFG  0x80       /* Allow New Configuration */
#define               nALLOW_CNFG  0x0
#define                   DMA_DIR  0x100      /* DMA Direction */
#define                  nDMA_DIR  0x0
#define                       BTE  0x200      /* Bus Timeout Enabled */
#define                      nBTE  0x0
#define               HOSTRD_DONE  0x8000     /* Host Read Completion Interrupt */
#define              nHOSTRD_DONE  0x0

/* Bit masks for HOST_TIMEOUT */

#define             COUNT_TIMEOUT  0x7ff      /* Host Timeout count */

/* Bit masks for CNT_CONFIG */

#define                      CNTE  0x1        /* Counter Enable */
#define                     nCNTE  0x0
#define                      DEBE  0x2        /* Debounce Enable */
#define                     nDEBE  0x0
#define                    CDGINV  0x10       /* CDG Pin Polarity Invert */
#define                   nCDGINV  0x0
#define                    CUDINV  0x20       /* CUD Pin Polarity Invert */
#define                   nCUDINV  0x0
#define                    CZMINV  0x40       /* CZM Pin Polarity Invert */
#define                   nCZMINV  0x0
#define                   CNTMODE  0x700      /* Counter Operating Mode */
#define                      ZMZC  0x800      /* CZM Zeroes Counter Enable */
#define                     nZMZC  0x0
#define                   BNDMODE  0x3000     /* Boundary register Mode */
#define                    INPDIS  0x8000     /* CUG and CDG Input Disable */
#define                   nINPDIS  0x0

/* Bit masks for CNT_IMASK */

#define                      ICIE  0x1        /* Illegal Gray/Binary Code Interrupt Enable */
#define                     nICIE  0x0
#define                      UCIE  0x2        /* Up count Interrupt Enable */
#define                     nUCIE  0x0
#define                      DCIE  0x4        /* Down count Interrupt Enable */
#define                     nDCIE  0x0
#define                    MINCIE  0x8        /* Min Count Interrupt Enable */
#define                   nMINCIE  0x0
#define                    MAXCIE  0x10       /* Max Count Interrupt Enable */
#define                   nMAXCIE  0x0
#define                   COV31IE  0x20       /* Bit 31 Overflow Interrupt Enable */
#define                  nCOV31IE  0x0
#define                   COV15IE  0x40       /* Bit 15 Overflow Interrupt Enable */
#define                  nCOV15IE  0x0
#define                   CZEROIE  0x80       /* Count to Zero Interrupt Enable */
#define                  nCZEROIE  0x0
#define                     CZMIE  0x100      /* CZM Pin Interrupt Enable */
#define                    nCZMIE  0x0
#define                    CZMEIE  0x200      /* CZM Error Interrupt Enable */
#define                   nCZMEIE  0x0
#define                    CZMZIE  0x400      /* CZM Zeroes Counter Interrupt Enable */
#define                   nCZMZIE  0x0

/* Bit masks for CNT_STATUS */

#define                      ICII  0x1        /* Illegal Gray/Binary Code Interrupt Identifier */
#define                     nICII  0x0
#define                      UCII  0x2        /* Up count Interrupt Identifier */
#define                     nUCII  0x0
#define                      DCII  0x4        /* Down count Interrupt Identifier */
#define                     nDCII  0x0
#define                    MINCII  0x8        /* Min Count Interrupt Identifier */
#define                   nMINCII  0x0
#define                    MAXCII  0x10       /* Max Count Interrupt Identifier */
#define                   nMAXCII  0x0
#define                   COV31II  0x20       /* Bit 31 Overflow Interrupt Identifier */
#define                  nCOV31II  0x0
#define                   COV15II  0x40       /* Bit 15 Overflow Interrupt Identifier */
#define                  nCOV15II  0x0
#define                   CZEROII  0x80       /* Count to Zero Interrupt Identifier */
#define                  nCZEROII  0x0
#define                     CZMII  0x100      /* CZM Pin Interrupt Identifier */
#define                    nCZMII  0x0
#define                    CZMEII  0x200      /* CZM Error Interrupt Identifier */
#define                   nCZMEII  0x0
#define                    CZMZII  0x400      /* CZM Zeroes Counter Interrupt Identifier */
#define                   nCZMZII  0x0

/* Bit masks for CNT_COMMAND */

#define                    W1LCNT  0xf        /* Load Counter Register */
#define                    W1LMIN  0xf0       /* Load Min Register */
#define                    W1LMAX  0xf00      /* Load Max Register */
#define                  W1ZMONCE  0x1000     /* Enable CZM Clear Counter Once */
#define                 nW1ZMONCE  0x0

/* Bit masks for CNT_DEBOUNCE */

#define                 DPRESCALE  0xf        /* Load Counter Register */

/* Bit masks for SECURE_SYSSWT */

#define                   EMUDABL  0x1        /* Emulation Disable. */
#define                  nEMUDABL  0x0
#define                   RSTDABL  0x2        /* Reset Disable */
#define                  nRSTDABL  0x0
#define                   L1IDABL  0x1c       /* L1 Instruction Memory Disable. */
#define                  L1DADABL  0xe0       /* L1 Data Bank A Memory Disable. */
#define                  L1DBDABL  0x700      /* L1 Data Bank B Memory Disable. */
#define                   DMA0OVR  0x800      /* DMA0 Memory Access Override */
#define                  nDMA0OVR  0x0
#define                   DMA1OVR  0x1000     /* DMA1 Memory Access Override */
#define                  nDMA1OVR  0x0
#define                    EMUOVR  0x4000     /* Emulation Override */
#define                   nEMUOVR  0x0
#define                    OTPSEN  0x8000     /* OTP Secrets Enable. */
#define                   nOTPSEN  0x0

/* Bit masks for SECURE_CONTROL */

#define                   SECURE0  0x1        /* SECURE 0 */
#define                  nSECURE0  0x0
#define                   SECURE1  0x2        /* SECURE 1 */
#define                  nSECURE1  0x0
#define                   SECURE2  0x4        /* SECURE 2 */
#define                  nSECURE2  0x0
#define                   SECURE3  0x8        /* SECURE 3 */
#define                  nSECURE3  0x0

/* Bit masks for SECURE_STATUS */

#define                   SECMODE  0x3        /* Secured Mode Control State */
#define                       NMI  0x4        /* Non Maskable Interrupt */
#define                      nNMI  0x0
#define                   AFVALID  0x8        /* Authentication Firmware Valid */
#define                  nAFVALID  0x0
#define                    AFEXIT  0x10       /* Authentication Firmware Exit */
#define                   nAFEXIT  0x0
#define                   SECSTAT  0xe0       /* Secure Status */

/* Bit masks for NFC_CTL */

#define                    WR_DLY  0xf        /* Write Strobe Delay */
#define                    RD_DLY  0xf0       /* Read Strobe Delay */
#define                   PG_SIZE  0x200      /* Page Size */
#define                  nPG_SIZE  0x0

/* Bit masks for NFC_STAT */

#define                     NBUSY  0x1        /* Not Busy */
#define                    nNBUSY  0x0
#define                   WB_FULL  0x2        /* Write Buffer Full */
#define                  nWB_FULL  0x0
#define                PG_WR_STAT  0x4        /* Page Write Pending */
#define               nPG_WR_STAT  0x0
#define                PG_RD_STAT  0x8        /* Page Read Pending */
#define               nPG_RD_STAT  0x0
#define                  WB_EMPTY  0x10       /* Write Buffer Empty */
#define                 nWB_EMPTY  0x0

/* Bit masks for NFC_IRQSTAT */

#define                  NBUSYIRQ  0x1        /* Not Busy IRQ */
#define                 nNBUSYIRQ  0x0
#define                    WB_OVF  0x2        /* Write Buffer Overflow */
#define                   nWB_OVF  0x0
#define                   WB_EDGE  0x4        /* Write Buffer Edge Detect */
#define                  nWB_EDGE  0x0
#define                    RD_RDY  0x8        /* Read Data Ready */
#define                   nRD_RDY  0x0
#define                   WR_DONE  0x10       /* Page Write Done */
#define                  nWR_DONE  0x0

/* Bit masks for NFC_IRQMASK */

#define              MASK_BUSYIRQ  0x1        /* Mask Not Busy IRQ */
#define             nMASK_BUSYIRQ  0x0
#define                MASK_WBOVF  0x2        /* Mask Write Buffer Overflow */
#define               nMASK_WBOVF  0x0
#define               MASK_WBEDGE  0x4        /* Mask Write Buffer Edge Detect */
#define              nMASK_WBEDGE  0x0
#define                MASK_RDRDY  0x8        /* Mask Read Data Ready */
#define               nMASK_RDRDY  0x0
#define               MASK_WRDONE  0x10       /* Mask Write Done */
#define              nMASK_WRDONE  0x0

/* Bit masks for NFC_RST */

#define                   ECC_RST  0x1        /* ECC (and NFC counters) Reset */
#define                  nECC_RST  0x0

/* Bit masks for NFC_PGCTL */

#define               PG_RD_START  0x1        /* Page Read Start */
#define              nPG_RD_START  0x0
#define               PG_WR_START  0x2        /* Page Write Start */
#define              nPG_WR_START  0x0

/* Bit masks for NFC_ECC0 */

#define                      ECC0  0x7ff      /* Parity Calculation Result0 */

/* Bit masks for NFC_ECC1 */

#define                      ECC1  0x7ff      /* Parity Calculation Result1 */

/* Bit masks for NFC_ECC2 */

#define                      ECC2  0x7ff      /* Parity Calculation Result2 */

/* Bit masks for NFC_ECC3 */

#define                      ECC3  0x7ff      /* Parity Calculation Result3 */

/* Bit masks for NFC_COUNT */

#define                    ECCCNT  0x3ff      /* Transfer Count */

#ifdef _MISRA_RULES
#pragma diag(pop)
#endif /* _MISRA_RULES */

#endif /* _DEF_BF52X_H */
