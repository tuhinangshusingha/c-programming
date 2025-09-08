#include<stdio.h>
int main()
{
	int b;
	float a,c;
	printf("enter a number:");
	scanf("%f",&a);
	b=a;
	c=a-b;
	if(a>0&&c==0)
	{
		printf("whole number");
	}
	else
	{
		printf("not a whole number");
	}
}