#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int count = 0;
void menu()
{
	printf("*******************\n");
	printf("*****1.start*******\n");
	printf("*****2.exit********\n");
	printf("*******************\n");
}
void game()
{
	int target = rand() % 100 + 1; int guess = 0; 
	while (1)
	{
		printf("��һ�����֣�");
		scanf("%d", &guess);
		if (target > guess)
		{
			printf("���������С��\n");
		}
		else if (target < guess)
		{
			printf("��������ִ���\n");
		}
		else
		{
			printf("�����������ȷ\n");
			break;
		}
		count++;
	}
	printf("�ܹ�����%d��\n", count);

}
int main()
{
	int n = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &n);
		switch (n)
		{
		case(1):
				game();
		case(2):
			printf("��Ϸ����\n");
			break;
		default:
			printf("������ѡ��\n");
			break;

		}
	} while (n);
	return 0;
}