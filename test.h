#pragma once
#include <stdio.h>
/*         时间复杂度(ave)       稳定性
选择排序		n*n					0
冒泡排序		n*n				     1
插入排序*	n*n                   1
  堆排序*    n*log2n               0
希尔排序		n~1.3				0
归并排序*    n*log2n               0
快速排序*    n*log2n			    1
  桶排序		n+k					1
计数排序		n+k					1
基数排序		n*k					1
*/


void Print(int arr[],int N);         //用于打印数组
void Swap(int arr[], int a, int b);  //交换值
void Sort_1(int arr[], int N);      //选择排序
void Sort_2(int arr[], int N);     //冒泡排序
void Sort_3(int arr[], int N);     //插入排序
void Sort_4(int arr[], int N);




