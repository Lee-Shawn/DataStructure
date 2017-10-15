#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "BinTree.h"

Stack createStack(int MaxSzie)
{

}

int push(Stack s, ElementType x)
{

}

int pop(Stack s)
{

}

int isEmpty(Stack s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

int isFull(Stack s)
{
    if (s->top == s->MaxSize-1)
        return 1;
    else
        return 0;
}
