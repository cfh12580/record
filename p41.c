#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (b > a)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (c > a)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (c > b)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a=1;a<101;a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	scanf("%d%d", &m, &n);
//	if (m > n)
//	{
//		max = n;
//	}
//	else
//	{
//		max = m;
//	}
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("%d\n", max);
//			break;
//		}
//		max--;
//	}
//	
//	return 0;
//}

////zuidagongyueshu
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	scanf("%d%d", &m, &n);
//	while (max = m % n)
//	{
//		m = n;
//		n = max;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//zuixiaogongbeishu
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	int bei = 0;
//	scanf("%d%d", &m, &n);
//	int M = m;
//	int N = n;
//	while (max = m % n)
//	{
//		m = n;
//		n = max;
//	}
//	bei = (M * N) / n;
//	printf("%d,%d\n", n,bei);
//	return 0;
//}