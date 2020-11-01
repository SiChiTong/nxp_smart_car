#ifndef __LQ_CCD_H
#define __LQ_CCD_H

/*------------------------------------------------------------------------------------------------------
【函    数】CCD_Init
【功    能】初始化CCD
【参    数】无
【返 回 值】无
【实    例】CCD_Init(); 
【注意事项】
--------------------------------------------------------------------------------------------------------*/
void CCD_Init(void);


/*------------------------------------------------------------------------------------------------------
【函    数】CCD_Collect
【功    能】CCD采集函数
【参    数】p  ：  存放采集数据的首地址
【返 回 值】无
【实    例】uint16_t ccd_buf[128];
【实    例】CCD_Collect(ccd_buf); 
【注意事项】
--------------------------------------------------------------------------------------------------------*/
void CCD_Collect(uint16_t *p);

#endif