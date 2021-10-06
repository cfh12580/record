#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//		int i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		if (i==3)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i,n;
//	int sum = 1;
//	scanf("%d", &n);
//
//		for (i = 1;i < n + 1; i++)
//		{
//			sum *= i;//sum = sum * i;
//		}
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	int j = 0;
//		scanf("%d", &n);
//
//		for (i = 1; i <= n; i++)
//		{
//			sum *= i;
//			j += sum;
//		}
//		printf("%d %d\n", j,sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int cheng = 1;
//	int he = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		cheng = 1;
//		for (i = 1; i <= n; i++)
//		{
//			cheng *= i;
//		}
//			he += cheng;
//	}
//	printf("%d\n", he);
//}

//erfenchazhao
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("site: %d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("nothing\n");
//	}
//	return 0;
//}