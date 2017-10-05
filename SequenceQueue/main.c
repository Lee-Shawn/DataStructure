#include <stdio.h>
#include <stdlib.h>
#include "SequenceQueue.h"

int main()
{
    int N, i, num;
    scanf("%d", &N);
    Queue Q = initQueue(N);
    for (i = 0; i < ; i++)
    {
        scanf("%d", &num);
        enQueue(Q, num);
    }
    printf("出队的元素是：%d", deQueue(Q));
    return 0;
}
