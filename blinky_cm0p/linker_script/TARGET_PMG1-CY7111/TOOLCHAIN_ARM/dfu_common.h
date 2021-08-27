/*******************************************************************************
* \file dfu_common.h
* \version 4.10
*
* This file provides project configuration macro definitions. They are used
* in the scatter files and source code files.
*
********************************************************************************
* \copyright
* Copyright 2019-2021, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef DFU_MDK_COMMON_H_
#define DFU_MDK_COMMON_H_

/* Expand expression to the string */
#define CY_STR_EXPAND(foo)  #foo
#define CY_STR(foo)         CY_STR_EXPAND(foo)


/* DFU SDK parameters */
/* The user application may either update them or leave the defaults if they fit */
#define CY_BOOT_METADATA_ADDR       0x0001FA00
#define CY_BOOT_METADATA_LENGTH     0x00000100
#define CY_PRODUCT_ID               0x01020304
#define CY_CHECKSUM_TYPE            0

/*
* The size of the section .cy_app_signature.
* 1, 2 or 4 for a checksum
* CRC-32 size: 4 bytes
* SHA1 size:   20 byte
* SHA256 size: 32 byte
* RSASSA-PKCS1-v1.5 with the 2048 bit RSA key: 256 bytes
*
* SHA1 must be used.
*/
#define CY_BOOT_SIGNATURE_SIZE      4

/* Application ranges in RAM */

#define CY_APP0_RAM_ADDR            0x20000000
#define CY_APP0_RAM_LENGTH          0x00003000

#define CY_APP1_RAM_ADDR            0x20000000
#define CY_APP1_RAM_LENGTH          0x00003000

/* Memory region ranges per applications */

#define CY_APP0_FLASH_ADDR          0x00000000
#define CY_APP0_FLASH_LENGTH        0x00007000

#define CY_APP1_FLASH_ADDR          0x00007000
#define CY_APP1_FLASH_LENGTH        0x00018000

/* DFU SDK metadata address range in flash */
#define CY_BOOT_META_FLASH_ADDR     0x0001FA00
#define CY_BOOT_META_FLASH_LENGTH   0x00000400

#endif /* DFU_MDK_COMMON_H_ */


/* [] END OF FILE */
