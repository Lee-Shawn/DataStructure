#include <stdio.h>
#include <stdlib.h>
#include "DoubleLinkedList.h"

int main()
{
    List L = createList();
    printf("˫�����ֵΪ��\n");
    printList(L);
    insertNode(L, 66, 3);
    printf("�����½���˫�����ֵΪ��\n");
    printList(L);
    deleteNode(L, 6);
    printf("ɾ������˫�����ֵΪ��\n");
    printList(L);

    return 0;
}
