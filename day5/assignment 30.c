#include <stdio.h>
int main() 
{
    int marks;
	printf("Enter marks (0-100): ");
    if (scanf("%d", &marks) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    if (marks < 0 || marks > 100) 
	{
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
    } 
    else 
	{
        if (marks > 89) 
		{
            printf("Grade: O\n");
        } 
        else if (marks > 79) 
		{
            printf("Grade: A+\n");
        } 
        else if (marks > 69) 
		{
            printf("Grade: A\n");
        } 
        else if (marks > 59) 
		{
            printf("Grade: B+\n");
        } 
        else if (marks > 49) 
		{
            printf("Grade: B\n");
        } 
        else if (marks > 39) 
		{
            printf("Grade: C\n");
        } 
        else {
            printf("Grade: FL\n");
        }
    }

    return 0;
}