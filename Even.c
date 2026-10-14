#include <stdio.h>

void even(int num);

int main()
{

    int num;
    printf("how many even numbers you want to print:\n");

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

    even(num);

    return 0;
}

void even(int num)
{

    for (int i = 1; i <= num; i++)
    { 
        printf("%d\n", 2 * i);   
    }
}