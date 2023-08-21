#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
int fun_0(void);
int fun_1(void);
int fun_2(void);
int fun_3(void);
int fun_3(void);
int fun_4(void);
int fun_5(void);
int fun_6(void);
int fun_7(void);
int fun_8(void);//星
int fun_9(void);
int fun_10(void);
int fun_11(void);
int fun_12(void);
int fun_13(void);
int fun_13(void);
int fun_14(void);
int fun_15(void);
int fun_16(void);//单利复利
int fun_17(void);
int fun_18(void);
		
int main(void)
{
	fun_0();
	fun_1();
	fun_2();
	fun_3();
	fun_4();
	fun_5();
	fun_6();
	fun_7();
	fun_8();
	fun_9();
	fun_10();
	fun_11();
	fun_12();
	fun_13();
	fun_14();
	fun_15();
	fun_16();
	fun_17();
	fun_18();

	return 0;
}
int fun_0(void)
{
#define ROW 4
#define COL 8
	int col, row;

	for (row = 1; row <= 4; row++)
	{
		for (col = 1; col <= 8; col++)
			printf("$");
		printf("\n");
	}
	printf("\n");

	int i, j;
	char money[20];		//只有字符类型没有字符串类型
	for (i = 1; i <= ROW; i++)
	{
		for (j = 0; j < COL; j++)
			money[j] = '$';
		money[j] = '\0';	//字符串要\0结尾
		printf("%s\n", money);
	}
	printf("\n");

	return 0;
}
int fun_1(void)
{
	int word[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		word[i] = i + 97;
		printf("%c", word[i]);
	}
	printf("\n\n");

	return 0;
}
int fun_2(void)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
			printf("$");
		printf("\n");
	}
	printf("\n");

	return 0;
}
int fun_3(void)
{
	int i, j;
	char ch[20];

	for (i = 1; i <= 6; i++)
	{
		for (j = 0; j < i; j++)		//多个语句记得加花括号
		{
			ch[j] = 70 - j;
			printf("%c", ch[j]);
		}
		printf("\n");
	}
	printf("\n");
	
	char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";//直接给数组赋值会出问题, 初始化不会, 要给\0预留空间
	//lets[27] = "ABCD";错误的
	for (i = 1; i <= 6; i++)
	{
		for (j = 0; j < i; j++)
		{
			/*lets[j] = 70 - j;*/
			printf("%c", lets[5-j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
int fun_4(void)
{
	int i, j, k = 1;
	char ch[27];

	for (i = 1; i <= 6; i++)
	{
		k += i - 1;
		for (j = 0; j < i; j++)		
		{
			ch[j] = 64 + k + j;
			printf("%c", ch[j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
int fun_5(void)
{
	int i, j;
	char ch, ch_v;//变化的字母
#define SIZE_5 26

	printf("请输入一个大写字母: ");
	scanf("%c", &ch);
	for (i = 1; i <= SIZE_5; i++)
	{
		for (j = SIZE_5 - 1; j >= i; j--)
			printf(" ");
		for (j = 0; j <= (2 * i - 1) / 2; j++)
		{
			ch_v = ch - (SIZE_5 - 1 - j);//退SIZE_5 - 1位后开始递增
			//ch -= (SIZE_5 - 1 - j)不一样, 更新了ch, 但这里不能更新ch
			printf("%c", ch_v);
		}
		for (j = 0; j < (2 * i - 1) / 2; j++)
		{
			printf("%c", ch_v - j -1);
		}
		for (j = SIZE_5 - 1; j >= i; j--)
			printf(" ");
		printf("\n");
	}
	printf("\n");
	return 0; 
}
int fun_6(void)
{
#define POWER_6 10		//但为什么可以在函数中用define
//#include <math.h>不能在函数中include头文件  这是预处理指令
	int up, down;//上下限
	int i, j;

	printf("请输入上下限(整数, 从小到大): ");
	scanf("%d%d", &down, &up);//说是上下限但输入的时候习惯从小到大
	for(i = 0; i <= up - down; i++)
	{
		for (j = 1; j <= POWER_6; j++)
		{
			printf("%d 	", (int)pow(down + i, j));
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
int fun_7(void)
{
	char word[20] = { '\0' }, unword[20] = { '\0' };
	int i;

	printf("请输入一个单词: ");
	scanf("%s", word);
	printf("单词长度为%zd个字符\n", strlen(word));
	//for (i = 0; scanf("%c", &word[i]) == 1; i++)
	//	;
	for (i = 0; i < (int)strlen(word); i++)
	{
		unword[i] = word[strlen(word) - 1 - i];
	}
	unword[i] = '\0';
	printf("倒过来写是%s\n\n", unword);
	
	return 0;
}
int fun_8(void)
{
	double f_1, f_2, result;
	//int status;
	
	printf("请输入两个浮点数: ");
	//status = scanf("%lf%lf", &f_1, &f_2);
	for (; scanf("%lf%lf", &f_1, &f_2) != 2;)
	{
		printf("错误! 请重新输入: ");
		// 清除输入缓冲区中的多余字符，直到遇到换行符
		while (getchar() != '\n');//没有清除缓存的话一直重复错误读取, status=0
		//status = scanf("%lf%lf", &f_1, &f_2);
	}
	result = (f_1 - f_2) / (f_1 * f_2);
	printf("两数之差除以两数乘积的结果是%lf\n\n", result);

	return 0;
}
double cacu(double x, double y);
int fun_9(void)
{
	double f_1, f_2;

	printf("请输入两个浮点数: ");
	for (; scanf("%lf%lf", &f_1, &f_2) != 2;)
	{
		printf("错误! 请重新输入: ");
		while (getchar() != '\n');
	}
	printf("两数之差除以两数乘积的结果是%lf\n\n", cacu(f_1, f_2));

	return 0;
}
double cacu(double x, double y)
{
	return (x - y) / (x * y);
}
int fun_10(void)
{
	int i, lower, upper, sq_sum;//上下限, 平方和

	printf("Enter lower and upper integer limits : ");
	scanf("%d%d", &lower, &upper);
	while(lower < upper)
	{
		for (i = 0, sq_sum = 0; lower + i <= upper; i++)
		{
			sq_sum += (lower + i) * (lower + i);
		}
		printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sq_sum);
		//sq_sum = 0;	//初始化
		printf("Enter next set of limits: ");
		scanf("%d%d", &lower, &upper);
	}
	printf("Done! \n\n");

	return 0;
}
int fun_11(void)
{
#define SIZE_11 8
	int arr[SIZE_11 + 1], unarr[SIZE_11 + 1];
	int i;

	printf("请输入%d个整数: ", SIZE_11);
	for (i = 0; i < SIZE_11; i++)//输入整数, 倒置
	{
		scanf("%d", &arr[i]);
		unarr[SIZE_11 - 1 - i] = arr[i];//数组最大小标要减一
	}
	for (i = 0; i < SIZE_11; i++)//输出
		printf("%d ", unarr[i]);
	printf("\n\n");
	while (getchar() != '\n');//清除缓存
	return 0;
}
int fun_12(void)
{
	int count, i;//项数
	double sum_1, sum_2;

	printf("请输入需要计算的项数. \n");
	scanf("%d", &count);
	while(count > 0)
	{
		for (i = 1, sum_1 = 0; i <= count; i++)
		{
			sum_1 += 1.0 / (double)i;
		}
		for (i = 1, sum_2 = 0; i <= count; i++)
		{
			sum_2 += pow(-1, i - 1) * (1.0 / (double)i);
		}
		printf("sum_1 = %.10f, sum_2 = %.10f\n", sum_1, sum_2);
		printf("请再次输入项数.\n");
		while (getchar() != '\n');//清除缓存
		scanf("%d", &count);
	}
	printf("\n");

	return 0;
}
int fun_13(void)
{
	int arr[9];
	int i;

	for (i = 0; i < 8; i++)
		arr[i] = pow(2, i + 1);
	printf("2的前8次方为: ");
	i = 0;
	do
	{
		printf("%d ", arr[i]);
		i++;
	} while (i < 8);
	printf("\n\n");

	return 0;
}
int fun_14(void)
{
	double arr_1[9], arr_2[9];
	int i;
	double sum;

	for (i = 0; i < 8; i++)	//依次输入
	{
		printf("请为第一个数组输入第%d个值", i + 1);
		scanf("%lf", &arr_1[i]);
		while (getchar() != '\n');//清除缓存
	}
	for (i = 0; i < 8; i++)	//验证输入
		printf("%11.6lf ", arr_1[i]);
	printf("\n");
	for (i = 1, arr_2[0] = arr_1[0]; i < 8; i++)
		arr_2[i] = arr_2[i - 1] + arr_1[i];
	for (i = 0; i < 8; i++)	//验证输入
		printf("%11.6lf ", arr_2[i]);
	printf("\n\n");

	return 0;
}
int fun_15(void)
{
	char in[256] = { '\0' };
	int i, j;

	//printf("请输入一行不超过255个字符的字符串: \n");    //scanf字符串遇到空白就结束
	//scanf("%s", in);
	//for (i = 0; i < (int)strlen(in); i++)	//翻转
	//	unin[i] = in[(int)strlen(in) - 1 - i];
	//printf("%s\n", unin);
	//while (getchar() != '\n');//清除缓存

	printf("请输入一行不超过255个字符的一段话: \n");
	for (i = 1, j = 0, scanf("%c", &in[0]); in[i - 1] != '\n'; i++, j++)
		//判断比输入滞后一步, 故先手动输入一个字符. j计算长度
		scanf("%c", &in[i]);
	for (i = 0; i < j; i++)	//输出翻转后的结果
		printf("%c", in[j - 1 - i]);
	printf("\n");

	return 0;
}
int fun_16(void)
{
#define PRIN 100 //本金
#define SIM 0.1	//单利
#define COM 0.05	//复利
	double simple_interest, compound_interest = 1;	//单利和复利
	int i;
	float time;

	printf("请输入你要存入的年数: ");
	while(scanf("%f", &time) == 1)
	{
		simple_interest = PRIN * (1 + SIM * time);
		compound_interest = PRIN * pow(1 + COM, time);
		/*for (i = 0; i <= time; i++)
			compound_interest = PRIN * pow(1 + COM, i);*/		//看自己代码看笑了
		printf("simple interest = %lf, compound interest = %lf\n", simple_interest, compound_interest);
		printf("请再次输入你要存入的年数: ");
		while (getchar() != '\n');
	}
	printf("已退出!\n");

	for (time = 2, simple_interest = PRIN * (1 + SIM), compound_interest = PRIN * pow(1 + COM, 1); 
		simple_interest >= compound_interest; time++)
	{
		simple_interest = PRIN * (1 + SIM * time);
		compound_interest = PRIN * pow(1 + COM, time);
	}
	printf("Deirdre的投资额超过Daphne的时间为%f年\n", time - 1);
	printf("Deirdre = %f, Daphne = %f\n\n", simple_interest, compound_interest);

	return 0;
}
int fun_17(void)
{
#define COM 0.08
	double total = 1000000;
	int year;

	for (year = 0; total > 0; year++)
	{
		total *= (1 + COM);
		total -= 100000;
	}
	printf("需要%d年取完账户所有的钱\n\n", year);

	return 0;
}
int fun_18(void)
{
#define DUNBAR_NUMBER 150 //Dunbar's number
#define X_0 5 //一开始有5个朋友
	int friend = X_0, week;

	for (week = 1; friend <= DUNBAR_NUMBER; week++) 
	{
		friend -= week;
		friend *= 2;
		printf("Rabnud博士第%d周有%d个朋友. \n", week, friend);
	}
	printf("第%d周朋友数量超过%d个. \n", week - 1, DUNBAR_NUMBER);

	return 0;
}