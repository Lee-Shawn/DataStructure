#ifndef _Stack_H_

typedef int ElementType;
typedef struct SNode *Stack;


#endif // _Stack_H_


struct SNode {
    ElementType *data;
    int top;
    int maxSize;
};
