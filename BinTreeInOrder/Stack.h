#ifndef _Stack_H_

typedef int ElementType;
typedef struct SNode *Stack;

Stack createStack(int MaxSize);
int push(Stack s, ElementType x);
ElementType pop(Stack s);
int isEmpty(Stack s);
int isFull(Stack s);

#endif // _Stack_H_


struct SNode {
    ElementType *data;
    int top;
    int MaxSize;
};
