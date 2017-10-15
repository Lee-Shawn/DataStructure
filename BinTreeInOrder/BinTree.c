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

void InOrder(BTree BT)
{
    BTree T = BT;
    Stack s = createStack(10);

    while (T || !isEmpty(s))
    {
        while (T)
        {
            push(s, T);
            T = T->left;
        }
        if (!isEmpty(s))
        {
            printf("%d", T->data);
            T = pop(s);
            T = T->right;
        }
    }
}
