// fle_for.c -- for循环的灵活性
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//for_down.c
	int secs;

	for (secs = 5; secs > 0; secs--)
		printf("%d seconds!\n", secs);
		printf("We have ignition!\n");//只缩进不循环
	printf("We have ignition!\n\n");

	/* for_13s.c */
	int n; // 从2开始，每次递增13

	for (n = 2; n < 60; n = n + 13)
		printf("%d \n", n);
	printf("\n");

	/* for_char.c */
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		printf("The ASCII value for %c is %d.\n", ch, ch);
	printf("\n");

	/* for_geo.c */
	double debt;
	for (debt = 100.0; debt < 150.0; debt *= 1.1)
		printf("Your debt is now $%.2f.\n", debt);
	printf("\n");

	/*for_wild.c*/
	int x;
	int y = 55;

	for (x = 1; y <= 75; y = (++x * 5) + 50)
		printf("%10d %10d\n", x, y);
	 printf("\n");

	 /* for_none.c */
	 int ans;
	 //下面三种写法等价
	 ans = 2;

	 for (n = 3; ans <= 25;)
		 ans = ans * n;
	 printf("n = %d; ans = %d.\n", n, ans);

	 for (n = 3; ans <= 25; ans = ans * n)
		 ;
	 printf("n = %d; ans = %d.\n", n, ans);

	 n = 3;
	 for (; ans <= 25;)
		 ans = ans * n;
	 printf("n = %d; ans = %d.\n\n", n, ans);
	
	 /* for_show.c */
	 int num = 0;

	 for (printf("Keep entering numbers!\n"); num != 6;)
		 scanf("%d", &num);
	 printf("That's the one I want!\n");
	 for (printf("Keep entering numbers!\n"); num;)//等价于num != 0;
		 scanf("%d", &num);
	 printf("That's the one I want!\n\n");



	return 0;
}

