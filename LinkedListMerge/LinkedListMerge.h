#ifndef _LinkedListMerge_H_

typedef int ElementType;
typedef struct Node *List;

List createList();
List mergeList(List L1, List L2);
void printList(List L);

#endif // _LinkedListMerge_H_

struct Node {
    ElementType data;
    List next;
};
