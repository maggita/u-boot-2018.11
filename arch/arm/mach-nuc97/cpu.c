/*
 * cpu.c
 *
 *  Created on: Nov 20, 2018
 *      Author: root
 */
#include <asm/io.h>
#include <common.h>
#include <asm/arch/nuc97_reg.h>

void reset_cpu(ulong addr) {
	/* UnlockReg */
	while (readl(REG_REGWPCTL) != 1) {
		writel(0x59, REG_REGWPCTL);
		writel(0x16, REG_REGWPCTL);
		writel(0x88, REG_REGWPCTL);
	}

	/* system reset */
	writel(1, REG_AHBIPRESET);
}

int print_cpuinfo(void) {
	return 0;
}


