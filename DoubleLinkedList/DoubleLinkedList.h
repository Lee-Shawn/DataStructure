#ifndef _DoubleLinkedList_H_

typedef int ElementType;
typedef struct DNode *List;


List createList();
void insertNode(List L, ElementType x, int i);
void deleteNode(List L, int i);
List findNode(List L, int i);
int lengthList(List L);
void printList(List L);

#endif // _DoubleLinkedList_H_

struct DNode {
    ElementType data;
    List prior, next;
};
