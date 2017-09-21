#include <stdio.h>
#include <stdlib.h>

int main()
{
    List L1, L2;
    L1 = createList();
    L2 = reverseList(L1);
    printList(L2);

    return 0;
}
