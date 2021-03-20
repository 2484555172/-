#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//输入一行电报文字，将字母变成其下一字母（如’a’变成’b’……’z’变成’ａ’其它字符不变）。

//int main(void)
//{
//	char arr[100];
//	gets(arr);
//	for (int i = 0; i < strlen(arr); i++)
//	{
//		if (isalpha(arr[i]))
//		{
//			if (arr[i] == 'z')
//			{
//				arr[i] = 'a';
//			}
//			else
//			{
//				arr[i] += 1;
//			}
//		}
//	}
//	puts(arr);
//	return 0;
//}

//int main(void)
//{
//	int i;
//	char array[80];
//	while (gets(array))
//	{
//		for (i = 0; i < strlen(array); i++)
//		{
//			if (array[i] != 32)
//				putchar(array[i]);
//		}
//		putchar('\n');
//	}
//	return 0;
//}


//int main(void)
//{
//	char arr[100];
//	int alpha, brank, num, other;
//	alpha = 0; brank = 0;
//	num = 0; other = 0;
//	gets(arr);
//	for (int i = 0; i < strlen(arr); i++)
//	{
//		if (isalpha(arr[i]))  //判断字母
//		{
//			alpha++;
//		}
//		else if (arr[i] == ' ')  //判断空格
//		{
//			brank++;
//		}
//		else if (isalnum(arr[i]))   //判断数字
//		{
//			num++;
//		}
//		else
//		{
//			other++;
//		}
//	}
//	printf("%d\n", alpha);
//	printf("%d\n", brank);
//	printf("%d\n", num);
//	printf("%d\n", other);
//	return 0;
//}

//求1+2!+3!+4!+…+30!
//科学计数法，保留两位小数

//double fact(int k)
//{
//	if (1 == k)
//	{
//		return 1;
//	}
//	else
//	{
//		return k * fact(k - 1);
//	}
//}
//
//
//int main(void)
//{
//	int n;
//	double sum = 0;
//	for (int i = 1; i <= 30; i++)
//	{
//		sum += fact(i);
//	}
//	printf("%0.2e", sum);
//	return 0;
//}


//输入一个正数x和一个正整数n，求下列算式的值。要求定义两个调用函数：
//fact(n)计算n的阶乘；mypow(x, n)计算x的n次幂（即xn）
//两个函数的返回值类型是double。
//x - x2 / 2!+ x3 / 3!+ ... + (-1)n - 1xn / n!
//×输出保留4位小数。

//double fact(int k)
//{
//	if (1 == k)
//	{
//		return 1;
//	}
//	else
//	{
//		return k * fact(k - 1);
//	}
//}
//
//double mypow(double x, int n)
//{
//	if (1 == n)
//	{
//		return x;
//	}
//	else
//	{
//		return x*mypow(x, n - 1);
//	}
//}
//
//int main(void)
//{
//	double x; int n;
//	double sum1, sum2, sum;
//	sum1 = 0; sum2 = 0; sum = 0;
//	scanf("%lf%d", &x, &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum1 += mypow(x, i) / fact(i);
//		}
//		else
//		{
//			sum2 += mypow(x, i) / fact(i);
//		}
//	}
//	sum = sum2 - sum1;
//	printf("%0.4lf", sum);
//	return 0;
//}






//编写程序，输入一个正整数n，求下列算式的
//要求定义和调用函数fact(k)计算k的阶乘
//函数返回值的类型是double。
//1+1/2+ .... +1/n!

//double fact(int k)
//{
//	if (1 == k)
//	{
//		return 1;
//	}
//	else
//	{
//		return k * fact(k - 1);
//	}
//}
//
//int main(void)
//{
//	int n;
//	double ret = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum += 1 / fact(i);
//	}
//	
//	printf("sum=%0.5lf", sum);
//	return 0;
//}