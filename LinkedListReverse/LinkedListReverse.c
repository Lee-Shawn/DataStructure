#include <stdio.h>
#include <stdlib.h>
#include "LinkedListReverse.h"

/**
* 头插法创建单链表
*/
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

/**
* 逆置单链表
*/
List reverseList(List L)
{
    List s;
    // 指向第一个结点
    List p = L->next;
    // 把头结点置为空
    L->next = NULL;

    if (p == NULL)
        return NULL;

    while (p)
    {
        // 指向p的下一个结点，防止断链
        s = p->next;
        // 把p插入到头结点后面
        p->next = L->next;
        L->next = p;
        p = s;
    }

    return L;
}

/**
* 打印单链表
*/
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
