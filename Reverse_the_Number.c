#include <stdio.h>

int Reverse(int num);   

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = Reverse(number);   

    printf("Reversed number = %d", result);

    return 0;
}

int Reverse(int num)
{
    int reverse = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    return reverse;   
}