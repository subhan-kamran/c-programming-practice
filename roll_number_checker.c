#include <stdio.h>

int main()
{
    int num;
    int found = 0;
    printf("Enter a number:");
    scanf("%d", &num);

    for (int i = 1; i <= 5; i++)
    {
        if (num == i)
        {
            printf("Roll number exist in database");
            found++;
        }
    }
    if (found == 0)
    {
        printf("Not Exist!");
    }

    return 0;
}