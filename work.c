#define _CRT_SECURE_NO_WARNINGS 

#include "test.h"

void Swap(int arr[], int a, int b)
{
	int tem = 0;
	tem = arr[a];
	arr[a] = arr[b];
	arr[b] = tem;
}

void Print(int arr[],int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
}

void Sort_1(int arr[], int N)
{
	for (int i = 1; i < N; i++)
	{
		int minpos = i - 1;
		for (int j = i; j < N; j++)
		{
			if (arr[minpos] > arr[j])
			{
				minpos = j;
			}
		}
		Swap(arr, i - 1, minpos);
	}
}  //—°‘Ò≈≈–Ú

void Sort_2(int arr[], int N)
{
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(arr, j, j + 1);
			}
		}
	}
}

void Sort_3(int arr[], int N) 
{
	for (int i = 1; i < N; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				Swap(arr, j, j - 1); 
			}
		}
	}
}  //≤Â»Î≈≈–Ú

void Sort_4(int arr[], int N)
{
	int t = 1;
	while (t <= N / 3)
	{
		t = 3 * t + 1;
	}
	for (int h = t; h > 0; h = (h - 1) / 3)
	{
		for (int i = h; i < N; i++)
		{
			for (int j = i; j > h - 1; j -= h)
			{
				if (arr[j] < arr[j - h])
				{
					Swap(arr, j, j - h);
				}
			}
		}
	}

}  //œ£∂˚≈≈–Ú