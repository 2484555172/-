#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main(void)
{
	return 0;
}

//����һ���ַ���,�������е���ĸ�ĸ���
int main(void)
{
	char arr[100];
	int count = 0;
	gets(arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] >= 'A'&&arr[i] <= 'z')
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}



//����һ���ַ�,�����еĴ�д���Сд
//����Ϊ��д��ԭ�����
//int main(void)
//{
//	char a[100];
//	gets(a);
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (a[i] >= 'A'&&a[i] <= 'Z')
//			a[i] += 32;
//	}
//	puts(a);
//	return 0;
//}


//int main(void)
//{
//	int arr[10] = { 1,2,9,4,3,7,9,4,5,3 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 1+i; j < 10; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				printf("%d ", arr[i]);
//			}
//		}
//	}
//	return 0;
//}