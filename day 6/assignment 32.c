#include <stdio.h>
int main() 
{
    int n, i, sum = 0;
	printf("Enter how many natural numbers to sum: ");
    if (scanf("%d", &n) != 1) 
	{
        printf("Invalid input! Please enter a valid number.\n");
        return 1; 
    }
	if (n <= 0) 
	{
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
	for (i = 1; i <= n; i++) 
	{
        sum += i; 
    }
	printf("Sum of the first %d natural numbers = %d\n", n, sum);
	return 0;
}