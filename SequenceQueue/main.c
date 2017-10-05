#include <stdio.h>
#include <stdlib.h>
#include "SequenceQueue.h"

int main()
{
    int N, i, num;
    printf("请输入队列的大小：\n");
    scanf("%d", &N);
    Queue Q = initQueue(N);
    for (i = 0; i < 2; i++)
    {
        scanf("%d", &num);
        enQueue(Q, num);
    }
    printf("出队的元素是：%d\n", deQueue(Q));

    return 0;
}
