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
	//��C99��׼֮ǰ������Ĵ�С�����ǳ��������ǳ������ʽ
	//��C99��׼֮������Ĵ�С�����Ǳ�����Ϊ��֧�ֱ䳤����
	return 0;
}*/

/*
int main()
{
	int arr[10] = {1,2,3};//����ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	int arr1[10] = { 1,2,3,4,5,6,7,8,9};
	char ch1[9] = { 'a','b','c' };
	char ch2[9] = "abc";
	return 0;
}*/


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//[] - �±����ò�����
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10Ԫ��
//	//��ӡ�����Ԫ�ص�ÿ����ַ
//	//����������±��������Ԫ�صĵ�ַ���й��ɵĵ������������ڴ�����������ŵ�
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
//��ά����Ĵ���
int main()
{
	//int arr[3][4];//arr[����] [����]
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
//����Խ��
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
//���鴫�ε�ʱ���β���2��д��
//1.����
//2.ָ��
//

/*
//�β����������ʽ
//ð������ĺ���˼�룺��������Ԫ�ؽ��бȽ�
//��������������������Ԫ�صĵ�ַ
//��ַ��Ӧ��
//�β���ָ�����ʽ
void bubble_sort(int* arr,int sz)
{
	//����
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) 
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//����
	//����������ų�����
	int arr[] = { 5,9,8,2,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ð��������㷨���������������
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
//������ȷʵ���Ա�ʾ��Ԫ�ص�ַ
//�������������⣺
//1.sizeof(������)���������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&���������������������ʾ�������飬ȡ��������������ĵ�ַ
//
int main()
{
	int arr[10];
	printf("%p\n", arr);//arr������Ԫ�صĵ�ַ
	printf("%p\n", arr+1);
	printf("------------------\n");
	printf("%p\n", &arr[0]);//��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]+1);
	printf("------------------\n");
	printf("%p\n", &arr);//����ĵ�ַ
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

	arr;//��ά�����������Ҳ��ʾ������Ԫ�صĵ�ַ
	printf("%p\n",arr );
	printf("%p\n", &arr[0]);

	//��ӡ����
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));
	//��ӡ����
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	return 0;
}