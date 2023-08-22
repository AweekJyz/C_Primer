// vowels.c -- ʹ�ö��ر�ǩ
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int a_ct, e_ct, i_ct, o_ct, u_ct;

	a_ct = e_ct = i_ct = o_ct = u_ct = 0;

	printf("Enter some text; enter # to quit. \n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case 'a'://���ر�ǩ, ԭ��: û��break���Զ�����һ�����, �γ��˶��ֱ�ǩ������. 
		case 'A': 
			a_ct++;
			break;
		case'e':
		case'E':
			e_ct++;
			break;
		case 'i':
		case 'I': 
			i_ct++;
			break;
		case 'o':
		case 'O': 
			o_ct++;
			break;
		case 'u':
		case 'U': 
			u_ct++;
			break; //����ʡ��, �������������Ӵ������չ��, ����case'U'���������������case. 
		default:
			break;
		}
	}
	printf("number of vowels: A E I O U\n");
	printf(" %4d %4d %4d %4d %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);

	while ((ch = getchar()) != '#')
	{
		ch = toupper(ch);//��ʽ�����������, ����Сд����ɴ�д, ʹ�ô������ݸ��Ӽ��. 
		switch (ch)
		{
		case 'A': a_ct++;
			break;
		case 'E': e_ct++;
			break;
		case 'I': i_ct++;
			break;
		case 'O': o_ct++;
			break;
		case 'U': u_ct++;
			break;
		default: break;
		} // switch����
	} // whileѭ������
	printf("number of vowels: A E I O U\n");
	printf(" %4d %4d %4d %4d %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);

	return 0;
}