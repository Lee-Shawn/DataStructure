#include <stdio.h>
#include <stdlib.h>
#include "SequenceQueue.h"

Queue initQueue(int maxSize)
{
    Queue Q = (Queue)malloc(sizeof(struct QNode));
    Q->data = (ElementType *)malloc(maxSize * sizeof(ElementType));
    Q->front = Q->rear = 0;
    Q->maxSize = maxSize;

    return Q;
}


