#include <stdio.h>
#include <stdlib.h>
#include "DoubleLinkedList.h"


/**
* 头插法创建双链表
*/
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

/**
* 插入结点
*/
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

    if (p->next == NULL)// 在最后一个结点后面插入结点
    {
        s->prior = p;
        p->next = s;
        s->next = NULL;
    }
    else // 其他位置插入结点
    {
        s->next = p->next;
        s->prior = p->next->prior;
        p->next->prior = s;
        p->next = s;
    }
}

/**
* 删除结点
*/
void deleteNode(List L, int i)
{
    List p,q;

    // 删除的位置不能大于链表的长度
    if (i > lengthList(L))
    {
        printf("删除的位置不合法！\n");
        exit(-1);
    }

    // 获取要删除结点的前驱结点
    p = findNode(L, i-1);
    q = p->next;

    if (q->next == NULL)// 删除最后一个结点
    {
        free(q);
        p->next = NULL;
    }
    else// 删除其他结点
    {
        p->next = q->next;
        q->next->prior = q->prior;
        free(q);
    }
}

/**
* 按序号查找结点位置
*/
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
* 求双链表的长度
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

/**
* 打印双链表
*/
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
