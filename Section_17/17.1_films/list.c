// list.c -- ֧����������ĺ���
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/* �ֲ�����ԭ�� */
static void CopyToNode(Item item, Node* pnode);

/* �ӿں��� */
/* ����������Ϊ�� */
void InitializeList(List* plist)
{
	*plist = NULL;
}

/* �������Ϊ��, ����true */
bool ListIsEmpty(const List* plist)
{
	if (*plist == NULL)
		return true;
	else
		return false;
}

/* ���������������true */
bool ListIsFull(const List* plist)
{
	Node* pt;
	bool full;

	pt = (Node*)malloc(sizeof(Node));//���˾��������һ�������ʧ��, ����
	if (pt == NULL)
		full = true;
	else
		full = false;
	free(pt);//�ͷŲ����ڴ�

	return full;
}

/* ���ؽڵ������ */
unsigned int ListItemCount(const List* plist)
{
	unsigned int count = 0;
	Node* pnode = *plist;	//��������ʼ

	while (pnode != NULL)
	{
		count++;
		pnode = pnode->next;
	}

	return count;
}

//�����洢��Ľڵ㣬�������������plistָ�������ĩβ��������ʵ�֣�
bool AddItem(Item item, List* plist)
{
	Node* pnew;
	Node* scan = *plist;

	pnew = (Node*)malloc(sizeof(Node));
	if (pnew == NULL)
		return false;
	CopyToNode(item, pnew);
	pnew->next = NULL;	//��ʼ��(*pnew).next��ֵ
	if (scan == NULL)	//������
		*plist = pnew;	//pnew���ڿ�ͷ
	else
	{
		while (scan->next != NULL)
			scan = scan->next;	//�ҵ�����ĩβ
		scan->next = pnew;
	}

	return true;
}

//����ÿ���ڵ㲢ִ��pfunָ��ĺ���
void Traverse(const List* plist, void(*pfun)(Item item))//const��ʾ���ı�headͷ�ڵ�, ��Ϊͷ�ڵ�û������
{
	Node* pnode = *plist;

	while (pnode != NULL)
	{
		(*pfun)(pnode->item);
		pnode = pnode->next;
	}
}

//�ͷ���malloc()������ڴ�
//��������ָ��ΪNULL
void EmptyTheList(List* plist)
{
	Node* psave;

	while (*plist != NULL)
	{
		psave = (*plist)->next;//������һ���ڵ��ַ
		free(*plist);
		*plist = psave;
	}
}

/* �ֲ��������� */
/* ��һ��������ڵ��� */
static void CopyToNode(Item item, Node* pnode)
{
	pnode->item = item; /* �����ṹ */
}