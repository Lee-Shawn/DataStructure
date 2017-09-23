#include <stdio.h>
#include <stdlib.h>
#include "DoubleLinkedList.h"

int main()
{
    List L = createList();
    printf("双链表的值为：\n");
    printList(L);
    insertNode(L, 66, 3);
    printf("插入新结点后双链表的值为：\n");
    printList(L);
    deleteNode(L, 6);
    printf("删除结点后双链表的值为：\n");
    printList(L);

    return 0;
}
