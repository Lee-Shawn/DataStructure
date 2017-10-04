#ifndef _SequenceQueue_H_


#define MaxSize 10
typedef int ElementType;
typedef struct QNode *Queue;


void initQueue(Queue Q);
int isEmpty(Queue Q);
int isFull(Queue Q);
int enQueue(Queue Q, ElementType x);
int deQueue(Queue Q);

#endif // _SequenceQueue_H_

struct QNode {
    ElementType data[MaxSize];
    int front, rear;
};

