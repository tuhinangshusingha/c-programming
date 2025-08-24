#include<stdio.h>
int main()
{
	float r,pi=3.14,a;
	printf("enter radius of the circle:");
	scanf("%f",&r);
	a=pi*r*r;
	printf("area of the circle=%.2f",a);
	return 0;
}