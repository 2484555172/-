#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



int main(void)
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10-1 - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}








//int main(void)
//{
//
//
//		printf("������ �֩� �������֩� �q�r\n");
//		printf("������ ���� �����©ީ�    \ /\n");
//		printf("�����������c ������ ��\n");
//		printf(" _  _              \n");
//		printf("�q���������r\n");
//		printf("���������������������r\n");
//		printf("�q�ة�����          ���r\n");
//		printf("����辶          �� ��\n");
//		printf("�t���Щ��s          ��\n");
//		printf("    HAPPY  NEW    YEAR\n"); 
//	
//
//	return 0;
//}






