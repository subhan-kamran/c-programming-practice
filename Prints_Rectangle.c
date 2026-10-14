#include <stdio.h>

void Draw_Horizontal(int width);
void Draw_Vertical(int width, int height);

int main()
{
    int width, height, choice;

    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    printf("Enter height of rectangle: ");
    scanf("%d", &height);

    if (width <= 0 || height <= 0)
    {
        printf("Invalid size!\n");
        return 0;
    }

    printf("\n1. Draw Rectangle\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        Draw_Horizontal(width);        
        Draw_Vertical(width, height);  
        Draw_Horizontal(width);        
        break;

    case 2:
        printf("Program Ended.\n");
        break;

    default:
        printf("Invalid choice!\n");
    }

    return 0;
}

void Draw_Horizontal(int width)
{
    for (int i = 0; i < width; i++)
    {
        printf("*");
    }
    printf("\n");
}

void Draw_Vertical(int width, int height)
{
    for (int i = 0; i < height - 2; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0 || j == width - 1){  
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}