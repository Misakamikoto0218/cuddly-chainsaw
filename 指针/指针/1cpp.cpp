#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 2;
	int* p = &a;
	*p = 100;
	printf("%d\n", a);
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int));
	return 0;
}