#include <stdio.h>
#include <stdlib.h>
#include "SequenceQueue.h"

int main()
{
    Queue Q = initQueue(5);
    enQueue(Q, 66);
    enQueue(Q, 88);
    printf("���ӵ�Ԫ���ǣ�%d", deQueue(Q));
    return 0;
}
