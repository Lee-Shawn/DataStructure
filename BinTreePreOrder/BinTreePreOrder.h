#ifndef _BinTreeOrder_H_

typedef int ElementType;
typedef struct BTNode *BTree

#endif // _BinTreeOrder_H_


struct BTNode {
    ElementType data;
    BTree left, right;
};
