#include <stdio.h>
#include <math.h>
int main() 
{
    float p,r,t,ci,a;
    int n; 
    printf("Enter principal:");
    scanf("%f",&p);
    printf("Enter rate:");
    scanf("%f",&r);
	printf("Enter time:");
    scanf("%f",&t);
	printf("Enter number of times interest is compounded per year:");
    scanf("%d",&n);
    a=p*pow((1+(r/(n*100))),n*t);
	ci=a-p;
	printf("\nCompound Interest = %.2f",ci);
    return 0;
}
