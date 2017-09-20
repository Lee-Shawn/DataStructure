#include <stdio.h>
#include <stdlib.h>
#include "LinkedListMerge.h"


List createList()
{
    int i, length, value;

    List pHead = (List)malloc(sizeof(struct Node));
    pHead->next = NULL;
    List pTail = pHead;

    if (pHead == NULL)
    {
        printf("����ͷ���ʧ�ܣ�\n");
        exit(-1);
    }

    printf("��������ĳ��ȣ�\n");
    scanf("%d", &length);
    printf("���������ֵ��\n");

    for (i = 0; i < length; i++)
    {
        List pNode = (List)malloc(sizeof(struct Node));

        if (pNode == NULL)
        {
            printf("������ʧ�ܣ�\n");
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

List mergeList(List L1, List L2)
{
    List L = (List)malloc(sizeof(struct Node));
    L->next = NULL;
    List s = L;
    List a, b;
    List p = L1->next;
    List q = L2->next;

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

    while (p)
    {
        a = p->next;
        s->next = p;
        s = p;
        p = a;
    }

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

void printList(List L)
{
    List p = L->next;

    printf("�ϲ��������\n");

    if (p == NULL)
    {
        printf("����Ϊ�գ�\n");
        return NULL;
    }

    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
