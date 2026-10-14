#include <stdio.h>

int factorial(int n);

int main()
{

    int n;

    printf("Enter a number you want to find fictorial:");
    scanf("%d", &n);

    printf("Factorial is %d", factorial(n));

    return 0;
}

int factorial(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}