#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//����һ�е籨���֣�����ĸ�������һ��ĸ���硯a����ɡ�b��������z����ɡ��ᡯ�����ַ����䣩��

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
//		if (isalpha(arr[i]))  //�ж���ĸ
//		{
//			alpha++;
//		}
//		else if (arr[i] == ' ')  //�жϿո�
//		{
//			brank++;
//		}
//		else if (isalnum(arr[i]))   //�ж�����
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

//��1+2!+3!+4!+��+30!
//��ѧ��������������λС��

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


//����һ������x��һ��������n����������ʽ��ֵ��Ҫ�����������ú�����
//fact(n)����n�Ľ׳ˣ�mypow(x, n)����x��n���ݣ���xn��
//���������ķ���ֵ������double��
//x - x2 / 2!+ x3 / 3!+ ... + (-1)n - 1xn / n!
//���������4λС����

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






//��д��������һ��������n����������ʽ��
//Ҫ����͵��ú���fact(k)����k�Ľ׳�
//��������ֵ��������double��
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