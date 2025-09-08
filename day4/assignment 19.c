#include<stdio.h>
int main()
{
	char ht;
	printf("enter head or tale(H/h or T/t):");
	scanf("%ch",&ht);
	if(ht=='h'||ht=='H')
	{
		printf("head");
	}
	else if(ht=='t'||ht=='T')
	{
		printf("tale");
	}
}