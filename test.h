#pragma once
#include <stdio.h>
/*         ʱ�临�Ӷ�(ave)       �ȶ���
ѡ������		n*n					0
ð������		n*n				     1
��������*	n*n                   1
  ������*    n*log2n               0
ϣ������		n~1.3				0
�鲢����*    n*log2n               0
��������*    n*log2n			    1
  Ͱ����		n+k					1
��������		n+k					1
��������		n*k					1
*/


void Print(int arr[],int N);         //���ڴ�ӡ����
void Swap(int arr[], int a, int b);  //����ֵ
void Sort_1(int arr[], int N);      //ѡ������
void Sort_2(int arr[], int N);     //ð������
void Sort_3(int arr[], int N);     //��������
void Sort_4(int arr[], int N);




