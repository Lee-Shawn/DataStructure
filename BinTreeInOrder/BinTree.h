#ifndef _BinTree_H_


typedef struct BTNode *BTree;

BTree createBTree();
void InOrder(BTree BT);

#endif // _BinTree_H_


struct BTNode {
    ElementType data;
    BTree left, right;
};
