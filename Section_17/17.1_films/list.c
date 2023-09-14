// list.c -- 支持链表操作的函数
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/* 局部函数原型 */
static void CopyToNode(Item item, Node* pnode);

/* 接口函数 */
/* 把链表设置为空 */
void InitializeList(List* plist)
{
	*plist = NULL;
}

/* 如果链表为空, 返回true */
bool ListIsEmpty(const List* plist)
{
	if (*plist == NULL)
		return true;
	else
		return false;
}

/* 如果链表已满返回true */
bool ListIsFull(const List* plist)
{
	Node* pt;
	bool full;

	pt = (Node*)malloc(sizeof(Node));//满了就是再添加一个就添加失败, 测试
	if (pt == NULL)
		full = true;
	else
		full = false;
	free(pt);//释放测试内存

	return full;
}

/* 返回节点的数量 */
unsigned int ListItemCount(const List* plist)
{
	unsigned int count = 0;
	Node* pnode = *plist;	//设置链表开始

	while (pnode != NULL)
	{
		count++;
		pnode = pnode->next;
	}

	return count;
}

//创建存储项的节点，并将其添加至由plist指向的链表末尾（较慢的实现）
bool AddItem(Item item, List* plist)
{
	Node* pnew;
	Node* scan = *plist;

	pnew = (Node*)malloc(sizeof(Node));
	if (pnew == NULL)
		return false;
	CopyToNode(item, pnew);
	pnew->next = NULL;	//初始化(*pnew).next的值
	if (scan == NULL)	//空链表
		*plist = pnew;	//pnew放在开头
	else
	{
		while (scan->next != NULL)
			scan = scan->next;	//找到链表末尾
		scan->next = pnew;
	}

	return true;
}

//访问每个节点并执行pfun指向的函数
void Traverse(const List* plist, void(*pfun)(Item item))//const表示不改变head头节点, 因为头节点没有内容
{
	Node* pnode = *plist;

	while (pnode != NULL)
	{
		(*pfun)(pnode->item);
		pnode = pnode->next;
	}
}

//释放由malloc()分配的内存
//设置链表指针为NULL
void EmptyTheList(List* plist)
{
	Node* psave;

	while (*plist != NULL)
	{
		psave = (*plist)->next;//保存下一个节点地址
		free(*plist);
		*plist = psave;
	}
}

/* 局部函数定义 */
/* 把一个项拷贝到节点中 */
static void CopyToNode(Item item, Node* pnode)
{
	pnode->item = item; /* 拷贝结构 */
}