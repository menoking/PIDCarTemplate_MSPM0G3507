#include "delay.h"

//系统的延时函数（较稳定）
void delay_ms(uint32_t ms)
{
	delay_cycles(ms*(CPUCLK_FREQ/1000)); //32000 如果为 32Mhz
}
void delay_us(uint32_t us)
{
	delay_cycles(us*(CPUCLK_FREQ/1000000)); //32 如果为 32Mhz
}


