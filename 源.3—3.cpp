# include<stdio.h>
# include<string>
# include<assert.h>
# include<stdlib.h>

int* ass(int arr1[],int t,int s)
{
	int d, f,g;
	d = 0, f = t-1;
	while (d <= f)
	{
		int min = (d + f) / 2;
		if (s < arr1[min])
			f = min - 1;
		else if (s > arr1[min])
			d = min + 1;
		else
			return &arr1[min];
	}
	return NULL;
}

int main()
{
	int s = 0;
	char arr[] = {1,2,3,4,5,6,7,8,9,10,0}; //����һ�����������.
	int t = strlen(arr);
	printf("��������Ҫ��ѯ�����֣�>");
	scanf_s("%d",&s);
	system("cls");
    ass((int*)arr, t, s);
	return 0;
}