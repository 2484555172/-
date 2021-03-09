#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>

//计算两数的和
int Add(int a, int b)   //定义一个函数
{
	int c = 0;
	c = a + b;
	return c;
}

int main(void)
{

	int i = 0;
	int j = 0;
	int sum = 0;
	scanf("%d%d", &i, &j);
	sum = Add(i, j);
	printf("%d", sum);
	return 0;
}










//矩阵输入与打印
//#define N  3
//#define M  3

//int main(void)
//{
//	int arr[N][M] = { 0 };
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	printf("\n");
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#define m 100

//int main(void)
//{
//	for (int i = 0; i < m; i++)
//	{		
//		for (int j = 0; j < m - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < m-1; i++)
//	{
//		for (int j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * m - 3 - 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

