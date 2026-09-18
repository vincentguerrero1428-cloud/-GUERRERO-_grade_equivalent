#include <stdio.h>
int main()
{

    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Invalid grade!");
    }

    else if (grade >= 90)
    {
        printf("Your grade is A!");
    }

    else if (grade >= 80)
    {
        printf("Your grade is B!");
    }

    else if (grade >= 70)
    {
        printf("Your grade is C!");
    }

    else if (grade >= 60)
    {
        printf("Your grade is D!");
    }

    else
    {
        printf("Your grade is F!");
    }

    return 0;
}