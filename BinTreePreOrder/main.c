#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"
#include "Stack.h"

int main()
{
    printf("请输入二叉树的结点值：\n");
    BTree BT = createBinTree();
    printf("二叉树的先序非递归遍历结果：\n");
    preOrder(BT);

    return 0;
}
