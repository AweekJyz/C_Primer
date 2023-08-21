// colddays.c -- 找出0℃以下的天数占总天数的百分比
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_day = 0, all_day = 0;

	printf("Enter the list of daily low temperature. \n");
	printf("Use Celsius, and enter q to quit. \n");
	while (scanf("%f", &temperature) == 1)
	{
		all_day++;
		if (temperature < FREEZING)
			cold_day++;
	}
	if (temperature != 0)
		printf("%d days total: %.lf%% were below freezing. \n", all_day, 100.0 * (float)cold_day / all_day);
	else
		printf("No data entered!");

	return 0;
}