#include<stdio.h>
int main()
{
	float l,b,a,p;
	printf("enter length of a rectangle:");
	scanf("%f",&l);
	printf("enter breadth of a rectangle:");
	scanf("%f",&b);
	a=l*b;
	p=2*(l+b);
	printf("area=%f",a);
	printf("\nperimeter=%f",p);
	return 0;
}