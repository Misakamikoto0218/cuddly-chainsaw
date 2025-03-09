#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0,1,2,3,4,5,6,7,8,9
//	int n = 0;
//	scanf("%d", &n);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//
//			right = mid - 1;
//		}
//		else 
//		{
//			printf("数的下标是:%d", mid);
//			break;
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;
	scanf("%d", &n);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		int mid = 0;
		mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			printf("数的下标为:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
  }