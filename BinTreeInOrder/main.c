#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"

int main()
{
    printf("请输入二叉树的结点值：\n");
    BTree BT = createBTree();
    printf("二叉树中序遍历：\n");
    InOrder(BT);

    return 0;
}
