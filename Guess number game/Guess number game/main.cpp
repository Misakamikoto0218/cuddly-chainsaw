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
		printf("猜一个数字：");
		scanf("%d", &guess);
		if (target > guess)
		{
			printf("输入的数字小了\n");
		}
		else if (target < guess)
		{
			printf("输入的数字大了\n");
		}
		else
		{
			printf("输入的数字正确\n");
			break;
		}
		count++;
	}
	printf("总共猜了%d次\n", count);

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
			printf("游戏结束\n");
			break;
		default:
			printf("请重新选择\n");
			break;

		}
	} while (n);
	return 0;
}