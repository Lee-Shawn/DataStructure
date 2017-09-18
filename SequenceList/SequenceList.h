#include <stdbool.h> // gcc的编译器要加这个头文件才能编译bool

#ifndef _SequenceList_H_

#define MAXSIZE 50
#define ERROR -1
typedef int ElementType;
typedef int Position;
typedef struct Node *List;

List makeEmpty();
List readList();
Position findLocation(List L, ElementType x);
bool insertElement(List L, ElementType x, Position p);
bool deleteElement(List L, Position p);
void printList(List L);

#endif

struct Node {
    ElementType data[MAXSIZE];
    Position last;
};
