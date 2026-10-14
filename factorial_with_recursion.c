#include <stdio.h>

int factorial(int n);

int main()
{

    int n;

    printf("Enter a number you want to find fictorial:");
    scanf("%d",&n);

    printf("factorial is %d", factorial(n));

    return 0;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int factorialNm1 = factorial(n - 1);
    int factorialN = factorialNm1 * n;

    return factorialN;
}