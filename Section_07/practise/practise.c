// pratise -- 条件分支语句的练习
#include "practise.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;//题号
	int i_scanf = 0;

	printf("请输入题号(1~%d)(输入0退出): ", TOTAL);
	i_scanf = scanf("%d", &i);//第一次输入
	while( i != 0)
	{
		while ((i_scanf != 1) || (i < 0 || i > TOTAL))
		{
			if (i_scanf != 1)
				printf("输入的不是整数, 请输入1到%d的整数. \n",
					TOTAL);
			else
				printf("输入的整数范围错误. 请输入1到%d的整数. \n ", 
					TOTAL);
			while (getchar() != '\n')
				continue;
			printf("请输入题号(1~%d)(输入0退出): ", TOTAL);
			i_scanf = scanf("%d", &i);
			//要检查每个循环每次是否都更新了条件
		}
		while (getchar() != '\n')
			continue;//清空第一次输入的缓存
		switch (i)
		{
		case 1:
			printf("第一题\n");
			repo_char();
			break;
		case 2:
			printf("第二题\n");
			char_ascii();
			//char_ascii_2();
			break;
		case 3:
			printf("第三题\n");
			odd_average();
			break;
		case 4:
			printf("第四题\n");
			replace();
			break;
		case 5:
			printf("第五题\n");
			replace_switch();
			break;
		case 6:
			printf("第六题\n");
			ei_count();
			break;
		case 7:
			printf("第七题\n");
			salary();
			break;
		case 8:
			printf("第八题\n");
			salary_choice();
			break;
		case 9:
			printf("第九题\n");
			small_prime();
			break;
		case 10:
			printf("第十题\n");
			tax1988();
			break;
		case 11:
			printf("第十一题\n");

			break;
		default:
			printf("Oops!");
			break;
		}
		//while (getchar() != '\n')
		//不能乱用, 如果没有回车就会一直卡在里面出不来
		//	continue;//清空缓存
		printf("Good!\n\n");
		printf("请输入题号(1~%d)(输入0退出): ", TOTAL);
		i_scanf = scanf("%d", &i);
		
	}
	printf("Bye! See you next time!\n");

	return 0;
}