#include "ringbuff.h"

RingBuff_t ringBuff; //创建一个ringBuff的缓冲区

int main()
{

    uint8_t rxdata;
    RingBuff_Init(&ringBuff);
    while (1)
    {

        Read_RingBuff(&ringBuff, rxdata);
        delay(1000);
    }
}

void USART1_IRQHandler(void)
{
    if (USART_GetITStatus(USART1, USART_IT_RXNE) != RESET)
    {
        USART_ClearITPendingBit(USART1, USART_IT_RXNE);
        Write_RingBuff(&ringBuff, USART_ReceiveData(USART1)); //将串口读取到的数据放入环形缓冲区
    }
}
