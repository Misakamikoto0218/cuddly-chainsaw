#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void test()
{
	static int a = 1;
	a++;
	printf("%d", a);

}
int main()
{
	int x = 0;
	while (x < 10)
	{
		test();
		x++;
	}
	return 0;
}