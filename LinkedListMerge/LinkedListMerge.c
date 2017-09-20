#include <stdio.h>
#include <stdlib.h>
#include "LinkedListMerge.h"


/**
* 用头插法创建链表
*/
List createList()
{
    int i, length, value;

    // 分配头结点
    List pHead = (List)malloc(sizeof(struct Node));
    pHead->next = NULL;
    List pTail = pHead;

    if (pHead == NULL)
    {
        printf("分配头结点失败！\n");
        exit(-1);
    }

    printf("输入链表的长度：\n");
    scanf("%d", &length);
    printf("输入链表的值：\n");

    // 创建链表，输入链表的值
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
        // 把新分配的结点接在后面
        pTail->next = pNode;
        pNode->next = NULL;
        pTail = pNode;
    }

    return pHead;
}

/**
* 按非递减的顺序合并两个有序的单链表
*/
List mergeList(List L1, List L2)
{
    // 分配一个新的头结点作为合并后的链表的头
    List L = (List)malloc(sizeof(struct Node));
    L->next = NULL;
    List s = L;
    List a, b;
    // p和q是L1和L2的工作结点
    List p = L1->next;
    List q = L2->next;

    // L1和L2都不空的时候合并
    while (p && q)
    {
        if (p->data < q->data)
        {
            a = p->next;
            s->next = p;
            s = p;
            p = a;
        }
        else
        {
            b = q->next;
            s->next = q;
            s = q;
            q = b;
        }
    }

    // 只剩下L1
    while (p)
    {
        a = p->next;
        s->next = p;
        s = p;
        p = a;
    }

    // 只剩下L2
    while (q)
    {
        b = q->next;
        s->next = q;
        s = q;
        q = b;
    }

    L1->next = NULL;
    L2->next = NULL;

    return L;
}

/**
* 打印链表
*/
void printList(List L)
{
    List p = L->next;

    printf("合并后的链表：\n");

    if (p == NULL)
    {
        printf("链表为空！\n");
        return NULL;
    }

    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
