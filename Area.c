#include <stdio.h>
#define PI 3.14159

float CircleArea(float rad);
float TriangleArea(float base, float height);
float RectangleArea(float length, float width);
float SquareArea(float side);

int main()
{

    int num;

    printf(" Enter\n1 to calculate area for a circle\n2 for a triangle\n3 for a rectangle\n4 for a square\n");
    scanf("%d", &num);

    if (num == 1)
    {
        float rad;

        printf("Enter the radius of the circle:");
        scanf("%f", &rad);

        printf("Area of the circle is %.2f\n", CircleArea(rad));
    }
    else if (num == 2)
    {
        float base, height;

        printf("Enter the base:");
        scanf("%f", &base);

        printf("Enter the height:");
        scanf("%f", &height);

        printf("Area of the Triangle is %.2f\n", TriangleArea(base, height));
    }
    else if (num == 3)
    {
        float length, width;

        printf("Enter the length:");
        scanf("%f", &length);

        printf("Enter the width:");
        scanf("%f", &width);

        printf("Area of the Rectangle is %.2f\n", RectangleArea(length, width));
    }
    else if (num == 4)
    {
        float side;

        printf("Enter the side:");
        scanf("%f", &side);

        printf("Area of the square is %.2f\n", SquareArea(side));
    }
    else
    {
        printf("Invalid Input! Enter a valid number");
    }

    return 0;
}

float CircleArea(float rad)
{

    return PI * rad * rad;
}

float TriangleArea(float base, float height)
{

    return 0.5 * base * height;
}

float RectangleArea(float length, float width)
{

    return length * width;
}

float SquareArea(float side)
{

    return side * side;
}