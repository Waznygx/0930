#include<stdio.h>

//#define VAL 5
//int main()
//{
//	float val[VAL] = { 0 };
//	float* vp = 0;
//	for ( vp = &val[0]; vp < &val[VAL];)
//	{
//		*vp++;
//		printf("%f ", vp);
//	}
//	return 0;
//}
////�����0.000000 0.000000 0.000000 0.000000 0.000000

//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - s;
//}
//int main()
//{
//	char arr[] = "hello world";
//	char* s = arr;
//	printf("%d ", my_strlen(s));
//	return 0;
//}
////�����11

//#define VAL 5
// int main()
//{
//	float val[VAL] = { 0 };
//	float* vp = 0;
//	for ( vp = &val[VAL - 1];vp>= &val[0];vp-- )
//	{
//		*vp = 0;
//		printf("%f ", vp);
//	}
//	return 0;
//}
////�����0.000000 0.000000 0.000000 0.000000 0.000000

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < length; i++)
//	{
//		//printf("%d ", *(p + i));
//		//printf("%d ", p[i]);
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////�����1 2 3 4 5 6 7 8 9 10

//char test(char** str)
//{
//	while (**str != '\0')
//	{
//		(*str)++;
//	}
//	return str;
//}
//int main()
//{
//	char arr[] = "hello world";
//	char* p = arr;
//	test(&p);
//	return 0;
//}

//int main()
//{
//	char ch = 'c';
//	char* pc = &ch;
//	printf("%c\n", *pc);
//	*pc = 'w';
//	printf("%c\n", *pc);
//	return 0;
//}
////�����c
////      w

//int main()
//{
//	const char* pstr = "hello world";
//	printf("%s\n", pstr);
//	printf("%c\n", *pstr);
//	return 0;
//}
////�����hello world
////       h

//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	const char* str3 = "hello world";
//	const char* str4 = "hello world";
//	printf("str1 = %p\n", &str1);
//	printf("str2 = %p\n", &str2);
//	printf("str3 = %p\n", *str3);
//	printf("str4 = %p\n", *str4);
//	//�����str1 = 00000091A858FB48
//	//		str2 = 00000091A858FB78
//	//		str3 = 0000000000000068
//	//  	str4 = 0000000000000068
//	// 
//	//if (str1 == str2)
//	//{
//	//	printf("str1 = str2\n");
//	//}
//	//else
//	//{
//	//	printf("str1 != str2\n");
//	//}
//	//if (str3 == str4)
//	//{
//	//	printf("str3 = str4\n");
//	//}
//	//else
//	//{
//	//	printf("str3 != str4\n");
//	//}
//	return 0;
//}
////�����str1 != str2
////       str3 = str4

//int main()
//{
//	int* p1[10];//����
//	int(*p2)[10];//ָ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr=%p\n", arr);
//	printf("&arr=%p\n", &arr);//ͬ��
//	printf("arr+1=%p\n", arr+1);//��һ����ַ+4
//	printf("&arr+1=%p\n", &arr+1);//��һ����ַ+4
//	return 0;
//}
//�����arr=000000F5265BFB78
//      &arr = 000000F5265BFB78
//      arr + 1 = 000000F5265BFB7C
//      &arr + 1 = 000000F5265BFBA0

//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for ( i = 0; i < row; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);//arr[i][j]==*(*(arr+i)j)==*(p[i]+j)==p[i][j]
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);
//	print_arr2(arr, 3, 5);
//	return 0;
//}
////�����
////1 2 3 4 5
////6 7 8 9 10
////0 0 0 0 0
////1 2 3 4 5
////6 7 8 9 10
////0 0 0 0 0

int main()
{
	int arr[5];//arr���������顣���5��Ԫ�أ�ÿ��Ԫ��������int
	int* p1[10];//p1��ָ�����顣���10��Ԫ�أ�ÿ��Ԫ��������int*
	int(*p2)[10];//p2������ָ�롣ָ��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ��������int
	int(*p3[10])[5];//p3��ָ�����顣���10��Ԫ�أ�ÿ��Ԫ��������������ָ��pp��ppָ��5��Ԫ�أ�ÿ��Ԫ�������������飬����������int
	return 0;
}