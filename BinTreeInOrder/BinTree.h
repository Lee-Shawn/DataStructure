#ifndef _BinTree_H_


typedef struct BTNode *BTree;

#endif // _BinTree_H_


struct BTNode {
    ElementType data;
    BTree left, right;
};
