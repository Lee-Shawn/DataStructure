#include <stdio.h>
#include <stdlib.h>
#include "LinkedListMerge.h"

int main()
{
    List L1, L2, L;

    L1 = createList();
    L2 = createList();
    L = mergeList(L1, L2);
    printList(L);

    return 0;
}
