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
	//printf("����������������ӵã�%d/n", ADD());
	/*printf("�����������������ֵ��%d/n", MAX());*/
	//printf("����������5������,�������ֵΪ%d/n",AXC());
	return 0;
}

//c���Գ������еĵ�һ�£� ������⣨�����˺�����װ��˼�룩
// ��printf������ֱ������������Զ���ĺ�������ֵ����ֹ�м���
//AXC����������