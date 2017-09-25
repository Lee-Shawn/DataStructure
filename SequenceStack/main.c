#include <stdio.h>
#include <stdlib.h>
#include "SequenceStack.h"

int main()
{
    int i = 1;
    Stack s = createStack(5);

    while (!isFull(s))
        push(s, i++);


    return 0;
}
