#ifndef _SequenceList_H_

#define MAXSIZE 50
typedef int ElementType;
typedef int Position;
typedef struct Node *List;

List makeEmpty();

#endif

struct Node {
    ElementType data[MAXSIZE];
    Position last;
};
