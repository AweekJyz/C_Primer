#pragma once
#ifndef FILMS
#define FILMS

#define _CRT_SECURE_NO_WARNINGS

#define TSIZE 45
#define FMAX 5

extern struct films* current, * head;

struct film {
	char title[TSIZE];
	int rating;
};
//����Ľṹ
struct films {
	char title[TSIZE];
	int rating;
	struct films* next;//ָ����һ���ṹ��ָ��
};

void eatline(void);
char* s_gets(char* st, int n);
void showList(void);
void cleanUp(void);
void arrary(void);
void linked_list(void);



#endif