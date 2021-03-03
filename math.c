#define _CRT_SECURE_NO_WARNINGS 1
#include"work.h"


int main(void)
{
	int a[M][S] = { 0 };
	int b[S][N] = { 0 };
	int temp[M][N] = { 0 };
	Input(a); Input_s(b);
//	Print(a); Print_s(b);
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			temp[i][j] = Add_Jz(a, b, i, j);
		}
	}
	Printf(temp);
	return 0;
}