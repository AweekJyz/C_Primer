// strings.c 
#include<stdio.h>
#define MSG "I am a symbolic strings constant. "
#define MAXLENGTH 81
int main(void)
{
	char words[MAXLENGTH] = "I am a string in an array. ";
	const char* pt1 = "Something is pointing at me. ";
	puts("Here are some strings:");
	puts(MSG);
	puts(words);
	puts(pt1);
	words[8] = 'p';
	puts(words);

	/* strptr.c -- 把字符串看作指针 */
	printf("%s, %p, %c\n", "We", "are", *"space farers");

	// addresses.c -- 字符串的地址
#define MSG1 "I'm special"

	char ar[] = MSG1;
	const char* pt = MSG1;
	printf("address of \"I'm special\": %p \n", "I'm special");
	printf(" address ar: %p\n", ar);//就ar不一样, 它是复制出来的一份
	printf(" address pt: %p\n", pt);
	printf(" address of MSG: %p\n", MSG1);
	printf("address of \"I'm special\": %p \n", "I'm special");

	int i;
	char heart[] = "I love Tillie!";
	const char* head = "I love Millie!";//推荐把指针初始化为字符串字面量时使用const限定符
	//两者都可以使用数组表示法：
	for (i = 0; i < 6; i++)
		putchar(heart[i]);
	putchar('\n');
	for (i = 0; i < 8; i++)
		putchar(head[i]);
	putchar('\n');
	//两者都能进行指针加法操作：
	for (i = 0; i < 6; i++)
		putchar(*(heart + i));
	putchar('\n');
	for (i = 0; i < 8; i++)
		putchar(*(head + i));
	putchar('\n');
	//只有指针表示法可以进行递增操作：
	while (*(head) != '\0') /* 在字符串末尾处停止*/
		putchar(*(head++)); /* 打印字符，指针指向下一个位置 */
	putchar('\n');
	head = "I love Millie!";//恢复初始值
	//head = heart;//但不能heart = head;
	heart[7] = 'm';
	for (i = 0; i < 8; i++)
		putchar(heart[i]);
	putchar('\n');
	*(heart + 9) = 'L';
	//head[7] = 'p'//就算head不是const也会内存访问错误, 因为这是更改在静态储存空间的共用值
	for (i = 0; i < 10; i++)
		putchar(head[i]);
	putchar('\n');
	for (i = 0; i < 10; i++)
		putchar(heart[i]);
	putchar('\n');
	char* p1 = "Klingon";
	p1[0] = 'F'; // ok?  不可以编译不通过
	printf("Klingon");
	printf(": Beware the %ss!\n", "Klingon");
	putchar('\n');

	return 0;
}