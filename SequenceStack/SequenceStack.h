#ifndef _SequenceStack_H_

typedef int ElementType;
typedef struct SNode *Stack;

Stack createStack(int Size);
int push(Stack s, ElementType x);
int pop(Stack s);
int isFull(Stack s);
int isEmpty(Stack s);
void printStack(Stack s);


#endif // _SequenceStack_H_

struct SNode {
    ElementType *data;
    int top;
    int maxSize;
};
