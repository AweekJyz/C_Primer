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

	/* strptr.c -- ���ַ�������ָ�� */
	printf("%s, %p, %c\n", "We", "are", *"space farers");

	// addresses.c -- �ַ����ĵ�ַ
#define MSG1 "I'm special"

	char ar[] = MSG1;
	const char* pt = MSG1;
	printf("address of \"I'm special\": %p \n", "I'm special");
	printf(" address ar: %p\n", ar);//��ar��һ��, ���Ǹ��Ƴ�����һ��
	printf(" address pt: %p\n", pt);
	printf(" address of MSG: %p\n", MSG1);
	printf("address of \"I'm special\": %p \n", "I'm special");

	int i;
	char heart[] = "I love Tillie!";
	const char* head = "I love Millie!";//�Ƽ���ָ���ʼ��Ϊ�ַ���������ʱʹ��const�޶���
	//���߶�����ʹ�������ʾ����
	for (i = 0; i < 6; i++)
		putchar(heart[i]);
	putchar('\n');
	for (i = 0; i < 8; i++)
		putchar(head[i]);
	putchar('\n');
	//���߶��ܽ���ָ��ӷ�������
	for (i = 0; i < 6; i++)
		putchar(*(heart + i));
	putchar('\n');
	for (i = 0; i < 8; i++)
		putchar(*(head + i));
	putchar('\n');
	//ֻ��ָ���ʾ�����Խ��е���������
	while (*(head) != '\0') /* ���ַ���ĩβ��ֹͣ*/
		putchar(*(head++)); /* ��ӡ�ַ���ָ��ָ����һ��λ�� */
	putchar('\n');
	head = "I love Millie!";//�ָ���ʼֵ
	//head = heart;//������heart = head;
	heart[7] = 'm';
	for (i = 0; i < 8; i++)
		putchar(heart[i]);
	putchar('\n');
	*(heart + 9) = 'L';
	//head[7] = 'p'//����head����constҲ���ڴ���ʴ���, ��Ϊ���Ǹ����ھ�̬����ռ�Ĺ���ֵ
	for (i = 0; i < 10; i++)
		putchar(head[i]);
	putchar('\n');
	for (i = 0; i < 10; i++)
		putchar(heart[i]);
	putchar('\n');
	char* p1 = "Klingon";
	p1[0] = 'F'; // ok?  �����Ա��벻ͨ��
	printf("Klingon");
	printf(": Beware the %ss!\n", "Klingon");
	putchar('\n');

	return 0;
}