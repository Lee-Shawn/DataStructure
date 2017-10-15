#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "BinTree.h"

BTree createBTree()
{
    BTree BT;
    ElementType data;
    scanf("%d", &data);

    if (BT == 0)
    {
        BT == NULL;
    }
    else
    {
        BT = (BTree)malloc(sizeof(struct BTNode));
        BT->data = data;
        BT->left = createBTree();
        BT->right = createBTree();
    }

    return BT;
}
