#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"

int main()
{
    printf("������������Ľ��ֵ��\n");
    BTree BT = createBTree();
    printf("���������������\n");
    InOrder(BT);

    return 0;
}
