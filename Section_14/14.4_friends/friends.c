// friend.c -- 嵌套结构示例
#include <stdio.h>
#define LEN 20
const char* msgs[5] =
{
	"	Thank you for the wonderful evening, ",
	"You certainly prove that a ",
	"is a special kind of guy. We must get together",
	"over a delicious ",
	" and have a few laughs"
};
struct names {
	char first[LEN];
	char last[LEN];
};
struct guy {
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float income;
};
int main(void)
{
	struct guy fellow[2] = {
		{
			{"Ewen", "Villard"},
			"grilled salmon",
			"personality coach",
			68112.00
		}, 
		{
			{"Rodney", "Swillbelly"}, 
			"tripe",
			"tabloid editor", 
			432400.0
		}
	};
	struct guy* him;	//指向结构的指针
	int index = 0;

	for (him = &fellow[0]; index < 2/*him != NULL*//*会内存泄漏*/; him++, index++)
	{
		printf("Dear %s, \n\n", him->handle.first);
		printf("%s%s.\n", msgs[0], him->handle.first);
		printf("%s%s\n", msgs[1], him->job);
		printf("%s\n", msgs[2]);
		printf("%s%s%s", msgs[3], him->favfood, msgs[4]);
		if (him->income > 150000.0)
			puts("!!");
		else if (him->income > 75000.0)
			puts("!");
		else
			puts(".");
		printf("\n%40s%s\n", " ", "See you soon,");
		printf("%40s%s\n", " ", "Shalala\n\n");
	}
	printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
	him = &fellow[0];
	printf("pointer #1: %p #2: %p\n", him, him + 1);
	printf("him->income is $%.2f: (*him).income is $%.2f\n", him->income, (*him).income);
	him++;
	printf("him->favfood is %s: him->handle.last is %s\n", him->favfood, (*him).handle.last);


	return 0;
}