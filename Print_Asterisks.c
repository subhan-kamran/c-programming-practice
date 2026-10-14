#include <stdio.h>

void Draw_Asterisks();   

int main()
{
    Draw_Asterisks();    
    return 0;
}

void Draw_Asterisks()
{
    for (int i = 9; i >= 1; i -= 2)   
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");   
    }
}