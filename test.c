#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define M 3
#define N 3
int main(void)
{	
	int arr[M][N] = { 0 };
	int temp[M][N] = { 0 };
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			temp[i][j] = arr[j][i];
		}
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("	%d", temp[i][j]);
		}
	 printf("\n");
	}
		return 0;
}


//int main(void)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 5; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void menu()
//{
//	printf("***********************************\n");
//	printf("***      1.play 0.exit        *****\n");
//	printf("***********************************\n");
//}

//void Rand()
//{
//	int i = rand()%6;
//	printf("\n����:");
//	if (i == 0)
//	{
//		printf("��ү\n");
//	}
//	if (i == 1)
//	{
//		printf("Сү\n");
//	}
//	if (i == 2)
//	{
//		printf("ʯ��\n");
//	}
//	if (i == 3)
//	{
//		printf("��sir\n");
//	}
//	if (i == 4)
//	{
//		printf("����\n");
//	}
//	if (i == 5)
//	{
//		printf("̫��\n");
//	}
//}


//void Test()
//{
//	int input = 0;
//	char arr[100];
//	do
//	{
//		menu();
//		printf("������:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Rand();
//			break;
//		case 0:
//			printf("�˳��齱");
//			break;
//		default:
//			printf("�������,����������!!!\n");
//			break;
//		}
//		
//	} while (input);
//}

//int main(void)
//{
//	srand((unsigned)time(NULL));
//	Test();
//	return 0;
//}






//#define m 100
//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m - i; j++)
//		{
//			printf(" ");
//		}
//		ch += 1;
//		for (int j = 0; j <2*i+1; j++)
//		{
//			if (j == 0 || j == 2 * i)
//			{
//				printf("%c", ch);
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < m-1; i++)
//	{
//		for (int j = 0; j <= 1 + i; j++)
//		{
//			printf(" ");
//		}
//		ch -= 1;
//		for (int j = 0; j <2*m-3-2*i; j++)
//		{
//			if (j == 0||j==2*m-4-2*i )
//			{
//				printf("%c", ch);
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#define m 10
//int main(void)
//{
//	int a = 1;
//	for (int i = 0; i < m; i++)
//	{
//		a = i+1;
//		for (int j = 0; j < m-i; j++)
//		{
//			printf("%d ", a);
//			a += 1;
//		}
//		a = 1;
//		for (int j = 0; j < i ; j++)
//		{
//			printf("%d ", a);
//			a += 1;
//		}
//		printf("\n");
//	}
//
//	return 0;
//}