#ifndef _BinTree_H_

typedef int ElementType;
typedef struct BTNode *BTree;

BTree createBTree();
void InOrder(BTree BT);

#endif // _BinTree_H_


struct BTNode {
    ElementType data;
    BTree left, right;
};
