#include<stdio.h>
int main()
{
	int a,ld;
	printf("enter a number:");
	scanf("%d",&a);
	printf("\nwithout using modulus operator:");
	ld=a-(a/10)*10;
	printf("\nlast digit=%d",ld);
	printf("\nenter a number:");
	scanf("%d",&a);
	printf("\nusing modulus operator:");
	ld=a%10;
	printf("\nlast digit=%d",ld);
	return 0;
}