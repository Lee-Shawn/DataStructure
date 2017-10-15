#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "BinTree.h"

BTree createBTree()
{
    BTree BT;
    ElementType data;
    scanf("%d", &data);

    if (data == 0)
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
    Stack s = createStack(20);

    while (T || !isEmpty(s))
    {
        while (T)
        {
            push(s, T);
            T = T->left;
        }
        if (!isEmpty(s))
        {
            T = pop(s);
            printf("%d ", T->data);
            T = T->right;
        }
    }
}
