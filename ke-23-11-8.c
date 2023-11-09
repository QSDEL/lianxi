#include<stdio.h>

void sun() {
	printf("******************\n");
	printf("  How do you do!  \n");
	printf("******************\n");
}

int max(a, b) {
	return a > b ? a : b;
}

void main() {
	/*sun();*/
	int a, b;
	scanf_s("%d,%d", &a, &b);
	int c = max(a,b);
	printf("%d", c);
}