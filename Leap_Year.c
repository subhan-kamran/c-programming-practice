#include <stdio.h>

void leapyear(int year);

int main()
{

    int year;

    printf("Enter the year:");
    scanf("%d",&year);

    leapyear(year);

    return 0;
}

void leapyear(int year)
{

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }
}