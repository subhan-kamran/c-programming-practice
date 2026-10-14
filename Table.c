#include <stdio.h>

int table(int num);

int main()
{

    int num;
    printf("Enter a number for printing the table:\n");

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

    table(num);

    return 0;
}

int table(int num)
{

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}