#include <stdio.h>
#include <stdlib.h>
#include "DoubleLinkedList.h"


List createList()
{
    int i, length, value;

    List pHead = (List)malloc(sizeof(struct DNode));
    pHead->next = NULL;
    List pTail = pHead;

    printf("输入双链表的长度：\n");
    scanf("%d", &length);
    printf("输入结点的值：\n");

    if (pHead == NULL)
    {
        printf("分配头结点失败！\n");
        exit(-1);
    }

    for (i = 0; i < length; i++)
    {
        List pNode = (List)malloc(sizeof(struct DNode));

        if (pNode == NULL)
        {
            printf("分配结点失败！\n");
            exit(-1);
        }

        scanf("%d", &value);
        pNode->data = value;
        pTail->next = pNode;
        pNode->prior = pTail;
        pNode->next = NULL;
        pTail = pNode;
    }

    return pHead;
}

void insertNode(List L, ElementType x, int p)
{

}

void deleteNode(List L, int p)
{

}

/*
Position findNode(List L, ElementType x)
{
    List p = L->next;
    return p;
}*/

void printList(List L)
{
    List p = L->next;

    if (p == NULL)
    {
        printf("双链表为空！\n");
        exit(0);
    }

    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }

    printf("\n");
}
