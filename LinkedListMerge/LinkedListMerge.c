#include <stdio.h>
#include <stdlib.h>
#include "LinkedListMerge.h"


/**
* ��ͷ�巨��������
*/
List createList()
{
    int i, length, value;

    // ����ͷ���
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

    // �����������������ֵ
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
        // ���·���Ľ����ں���
        pTail->next = pNode;
        pNode->next = NULL;
        pTail = pNode;
    }

    return pHead;
}

/**
* ���ǵݼ���˳��ϲ���������ĵ�����
*/
List mergeList(List L1, List L2)
{
    // ����һ���µ�ͷ�����Ϊ�ϲ���������ͷ
    List L = (List)malloc(sizeof(struct Node));
    L->next = NULL;
    List s = L;
    List a, b;
    // p��q��L1��L2�Ĺ������
    List p = L1->next;
    List q = L2->next;

    // L1��L2�����յ�ʱ��ϲ�
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

    // ֻʣ��L1
    while (p)
    {
        a = p->next;
        s->next = p;
        s = p;
        p = a;
    }

    // ֻʣ��L2
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
* ��ӡ����
*/
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
