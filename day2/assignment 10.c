#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value for a:");
	scanf("%d",&a);
	printf("enter value for b:");
	scanf("%d",&b);
	printf("before swapping:a=%d,b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swapping:a=%d,b=%d",a,b);
	return 0;
}