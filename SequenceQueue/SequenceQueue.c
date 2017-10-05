#include <stdio.h>
#include <stdlib.h>
#include "SequenceQueue.h"

/**
* 创建队列
*/
Queue initQueue(int maxSize)
{
    Queue Q = (Queue)malloc(sizeof(struct QNode));
    Q->data = (ElementType *)malloc(maxSize * sizeof(ElementType));
    Q->front = Q->rear = 0;
    Q->maxSize = maxSize;

    return Q;
}

/**
* 判断队列是否为空
*/
int isEmpty(Queue Q)
{
    if (Q->front == Q->rear)
        return 1;
    else
        return 0;
}

/**
* 判断队列是否已满
*/
int isFull(Queue Q)
{
    if ((Q->rear+1)%Q->maxSize == Q->front)
        return 1;
    else
        return 0;
}

/**
* 入对
*/
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

/**
* 出对
*/
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
