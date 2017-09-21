#include <stdio.h>
#include <stdlib.h>
#include "LinkedListReverse.h"

List createList()
{
    int i, length, value;

    List pHead = (List)malloc(sizeof(struct Node));
    pHead->next = NULL;
    List pTail = pHead;

    if (pHead == NULL)
    {
        printf("分配结点失败！\n");
        exit(-1);
    }

    printf("输入链表的长度：\n");
    scanf("%d", &length);
    printf("输入链表的值：\n");

    for (i = 0; i < length; i++)
    {
        List pNode = (List)malloc(sizeof(struct Node));

        if (pNode == NULL)
        {
            printf("分配结点失败！\n");
            exit(-1);
        }

        scanf("%d", &value);
        pNode->data = value;
        pTail->next = pNode;
        pNode->next = NULL;
        pTail = pNode;
    }

    return pHead;
}

List reverseList(List L)
{
    List s;
    List p = L->next;
    L->next = NULL;

    if (p == NULL)
        return NULL;

    while (p)
    {
        s = p->next;
        p->next = L->next;
        L->next = p;
        p = s;
    }

    return L;
}

void printList(List L)
{
    List p = L->next;

    if (p == NULL)
    {
        printf("链表为空！\n");
        exit(0);
    }

    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }

    printf("\n");
}
