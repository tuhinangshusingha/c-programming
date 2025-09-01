#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,discriminant,x1,x2;
	printf("enter the coefficients a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	discriminant=(b*b)-(4*a*c);
	x1=-(b+sqrt(discriminant))/2*a;
	x2=-(b-sqrt(discriminant))/2*a;
	printf("root1=%.2f",x1);
	printf("root2=%.2f",x2);
	return 0;
}