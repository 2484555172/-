#define _CRT_SECURE_NO_WARNINGS 1

#include"work.h"


void Input(int a[M][S])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
}

void Input_s(int b[S][N])
{
	for (int i = 0; i < S; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\n");
}

void Print(int a[M][S])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void Printf(int temp[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", temp[i][j]);
		}
		printf("\n");
	}
}

void Print_s(int b[S][N])
{
	for (int i = 0; i < S; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int Add_Jz(int a[M][S], int b[S][N], int i, int j)
{
	int sum = 0;
	for (int y = 0; y < S; y++)
	{
		sum += a[i][y] * b[y][j];
	}
	return sum;
}

