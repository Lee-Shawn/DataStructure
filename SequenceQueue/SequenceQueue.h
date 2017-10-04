#ifndef _SequenceQueue_H_



typedef int ElementType;
typedef struct QNode *Queue;


Queue initQueue(int maxSize);
int isEmpty(Queue Q);
int isFull(Queue Q);
int enQueue(Queue Q, ElementType x);
ElementType deQueue(Queue Q);

#endif // _SequenceQueue_H_

struct QNode {
    ElementType *data;
    int front, rear;
    int maxSize;
};

