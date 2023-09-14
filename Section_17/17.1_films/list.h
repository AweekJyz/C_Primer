#pragma once
// list.c -- ���������ͽӿ�ͷ�ļ�

#ifndef LIST_H_
#define LIST_H_

#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>

/* �ض���������� */

#define TSIZE 45
struct film {
	char title[TSIZE];
	int rating;
};

/* һ�����Ͷ��� */

typedef struct film Item;
typedef struct node {
	Item item;
	struct node* next;
} Node;
typedef Node* List;

/* ����ԭ�� */

/* ������ ��ʼ��һ������ */
/* ǰ�������� plistָ��һ������ */
/* ���������� �����ʼ��Ϊ�� */
void InitializeList(List* plist);

/* ������ ȷ�������Ƿ�Ϊ�գ�plistָ��һ���ѳ�ʼ�������� */
/* ���������� �������Ϊ�գ��ú�������true�����򷵻�false */
bool ListIsEmpty(const List* plist);

/* ������ ȷ�������Ƿ�������plistָ��һ���ѳ�ʼ�������� */
/* ���������� ��������������ú��������棻���򷵻ؼ� */
bool ListIsFull(const List* plist);

/* ������ ȷ�������е�����, plistָ��һ���ѳ�ʼ�������� */
/* ���������� �ú������������е����� */
unsigned int ListItemCount(const List* plist);

/* ������ �������ĩβ����� */
/* ǰ�������� item��һ����������������, plistָ��һ���ѳ�ʼ�������� */
/* ���������� ������ԣ��ú���������ĩβ���һ����ҷ���true�����򷵻�false */
bool AddItem(Item item, List* plist);

/* ������ �Ѻ��������������е�ÿһ�� */
/* plistָ��һ���ѳ�ʼ�������� */
/* pfunָ��һ���������ú�������һ��Item���͵Ĳ��������޷���ֵ */
/* ���������� pfunָ��ĺ��������������е�ÿһ��һ�� */
void Traverse(const List* plist, void(*pfun)(Item item));//����

/* ������ �ͷ��ѷ�����ڴ棨����еĻ��� */
/* plistָ��һ���ѳ�ʼ�������� */
/* ���������� �ͷ���Ϊ�������������ڴ棬��������Ϊ�� */
void EmptyTheList(List* plist);

#endif