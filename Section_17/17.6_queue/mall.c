// mall.c -- ʹ�� Queue �ӿ�
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>//rand()srand()
#include <time.h>
#define MIN_PER_HR 60.0

bool newcustomer(double x);//�Ƿ����¹˿͵���
Item customertime(long when);//���ù˿Ͳ���

void mall(void)
{
	Queue line;
	Item temp;//�¹˿�����
	int hours;//ģ��Сʱ��
	int perhour;//ÿСʱ�˿�����
	long cycle, cyclelimit;//ѭ��������, ����������
	double min_per_cust;//��һ���˿���Ҫ��ʱ��
	long turnaways = 0;//���ܹ˿�����
	long customers = 0;//������еĹ˿�����
	int wait_time = 0;//�Ӵ���ǰ�ͻ�ʣ��ʱ��
	long line_wait = 0;//�ۼƵȴ�ʱ��, ���ڼ���ÿ��ƽ���ȴ�ʱ��
	long sum_line = 0;//ÿ���Ӷ��г���֮��, ���ڼ���ƽ�����г���
	long served = 0;//���ŶӵĹ˿�����


	InitializeQueue(&line); 
	srand((unsigned int)time(0));
	puts("Case Study: Sigmund Lander's Advice Booth");
	puts("Enter the number of simulation hours:");
	scanf("%d", &hours);
	cyclelimit = MIN_PER_HR * hours;
	puts("Enter the average number of customers per hour:");
	scanf("%d", &perhour);
	min_per_cust = MIN_PER_HR / perhour;
	
	for (cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (QueueIsFull(&line))
				turnaways++;
			else
			{
				customers++;
				temp = customertime(cycle);
				EnQueue(temp, &line);
			}
		}
		if (wait_time <= 0 && !QueueIsEmpty(&line))
		{
			DeQueue(&temp, &line);
			wait_time = temp.processtime;
			line_wait += cycle - temp.arrive;
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += QueueItemCount(&line);
	}
	if (customers > 0)
	{
		printf("customers accepted: %ld\n", customers);
		printf("	customers served: %ld\n", served);
		printf("		turnaways: %ld\n", turnaways);
		printf("average queue size: %.2f\n",
			(double)sum_line / cyclelimit);
		printf("average wait time: %.2f minutes\n",
			(double)line_wait / served);
	}
	else
		puts("No customers!");
	EmptyTheQueue(&line);
	puts("Bye!");
}
// x�ǹ˿͵�����ƽ��ʱ�䣨��λ�����ӣ�
// ���1�������й˿͵������򷵻�true
bool newcustomer(double x)
{
	if (rand() * x / RAND_MAX < 1)
		return true;
	else
		return false;
}
// when�ǹ˿͵�����ʱ��
// �ú�������һ��Item�ṹ���ù˿͵����ʱ������Ϊwhen��
// ��ѯʱ������Ϊ1��3�����ֵ
Item customertime(long when)
{
	Item cust;
	cust.processtime = rand() % 3 + 1;
	cust.arrive = when;
	return cust;
}