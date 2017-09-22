#ifndef _DoubleLinkedList_H_

typedef int ElementType;
typedef struct DNode *List;
typedef struct List Position;

List createList();
void insertNode(List L, ElementType x, int p);
void deleteNode(List L, int p);
Position findNode(List L, ElementType x);
void printList(List L);

#endif // _DoubleLinkedList_H_

struct DNode {
    ElementType data;
    List prior, next;
};
