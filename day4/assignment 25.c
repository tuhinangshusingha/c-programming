#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 different numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greatest: %d",a);
		}
		else
		{
			printf("c is greatest: %d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is greatest: %d",b);
		}
		else
		{
			printf("c is greatest: %d",c);
		}
	}
}