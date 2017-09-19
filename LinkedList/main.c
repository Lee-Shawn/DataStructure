#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


int main()
{
    List L = createList();
    insertNode(L, 99, 3);
    deleteNode(L, 1);
    printList(L);

    return 0;
}
