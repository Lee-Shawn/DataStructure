#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"
#include "Stack.h"


BTree createBinTree()
{
    BTree BT;
    ElementType data;

    scanf("%d", &data);

    if (data == 0)
    {
        BT = NULL;
    }
    else
    {
        BT = (BTree)malloc(sizeof(struct BTNode));
        BT->data = data;
        BT->left = createBinTree();
        BT->right = createBinTree();
    }

    return BT;
}

void preOrder(BTree BT)
{
    BTree T = BT;

    Stack s = createStack(20);
    while (T || !isEmpty(s))
    {
        while (T)
        {
            push(s, T);
            printf("%d ", T->data);
            T = T->left;
        }
        if (!isEmpty(s))
        {
            T = pop(s);
            T = T->right;
        }
    }
}
