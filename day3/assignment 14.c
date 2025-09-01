#include<stdio.h>
#include<math.h>
int main()
{
    float pn,nn;   
    float f,c,f1,c1;
	printf("Enter a positiive number:");
    scanf("%f", &pn);
    printf("Enter a negative number:");
    scanf("%f", &nn);
	f=floor(pn);  
    c=ceil(pn);
	f1=floor(nn); 
	c1=ceil(nn);  
	printf("floor value for a positive number:%f",f);
    printf("\nceilingvalue for positive number:%f",c);
    printf("\nfloor value for a negative number:%f",f1);
    printf("\nceiling value for a negative number:%f",c1);
    return 0;
}