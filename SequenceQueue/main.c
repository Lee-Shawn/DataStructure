#include <stdio.h>
#include <stdlib.h>
#include "SequenceQueue.h"

int main()
{
    int N, i, num;
    printf("��������еĴ�С��\n");
    scanf("%d", &N);
    Queue Q = initQueue(N);
    for (i = 0; i < 2; i++)
    {
        scanf("%d", &num);
        enQueue(Q, num);
    }
    printf("���ӵ�Ԫ���ǣ�%d\n", deQueue(Q));

    return 0;
}
