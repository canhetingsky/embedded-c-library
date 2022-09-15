#include "ringbuff.h"

/**
 * @brief  RingBuff_Init
 * @param  RingBuff_t* handle
 * @return void
 * @note   初始化环形缓冲区
 */
void RingBuff_Init(RingBuff_t *handle)
{
    //初始化相关信息
    handle.Head = 0;
    handle.Tail = 0;
    handle.Lenght = 0;
}

/**
 * @brief  Write_RingBuff
 * @param  RingBuff_t* handle 数据写入缓冲区的地址
 * @param  uint8_t data  待写入的数据
 * @return FLASE:环形缓冲区已满，写入失败;TRUE:写入成功
 * @note   往环形缓冲区写入uint8_t类型的数据
 */
uint8_t Write_RingBuff(RingBuff_t *handle, uint8_t data)
{
    if (handle.Lenght >= RINGBUFF_LEN) //判断缓冲区是否已满
    {
        return FLASE;
    }
    handle.Ring_Buff[handle.Tail] = data;
    //  handle.Tail++;
    handle.Tail = (handle.Tail + 1) % RINGBUFF_LEN; //防止越界非法访问
    handle.Lenght++;
    return TRUE;
}

/**
 * @brief  Read_RingBuff
 * @param  RingBuff_t* handle 读取缓冲区的地址
 * @param  uint8_t data，用于保存读取的数据
 * @return FLASE:环形缓冲区没有数据，读取失败;TRUE:读取成功
 * @note   从环形缓冲区读取一个uint8_t类型的数据
 */
uint8_t Read_RingBuff(RingBuff_t *handle, uint8_t data)
{
    if (handle.Lenght == 0) //判断非空
    {
        return FLASE;
    }
    data = handle.Ring_Buff[handle.Head]; //先进先出FIFO，从缓冲区头出
    // handle.Head++;
    handle.Head = (handle.Head + 1) % RINGBUFF_LEN; //防止越界非法访问
    handle.Lenght--;
    return TRUE;
}
