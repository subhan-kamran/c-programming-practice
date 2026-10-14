#include <stdio.h>

void weather(int temp);

int main()
{

    int temp;

    printf("Enter the temperature:");

    if (scanf("%d", &temp) != 1)
    {
        printf("Invalid input! Enter a number.");
        return 0;
    }

    weather(temp);

    return 0;
}

void weather(int temp)
{

    if (temp > 35)
    {
        printf("Hot day\n");
    }
    else if (temp <= 35 && temp >= 25)
    {
        printf("Pleasant day\n");
    }
    else 
    {
        printf("Cool day\n");
    }
}