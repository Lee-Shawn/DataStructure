#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"
#include "Stack.h"


/**
* ����������
*/
BTree createBinTree()
{
    BTree BT;
    ElementType data;

    scanf("%d", &data);

    // data����0��ʾҶ�ӽ��������ӽڵ�Ϊ�գ���0��ʾ
    if (data == 0)
    {
        BT = NULL;
    }
    else
    {
        BT = (BTree)malloc(sizeof(struct BTNode));
        BT->data = data;
        BT->left = createBinTree();
        BT->right = createBinTree();
    }

    return BT;
}

/**
* ��������ǵݹ�ʵ��
*/
void preOrder(BTree BT)
{
    BTree T = BT;

    // ��һ��ջ����Ž��
    Stack s = createStack(20);

    while (T || !isEmpty(s))
    {
        // ������
        while (T)
        {
            // �������ѹջ
            push(s, T);
            // ��һ�α���ʱ��ӡ����ֵ
            printf("%d ", T->data);
            T = T->left;
        }
        // ջ�е�Ԫ�ز��գ���ջȻ�����ұ���
        if (!isEmpty(s))
        {
            T = pop(s);
            T = T->right;
        }
    }
}
