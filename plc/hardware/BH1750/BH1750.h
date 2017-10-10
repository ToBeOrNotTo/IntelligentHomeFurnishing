#ifndef __BH1750_H
#define __BH1750_H

#include "stm32f10x_map.h"
/*******************************
函数名：BH1750_Init
函数功能：初始化BH1750
函数返回值：成功返回0
*******************************/
void BH1750_Init(void);

/*******************************
函数名：BH1750_Measure
函数功能：获取一次BH1750的测量值
函数返回值：成功返回0
注意：每次读取光照强度数据至少要间隔120ms
			在高精度模式下传感器转换一次数据需要至少120ms时间
*******************************/
unsigned char BH1750_Measure(float* Result);
/*******************************
函数名：BH1750_Measure
函数功能：获取一次BH1750的原始测量值
函数返回值：成功返回0
注意：每次读取光照强度数据至少要间隔120ms
			在高精度模式下传感器转换一次数据需要至少120ms时间
*******************************/
unsigned char BH1750_Original_Measure(u16* Result);




#endif
