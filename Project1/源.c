#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	int arr[10];
	char ch[5];
	double data[15+5];

	int n = 10;
	int arr2[n];
	//在C99标准之前，数组的大小必须是常量或者是常量表达式
	//在C99标准之后，数组的大小可以是变量，为了支持变长数组
	return 0;
}*/

/*
int main()
{
	int arr[10] = {1,2,3};//不完全初始化，剩余元素默认初始化为0
	int arr1[10] = { 1,2,3,4,5,6,7,8,9};
	char ch1[9] = { 'a','b','c' };
	char ch2[9] = "abc";
	return 0;
}*/


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//[] - 下标引用操作符
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10元素
//	//打印数组的元素的每个地址
//	//随着数组的下标的增长，元素的地址在有规律的递增：数组在内存中是连续存放的
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}*/
//
//	/*for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	return 0;
//}

/*
//二维数组的创建
int main()
{
	//int arr[3][4];//arr[行数] [列数]
	//char ch2[3][4];
	//int arr3[][4] = { {1,2,3,4},{1,2} };
	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i,j,&arr[i][j]);
		}
		printf("\n");
	}

	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ",arr[i][j]);
	//	}
	//	printf("\n");
	//}
	return 0;
}
*/

/*
//数组越界
int main()
{
	int arr[] = { 1,2,3,4 };
	int i = 0;
	//0~9
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/

//
//数组传参的时候，形参有2种写法
//1.数组
//2.指针
//

/*
//形参是数组的形式
//冒泡排序的核心思想：两个相邻元素进行比较
//数组名本质上是数组首元素的地址
//地址是应该
//形参是指针的形式
void bubble_sort(int* arr,int sz)
{
	//趟数
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) 
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//数组
	//数组的数据排成升序
	int arr[] = { 5,9,8,2,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//冒泡排序的算法，对数组进行排序
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{

		printf("%d", arr[i]);
	}
	return 0;
}
*/

/*
//数组名确实可以表示首元素地址
//但是有两个例外：
//1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//
int main()
{
	int arr[10];
	printf("%p\n", arr);//arr就是首元素的地址
	printf("%p\n", arr+1);
	printf("------------------\n");
	printf("%p\n", &arr[0]);//首元素的地址
	printf("%p\n", &arr[0]+1);
	printf("------------------\n");
	printf("%p\n", &arr);//数组的地址
	printf("%p\n", &arr + 1);

	//int n = sizeof(arr);//
	//printf("%d\n", n);
	return 0;
}
*/
int main()
{
	int arr[3][4];
	/*int sz = sizeof(arr);
	printf("%d\n", sz);*/

	arr;//二维数组的数组名也表示数组首元素的地址
	printf("%p\n",arr );
	printf("%p\n", &arr[0]);

	//打印行数
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));
	//打印列数
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	return 0;
}