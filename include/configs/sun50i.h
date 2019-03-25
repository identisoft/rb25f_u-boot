/*
 * Configuration settings for the Allwinner A64 (sun50i) CPU
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_H
#define __CONFIG_H

/*#ifdef CONFIG_BOOTDELAY
	#undef CONFIG_BOOTDELAY
#endif
#define CONFIG_BOOTDELAY 1*/

#ifdef CONFIG_ENV_OFFSET
	#undef CONFIG_ENV_OFFSET
#endif
#define CONFIG_ENV_OFFSET		0xFF000
#define CONFIG_CMD_EXT4_WRITE

/*
 * A64 specific configuration
 */

#ifdef CONFIG_USB_EHCI_HCD
#define CONFIG_USB_EHCI_SUNXI
#define CONFIG_USB_MAX_CONTROLLER_COUNT 1
#endif

#define CONFIG_SUNXI_USB_PHYS	1

#define GICD_BASE		0x1c81000
#define GICC_BASE		0x1c82000

/*
 * Include common sunxi configuration where most the settings are
 */
#include <configs/sunxi-common.h>

#endif /* __CONFIG_H */
