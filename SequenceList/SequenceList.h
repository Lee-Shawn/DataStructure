#ifndef _SequenceList_H_

#define MAXSIZE 50
#define ERROR -1
typedef int ElementType;
typedef int Position;
typedef struct Node *List;

List makeEmpty();
Position findLocation(List L, ElementType x);
bool insertElement(List L, ElementType x, Position p);
bool deleteElement(List L, Position p);

#endif

struct Node {
    ElementType data[MAXSIZE];
    Position last;
};
