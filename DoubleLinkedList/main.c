#include <stdio.h>
#include <stdlib.h>
#include "DoubleLinkedList.h"

int main()
{
    List L = createList();
    insertNode(L, 66, 3);
    //deleteNode(L, 88);
    printList(L);

    return 0;
}
