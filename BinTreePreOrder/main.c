#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"
#include "Stack.h"

int main()
{
    printf("������������Ľ��ֵ��\n");
    BTree BT = createBinTree();
    printf("������������ǵݹ���������\n");
    preOrder(BT);

    return 0;
}
