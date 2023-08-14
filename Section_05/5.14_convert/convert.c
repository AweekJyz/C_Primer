// convert.c -- 自动类型转换
#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	float fl;

	fl = i = ch = 'C';
	//字符'C'被作为1字节的ASCII值存储在ch中.
	//整数变量i接受由'C'转换的整数,即按4字节存储67.
	//最后,fl接受由67转换的浮点数67.00.
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
	ch++;
	//字符变量'C'被转换成整数67,加1.
	//计算结果是4字节整数68,被截断成1字节存储在ch中.
	//根据%c转换说明打印时,68被解释成'D'的ASCII码.
	i = fl + 2 * ch; 
	//ch的值被转换成4字节的整数（68），然后2乘以ch。  只有在运行前才会转换
	//为了和fl相加，乘积整数（136）被转换成浮点数。
	//计算结果（203.00f）被转换成int类型，并存储在i中。
	fl = 2.0 * ch + i;
	//ch的值（'D'，或68）被转换成浮点数，然后2乘以ch。
	//为了做加法，i的值（203）被转换为浮点类型。
	//计算结果（339.00）被存储在fl中。
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
	ch = 1107;//ch的值是1107 % 256，即83。
	printf("Now ch = %c\n", ch);
	ch = 80.89;//把ch设置为一个浮点数，发生截断后，ch的值是字符P的ASCII码。
	printf("Now ch = %c\n", ch);

	return 0;
}