#include <stdio.h>
#include <stdlib.h>
#include "LinkedListReverse.h"

int main()
{
    List L1, L2;
    L1 = createList();
    printf("����ǰ������ֵΪ��\n");
    printList(L1);
    L2 = reverseList(L1);
    printf("���ú������ֵΪ��\n");
    printList(L2);

    return 0;
}
