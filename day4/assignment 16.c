#include<stdio.h>
int main()
{
	int rn;
	printf("enter a roll number:");
	scanf("%d",&rn);
	if(rn==100)
	{
		printf("roll 100 is present");
		return 1;
	}
}