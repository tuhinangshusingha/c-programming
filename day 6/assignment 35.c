#include<stdio.h>
int main()
{
	int a,b,i,j,c=0;
	printf("enter range:");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=a;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}