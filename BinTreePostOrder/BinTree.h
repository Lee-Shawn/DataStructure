#ifndef _BinTree_H_

typedef struct TNode *BTree;


#endif // _BinTree_H_

struct TNode {
    ElementType data;
    BTree left, right;
};
