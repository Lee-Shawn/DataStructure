#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


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

    printf("输入链表的长度:\n");
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
        // 把新分配的结点接到链表后面
        pNode->data = value;
        pTail->next = pNode;
        pNode->next = NULL;
        pTail = pNode;
    }

    return pHead;
}

/**
* 查找结点的位置
*/
Position findNode(List L, int i)
{
    int j = 1;
    List p = L->next;

    if (i < 0)
        return NULL;
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
* 插入结点
*/
void insertNode(List L, ElementType x, int i)
{
    List newNode = (List)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("分配结点失败！\n");
        exit(-1);
    }

    Position p = findNode(L, i-1);

    if (p == NULL)
    {
        printf("插入位置错误！\n");
        exit(-1);
    }

    newNode->data = x;
    newNode->next = p->next;
    p->next = newNode;
}

void deleteNode(List L, int i)
{
    Position p = findNode(L, i-1);

    if (p == NULL)
    {
        printf("删除位置错误！\n");
        exit(-1);
    }

    List q = p->next;
    p->next = q->next;
    free(q);
}

void printList(List L)
{
    List p = L->next;

    printf("操作后的链表值为：\n");

    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
