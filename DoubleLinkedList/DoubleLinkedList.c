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

void insertNode(List L, ElementType x, int i)
{
    List p;
    // 插入的位置不能超过链表长度+1
    int k = lengthList(L)+1;

    if (i > k)
    {
        printf("插入位置不合法！\n");
        exit(-1);
    }
    p = findNode(L, i-1);

    List s = (List)malloc(sizeof(struct DNode));
    if (s == NULL)
    {
        printf("分配结点失败！\n");
        exit(-1);
    }
    s->data = x;

    if (p->next == NULL)// 如果插入的位置是最后一一个结点之后
    {
        s->prior = p;
        p->next = s;
        s->next = NULL;
    }
    else
    {
        s->next = p->next;
        s->prior = p->next->prior;
        p->next->prior = s;
        p->next = s;
    }
}

void deleteNode(List L, int i)
{
    List p,q;

    if (i > lengthList(L))
    {
        printf("删除的位置不合法！\n");
        exit(-1);
    }

    p = findNode(L, i-1);
    q = p->next;

    if (q->next == NULL)
    {
        free(q);
        p->next = NULL;
    }
    else
    {
        p->next = q->next;
        q->next->prior = q->prior;
        free(q);
    }
}


List findNode(List L, int i)
{
    int j = 1;
    List p = L->next;

    if (i < 0)
    {
        printf("查找位置不合法！\n");
        return NULL;
    }

    if (i == 0)
        return L;

    while (p && j < i)
    {
        p = p->next;
        j++;
    }

    return p;
}

/**
*
*/
int lengthList(List L)
{
    int length = 0;
    List p = L->next;

    if (p == NULL)
    {
        length = 0;
        return 0;
    }

    while (p)
    {
        p = p->next;
        length++;
    }

    return length;
}

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
