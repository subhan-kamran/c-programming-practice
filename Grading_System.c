#include <stdio.h>

void gradingsystem(float percentage);

int main()
{

    int num;
    printf("Enter your number:\n");

    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input! Enter a number.");
        return 0;
    }
    else if (num < 1)
    {
        printf("Invalid input! Enter a number.");
        return 0;
    }

    float percentage = (num * 100) / 1100;

    gradingsystem(percentage);

    return 0;
}

void gradingsystem(float percentage)
{

    if (percentage >= 80)
    {
        printf("A+");
    }
    else if (percentage >= 70)
    {
        printf("A");
    }
    else if (percentage >= 60)
    {
        printf("B");
    }
    else if (percentage >= 50)
    {
        printf("C");
    }
    else if (percentage >= 40)
    {
        printf("D");
    }
    else if (percentage >= 33)
    {
        printf("E");
    }
    else if (percentage < 33)
    {
        printf("F");
    }
}