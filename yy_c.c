#include<stdio.h>
int ADD()
{
	int a, b;
	a = 0, b = 0;
	scanf_s("%d %d", &a, &b);
	return (a + b);

}
int  MAX()
{
	int a, b ;
	scanf_s("%d %d", &a, &b);
	return (a >= b ? a : b);

}
int AXC()
{
	int arr[5];
	int i, j;
	for ( i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	j = arr[0];
	for (i = 0; i < 5; i++)
	{
		if (arr[i] > arr[0])
			j = arr[i];
	}
	return j;
}
int main()
{
	/*printf("hello,world");*/
	//printf("请输入两个数，相加得：%d/n", ADD());
	/*printf("请输入两个数，最大值：%d/n", MAX());*/
	//printf("给数组输入5个数据,并且最大值为%d/n",AXC());
	return 0;
}

//c语言程序书中的第一章， 里面的题（运用了函数封装的思想）
// 在printf函数中直接输出了其他自定义的函数返回值，防止中间商
//AXC函数并不是