#ifndef _LinkedList_H_

typedef int ElementType;
typedef struct Node *List;
typedef List Position;

List createList();
Position findNode(List L, int i);
void insertNode(List L, ElementType x, int i);
void deleteNode(List L, int i);
void printList(List L);

#endif

struct Node {
    ElementType data;
    List next;
};
