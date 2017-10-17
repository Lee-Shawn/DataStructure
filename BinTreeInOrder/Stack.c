#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "BinTree.h"

/**
* ´´½¨Õ»
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
* Ñ¹Õ»
*/
int push(Stack s, ElementType x)
{
    if (isFull(s))
    {
        printf("Õ»ÒÑÂú£¡\n");
        return 0;
    }
    else
    {
        s->data[++(s->top)] = x;
        return 1;
    }
}

/**
* ³öÕ»
*/
ElementType pop(Stack s)
{
    if (isEmpty(s))
    {
        printf("Õ»Îª¿Õ£¡\n");
        return 0;
    }
    else
    {
        return s->data[(s->top)--];
    }
}

/**
* ÅÐ¿Õ
*/
int isEmpty(Stack s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

/**
* Õ»Âú
*/
int isFull(Stack s)
{
    if (s->top == s->MaxSize-1)
        return 1;
    else
        return 0;
}
