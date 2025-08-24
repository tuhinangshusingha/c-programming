#include<stdio.h>
int main()
{
	float c,f;
	printf("enter temperature in fahrenheit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("fahrenheit to celcius:%.2f",c);
	printf("\nenter temperature in celcius:");
	scanf("%f",&c);
	f=(c*9)/5+32;
	printf("celcius to fahrenheit:%.2f",f);
	return 0;
}