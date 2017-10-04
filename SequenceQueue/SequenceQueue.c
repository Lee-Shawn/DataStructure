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

int isEmpty(Queue Q)
{
    if (Q->front == Q->rear)
        return 1;
    else
        return 0;
}

int isFull(Queue Q)
{
    if ((Q->rear+1)%Q->maxSize == Q->front)
        return 1;
    else
        return 0;
}

int enQueue(Queue Q, ElementType x)
{
    if (isFull(Q))
    {
        printf("队列已满！\n");
        return 0;
    }
    else
    {
        Q->rear = (Q->rear+1) % Q->maxSize;
        Q->data[Q->rear] = x;
        return 1;
    }
}

ElementType deQueue(Queue Q)
{
    if (isEmpty(Q))
    {
        printf("队列为空！\n");
        return 0;
    }
    else
    {
        Q->front = (Q->front+1) % Q->maxSize;
        return Q->data[Q->front];
    }
}
