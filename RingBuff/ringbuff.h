#ifndef __RINGBUFF_H
#define __RINGBUFF_H

#define RINGBUFF_LEN 200 //定义环形缓冲区长度 200
#define FLASE 1
#define TRUE 0

typedef struct
{
    uint16_t Head;
    uint16_t Tail;
    uint16_t Lenght;
    uint8_t Ring_Buff[RINGBUFF_LEN];
} RingBuff_t;

void RingBuff_Init(RingBuff_t *handle);
uint8_t Write_RingBuff(RingBuff_t *handle, uint8_t data);
uint8_t Read_RingBuff(RingBuff_t *handle, uint8_t data);

#endif
