#ifndef _DoubleLinkedList_H_

typedef int ElementType;
typedef struct DNode *List;

#endif // _DoubleLinkedList_H_

struct DNode {
    ElementType data;
    List prior, next;
};
