// names.c -- 使用指向结构的指针
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//提供malloc()free()

#define NLEN 30
#define SLEN 81
struct namect {
	char fname[NLEN];//自动分配内存
	char lname[NLEN];
	int letters;
};
struct namest {
	char* fname;//使用指针
	char* lname;//需要自行申请内存
	int letters;
};
char* s_gets(char* st, int n);
//传递结构指针
void getinfo1(struct namect*);
void makeinfo1(struct namect*);
void showinfo1(const struct namect*);
//传递并返回结构
struct namect getinfo2(struct namect);
struct namect makeinfo2(struct namect);//需要写入结构, 故需要传递结构
void showinfo2(struct namect);
//使用指针和malloc()
void getinfo3(struct namest*);		//分配内存
void makeinfo3(struct namest*);
void showinfo3(const struct namest*);
void cleanup(struct namest*);		//释放内存

int main(void)
{
	struct namect person1;
	struct namest person2;

	getinfo1(&person1);
	makeinfo1(&person1);
	showinfo1(&person1);

	person1 = getinfo2(person1);
	person1 = makeinfo2(person1);
	showinfo2(person1);

	getinfo3(&person2);
	makeinfo3(&person2);
	showinfo3(&person2);
	cleanup(&person2);

	return 0;
}
char* s_gets(char* st, int n)
{
	char* ret_val, * find;

	if (ret_val = fgets(st, n, stdin))
		if (find = strchr(st, '\n'))
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;

	return ret_val;
}
void showinfo1(const struct namect*pst)
{
	printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}
void makeinfo1(struct namect* pst)
{
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}
void getinfo1(struct namect* pst)
{
	printf("Please enter your first name.\n");
	s_gets(pst->fname, NLEN);
	printf("Please enter your last name.\n");
	s_gets(pst->lname, NLEN);
}

struct namect getinfo2(struct namect temp)
{
	/*struct namect temp;*/
	printf("Please enter your first name.\n");
	s_gets(temp.fname, NLEN);
	printf("Please enter your last name.\n");
	s_gets(temp.lname, NLEN);

	return temp; //若要修改, 传递结构本身需要返回参数
}
struct namect makeinfo2(struct namect info)
{
	info.letters = strlen(info.fname) + strlen(info.lname);

	return info;
}
void showinfo2(struct namect info)
{
	printf("%s %s, your name contains %d letters.\n", info.fname, info.lname, info.letters);
}

void getinfo3(struct namest* pst)
{
	char temp[SLEN];
	printf("Please enter your first name.\n");
	s_gets(temp, NLEN);
	//分配内存
	pst->fname = (char*)malloc(sizeof(temp));//sizeof(temp)==SLEN
	//复制数据
	strcpy(pst->fname, temp);
	printf("Please enter your last name.\n");
	s_gets(temp, NLEN);
	pst->lname = (char*)malloc(strlen(temp) + 1);//strlen(temp)==实际的字符长度(不包括\0)
	strcpy(pst->lname, temp);
}
void makeinfo3(struct namest* pst)
{
	(*pst).letters = strlen(pst->fname) + strlen((*pst).lname);
}
void showinfo3(const struct namest* pst)
{
	printf("%s %s, your name contains %d letters.\n", (*pst).fname, (*pst).lname, pst->letters);
}
void cleanup(struct namest* pst)		//释放内存
{
	free(pst->fname);
	free((*pst).lname);
}