#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pra_2(void);
int pra_3(void);
int pra_4(void);
int pra_5(void);
int pra_6(void); 
int pra_7(void);
int pra_8(void);

int main(void)
{
	pra_2();
	pra_3();
	pra_4();
	pra_5();
	pra_6();
	pra_7();
	pra_8();

	return 0;
}
int pra_2(void)
{
	char ch = 66;
	printf("%c\n\n", ch);
	return 0;
}
int pra_3(void)
{
	printf("Startled by the sudden sound, Sally shouted, \n\"By the Great Pumpkin, what was that!\"\n\n");
	return 0;
}
int pra_4(void)
{
	double aa;

	printf("\aEnter a floating-point value: _____\b\b\b\b\b");
	scanf("%lf", &aa);//double时scanf用%lf, float时用%f, 不可混用要匹配
	printf("fixed-point notation: %f\n", aa);
	printf("exponential notation: %e\n", aa);
	printf("p notation: %a\n\n", aa);

	return 0;
}
int pra_5(void)
{
	int age = 0;

	printf("请输入年龄: ");
	scanf("%d", &age);
	printf("对应的秒数是%.2f\n\n", age * 3.156e7);

	return 0;
}
int pra_6(void)
{
	double kuatuo = 0;

	printf("请输入夸脱: ");
	scanf("%lf", &kuatuo);
	printf("对应的水分子数量是%.2e\n\n", (950 * kuatuo) / 3.e-23);

	return 0;
}
int pra_7(void)
{
	float high = 0.0;

	printf("请输入身高(英寸): ");
	scanf("%f", &high);
	printf("身高是%.2f厘米\n\n", high * 2.54);

	return 0;
}
int pra_8(void)
{
	int bei = 0;
	float pintuo = 0.0, angsi = 0.0, tangshao = 0.0, chashao = 0.0;
	printf("请输入杯数: ");
	scanf("%d", &bei);
	pintuo = 0.5f * bei;
	angsi = 8.0f * bei;
	tangshao = 2 * angsi;
	chashao = 3 * tangshao;
	printf("品脱 = %.2f, 盎司 = %.2f, 大汤勺 = %.2f, 茶勺 = %.2f\n\n", pintuo, angsi, tangshao, chashao);


	return 0;
}