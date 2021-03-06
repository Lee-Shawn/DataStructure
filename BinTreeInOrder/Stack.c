#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "BinTree.h"

/**
* ����ջ
*/
Stack createStack(int MaxSzie)
{
    Stack s = (Stack)malloc(sizeof(struct SNode));
    s->data = (ElementType *)malloc(MaxSzie * sizeof(ElementType));
    s->MaxSize = MaxSzie;
    s->top = -1;

    return s;
}

/**
* ѹջ
*/
int push(Stack s, ElementType x)
{
    if (isFull(s))
    {
        printf("ջ������\n");
        return 0;
    }
    else
    {
        s->data[++(s->top)] = x;
        return 1;
    }
}

/**
* ��ջ
*/
ElementType pop(Stack s)
{
    if (isEmpty(s))
    {
        printf("ջΪ�գ�\n");
        return 0;
    }
    else
    {
        return s->data[(s->top)--];
    }
}

/**
* �п�
*/
int isEmpty(Stack s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

/**
* ջ��
*/
int isFull(Stack s)
{
    if (s->top == s->MaxSize-1)
        return 1;
    else
        return 0;
}
