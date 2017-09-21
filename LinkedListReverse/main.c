#include <stdio.h>
#include <stdlib.h>
#include "LinkedListReverse.h"

int main()
{
    List L1, L2;
    L1 = createList();
    printf("逆置前的链表值为：\n");
    printList(L1);
    L2 = reverseList(L1);
    printf("逆置后的链表值为：\n");
    printList(L2);

    return 0;
}
