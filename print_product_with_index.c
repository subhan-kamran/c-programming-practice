#include <stdio.h>

int main()
{

    int j = 1;

    for (int i = 0; i <= 6; i++)
    {
        j = j * 1;
        printf("%d\t%d\n", i, j);
        j = j * 2;
    }

    return 0;
}