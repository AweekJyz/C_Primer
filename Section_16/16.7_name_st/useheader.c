// useheader.c -- 使用names_st结构
#include <stdio.h>
#include "names_st.h"
#include "names_st.h" //不小心第二次包含头文件, 由于#ifndef, 不会出错

int main(void)
{
	names candidate;

	get_names(&candidate);
	printf("Let's welcome ");
	show_names(&candidate);
	printf(" to this program!\n");

	return 0;
}