#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//写一函数，将两个字符串连接

//#define N 100
//#define M 100
//int main()
//{
//	char arr1[N];
//	char arr2[M];
//	gets(arr1);
//	gets(arr2);
//	int str1 = strlen(arr1);
//	int str2 = strlen(arr2);
//	int n = str1 + str2;
//	for (int i = 0; i < str1; i++)
//	{
//		printf("%c", arr1[i]);
//	}
//	for (int i = 0; i < str2; i++)
//	{
//		printf("%c", arr2[i]);
//	}
//	return 0;
//}









//写一函数，使输入的一个字符串按反序存放         123456abcdef
//在主函数中输入输出反序后的字符串（不包含空格） fedcba654321
//#define N 100
//
//void swaps(char arr[N], int left, int right)
//{
//	int t = 0;
//	t = arr[left];
//	arr[left] = arr[right];
//	arr[right] = t;
//}
//
//void Swap(char arr[N], int K,int M)
//{
//	int left = 0;
//	int right = K-1;
//	while (left <=right)
//	{
//		swaps(arr, left, right);
//		left++; right--;
//	}
//}
//
//int main(void)
//{
//	char arr[N];
//	gets(arr);
//	int 	str = strlen(arr);
//	int m = str / 2;
//	Swap(arr, str,m);
//	for (int i = 0; i < str; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}





//输入数据的个数n 
//n个整数 移动的位置m
//#define N 100
//void Swap(int arr[N],int n,int  m)
//{
//	while (m--)
//	{
//		int t = arr[n - 1];
//		for (int i = n-1; i > 0; i--)
//		{
//			arr[i] = arr[i - 1];
//		}
//		arr[0] = t;
//	}
//}
//
//
//int main(void)
//{
//	int n, m;
//	int arr[N];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	Swap(arr, n, m);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main(void)
//{
//	int sum = 0;
//	for (int i = 1; i <= 10; sum += i++);
//	printf("%d", sum);
//	return 0;
//}





//#define n 8
//
//void RightShift(char arr[n], int N,int K,int M)
//{
//	while (K--)
//	{
//		int t = arr[N - 1];
//		for (int i = N - 1; i > 0; i--)
//		{
//			arr[i] = arr[i - 1];
//		}
//		arr[0] = t;
//	}
//}
//
//int main()
//{
//	char arr[n] = "abcd1234";
//	int m = (int)strlen(arr);
//	RightShift(arr,n,4,m);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}



//int main(void)
//{
//	char words[100] = "Hello World";
//	const char *pt1 = "Hello World";
//	/*puts("Hello World");
//	puts(pt1);
//	puts(words);*/
//	printf("%s %p %c\n", "We", "are", *"space faers");
//
//
//	return 0;
//}