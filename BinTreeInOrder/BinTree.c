#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "BinTree.h"

/**
* 创建二叉树
*/
BTree createBTree()
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
        BT->left = createBTree();
        BT->right = createBTree();
    }

    return BT;
}

/**
* 中序非递归遍历
*/
void InOrder(BTree BT)
{
    BTree T = BT;
    Stack s = createStack(20);

    while (T || !isEmpty(s))
    {
        // 一路向左走下去并压栈
        while (T)
        {
            push(s, T);
            T = T->left;
        }
        // 栈中不空，出栈后打印，向右走
        if (!isEmpty(s))
        {
            T = pop(s);
            printf("%d ", T->data);
            T = T->right;
        }
    }
}
