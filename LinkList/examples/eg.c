#include "linklist.h"

LinkList *linklist;
Node *node;
int key, last_key;
int lx, ly;
int max_per = 100; //检测周期

int main(int argc, char const *argv[])
{
    list_init(linklist);

    while (1)
    {
        switch (key)
        {
        case 1:
            // lx,ly from remote control
            break;
        case 2:
            if (last_key == 1)
            {
                node = linklist->head;
            }
            // lx,ly from linklist
            break;

        default:
            break;
        }
        last_key = key;
    }

    return 0;
}

void HAL_SYSTICK_Callback(void)
{
    static int time_tick = 0;
    time_tick++;
    if (time_tick == max_per)
    {
        time_tick = 0;
        switch (key)
        {
        case 1:
            list_append(linklist, lx, ly);
            break;
        case 2:
            if (node != NULL)
            {
                lx = node->lx;
                ly = node->ly;
                node = node->next;
            }
            else
            {
                lx = 0;
                ly = 0;
            }
            break;

        default:
            break;
        }
    }
}
