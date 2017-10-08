#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"
#include "Stack.h"


/**
* 创建二叉树
*/
BTree createBinTree()
{
    BTree BT;
    ElementType data;

    scanf("%d", &data);

    // data等于0表示叶子结点的两个子节点为空，用0表示
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

/**
* 先序遍历非递归实现
*/
void preOrder(BTree BT)
{
    BTree T = BT;

    // 用一个栈来存放结点
    Stack s = createStack(20);

    while (T || !isEmpty(s))
    {
        // 树不空
        while (T)
        {
            // 将根结点压栈
            push(s, T);
            // 第一次遍历时打印结点的值
            printf("%d ", T->data);
            T = T->left;
        }
        // 栈中的元素不空，出栈然后向右遍历
        if (!isEmpty(s))
        {
            T = pop(s);
            T = T->right;
        }
    }
}
