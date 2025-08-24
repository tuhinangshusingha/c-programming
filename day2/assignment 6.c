#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("enter principle:");
	scanf("%f",&p);
	printf("enter rate:");
	scanf("%f",&r);
	printf("enter time:");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("si=%.2f",si);
	return 0;
}