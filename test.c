
//#include <math.h>
//
//int Add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//    scanf_s("%d %d", &a, &b);
//	system("cls");            //清空屏幕
//	int z = Add (a, b);
//	printf("%d" ,z);
//return 0;
//}
//# include <stdio.h>
//int main()
//{
//    int x = 0;
//    for (x = 1; x <= 9; x++)
//    {
//        int y = 0;
//        for (y = 1; y <= x; y++)
//        {
//            printf("%d*%d=%-2d ", x, y, x * y);
//        }
//        printf("\n");
//    }
//     return 0; 
//}
//#include <stdio.h>
//#include <math.h>

//int main()
//{
//	int a, b, c, t;
//	a = 12, b = 22, c = 11;
//	if (a >= b)
//	{
//		if (a >= c)
//
//			t = a;
//		else
//			t = c;
//	}
//	else if (b >= c)
//		t = b;
//	else
//		t = c;
//	printf("最大值为：%d", t);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	system("cls");
//	int i = 1;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int a, b;
//	scanf_s("%d\n", &a);
//	system("cls");
//	b = (a > 5 ? a + 1 : a - 1);
//	printf("%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//
//void jianche()
//{
//	int a = 1;
//	if (*(char*) &a == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//}
//int main()
//{
//	jianche();
//	return 0;
//}
#include<stdio.h>
int main()
{
	const char* p = "abcdef";
	char* p1 = 'abcd';
	char* p2 = 'abcd';
	int* pr = &p1;
	int* ps = &p2;
	printf('%p', &pr);
	printf('%p', &ps);
	//*p = 'w';
	//printf("%s", p);
	return 0;
}
//# include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%d", strlen(arr));
//}