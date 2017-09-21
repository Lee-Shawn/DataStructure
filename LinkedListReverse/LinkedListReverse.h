#ifndef _LinkedListReverse_H_

typedef int ElementType;
typedef struct Node *List;


List createList();
List reverseList(List L);
void printList(List L);

#endif // _LinkedListReverse_H_


struct Node {
    ElementType data;
    List next;
};
