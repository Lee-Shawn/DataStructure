#include <stdio.h>
#include <stdlib.h>
#include "SequenceStack.h"

Stack createStack(int size)
{
    Stack s = (Stack)malloc(sizeof(struct SNode));
    s->data = (ElementType *)malloc(size * sizeof(ElementType));
    s->top = -1;
    s->maxSize = size;

    return s;
}

int push(Stack s, ElementType x)
{
    if (isFull(s))
    {
        printf("栈已满！\n");
        return 0;
    }
    else
    {
        s->data[++(s->top)] = x;
        return 1;
    }
}

int pop(Stack s)
{
    if (isEmpty(s))
    {
        printf("栈为空！\n");
        return 0;
    }
    else
    {
        s->data[(s->top)--];
        return 1;
    }
}

int isFull(Stack s)
{
    if (s->top == s->maxSize-1)
        return 1;
    else
        return 0;
}

int isEmpty(Stack s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

void printStack(Stack s)
{
    int i;

    for (i = 0; i <= s->top; i++)
        printf("%d ", s->data[i]);

    printf("\n");
}
