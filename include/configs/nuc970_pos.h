/*
 * nuc970_pos.h
 *
 *  Created on: Nov 19, 2018
 *      Author: root
 */

#ifndef INCLUDE_CONFIGS_NUC970_POS_H_
#define INCLUDE_CONFIGS_NUC970_POS_H_

#define CONFIG_ENV_SIZE         		0x10000
#define CONFIG_SYS_LOAD_ADDR            0x8000 /* download u-boot into sdram addres, this is a default value */
#define CONFIG_SYS_MALLOC_LEN			(1024*1024)
#define CONFIG_SYS_INIT_SP_ADDR 		0xBC008000 /* internal sram 3c008000?? */

/*#define CONFIG_ENV_IS_IN_SPI_FLASH*/
#define CONFIG_ENV_OFFSET       		0x80000
#define CONFIG_ENV_SECT_SIZE   	 		0x10000


#endif /* INCLUDE_CONFIGS_NUC970_POS_H_ */
