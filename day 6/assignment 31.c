#include <stdio.h>
int main() 
{
    int num, i;
	printf("Enter a number to print its multiplication table: ");
    if (scanf("%d", &num) != 1) 
	{
        printf("Invalid input! Please enter a valid number.\n");
        return 1;
    }
	printf("\nMultiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}