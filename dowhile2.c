#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<Windows.h>

//int main()
//{
//	int arr[10] = {12,24,34,36,45,56,67,78,89};
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	int left = 0;
//	int right = sz - 1;
//	int k = 56;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("get:%d",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("worry");
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "welcome to yamauti";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//<windows.h>,¼ä¸E
//		system("cls");//Çå¿ÕÆÁÄ»
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	do
//	{
//		printf("qingshurumima:");
//		scanf("%s", password);
//		if (strcmp(password, "1qaz2wsx") == 0)
//		{
//			printf("dengluchenggong^_^\n");
//			break;
//		}
//		else
//		{
//			printf("chongxinshuru>_<\n");
//		}
//		i++;
//	} while (i < 2);
//	for (i = 2; i < 3; i++)
//	{
//		printf("qingshurumima:");
//		scanf("%s", password);
//		if (strcmp(password, "1qaz2wsx") == 0)
//		{
//			printf("dengluchenggong^_^\n");
//			break;
//		}
//		else
//		{
//			printf("denglushibai!_!\n");
//		}
//	}
//	return 0;
//}

#include <stdlib.h>//rand()
#include <time.h>  //time()
//void menu()
//{
//	printf("---------------\n");
//	printf("|   1.start   |\n");
//	printf("|   0.exit    |\n");
//	printf("---------------\n");
//}
//
//void game()
//{
//	int ret = rand()%100+1;
//	int x = 0;
//	while(1)
//	{
//		printf("qingshurushuzi:");
//		scanf("%d", &x);
//		if (x < ret)
//		{
//			printf("xiaole-_-\n");
//		}
//		else if (x > ret)
//		{
//			printf("dale+_+\n");
//		}
//		else
//		{
//			printf("ohhhhhhh!!!!>_<~~~\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("select==>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("thanks~\n");
//			break;
//		default:
//			printf("error! reselect!!\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}