#pragma once
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define	HOTEL3 255.00
#define	HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "******************************"

//��ʾѡ���б�
int menu(void);

//����Ԥ������
int getnights(void);

//���ݷ���,��ס����������ò���ʾ���
void showprice(double rate, int nights);
