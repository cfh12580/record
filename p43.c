#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int y = 0;
//	int z = 0;
//	for (y = 1000; y < 2001; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			z++;
//		}
//	}
//	printf("\n%d\n", z);
//
//	return 0;
//}
//
//int main()
//{
//	int s = 0;
//	int j = 0;
//
//	for (s = 100; s < 201; s++)
//	{
//		for (j = 2; j < s; j++)
//		{
//			if (s % j == 0)
//			{
//				break;
//			}
//		}
//		if (s == j)
//		{
//			printf("%d ", j);
//		}
//	}
//	return 0;
//}

#include<math.h>

//int main()
//{
//	int i = 0;
//
//	for (i = 101; i < 201; i+=2)//shengji
//	{
//		int j = 0;
//		int f = 1;
//		for (j = 2; j <= sqrt(i); j++)//shengji
//		{
//			if (i % j == 0)
//			{
//				f = 0;
//				break;
//			}
//		}
//		if (f == 1)
//		{
//			printf("%d %d\n", i,j);
//
//		}
//	}
//	return 0;
//}
#include<string.h>
#include<stdlib.h>//system()

//int main()
//{
//	char m[20] = { 0 };
//	system("shutdown -a -t 60");
//	while (1)
//	{
//		printf("shuru<woshizhu>quxiaoguanji\n");
//		scanf("%s", m);
//
//		if (strcmp(m, "woshizhu") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
int main()
{
	char m[20] = { 0 };
	system("shutdown -a -t 60");
	p:
	printf("shuru<woshizhu>quxiaoguanji\n");
	scanf("%s", m);
	if (strcmp(m, "woshizhu") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto p;
	}
	return 0;
}