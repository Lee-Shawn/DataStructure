#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"
#include "Stack.h"

/**
* 创建栈
*/
Stack createStack(int MaxSize)
{
    Stack s = (Stack)malloc(sizeof(struct SNode));
    s->data = (ElementType *)malloc(MaxSize * sizeof(ElementType));
    s->top = -1;
    s->MaxSize = MaxSize;

    return s;
}

/**
* 进栈
*/
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

/**
* 出栈
*/
ElementType pop(Stack s)
{
    if (isEmpty(s))
    {
        printf("栈为空！\n");
        return 0;
    }
    else
    {
        return s->data[(s->top)--];
    }
}

/**
* 栈是否满
*/
int isEmpty(Stack s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

/**
* 栈是否空
*/
int isFull(Stack s)
{
    if (s->top == s->MaxSize-1)
        return 1;
    else
        return 0;
}
