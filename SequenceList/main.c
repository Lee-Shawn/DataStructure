#include <stdio.h>
#include <stdlib.h>
#include "SequenceList.h"


int main()
{
    List L;

    L = readList();
    insertElement(L, 99, 1);
    deleteElement(L, 3);
    printList(L);

    return 0;
}
