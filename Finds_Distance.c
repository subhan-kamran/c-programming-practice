#include <stdio.h>
#include <math.h>

float Distance(float x1, float y1, float x2, float y2);

int main()
{
    float x1, y1, x2, y2, result;

    printf("Enter x1: ");
    scanf("%f", &x1);

    printf("Enter y1: ");
    scanf("%f", &y1);

    printf("Enter x2: ");
    scanf("%f", &x2);

    printf("Enter y2: ");
    scanf("%f", &y2);

    result = Distance(x1, y1, x2, y2);

    printf("Distance between the two points = %.2f\n", result);

    return 0;
}

float Distance(float x1, float y1, float x2, float y2)
{
    float dx = x2 - x1;
    float dy = y2 - y1;
    float distance;

    distance = sqrt(dx * dx + dy * dy);

    return distance;
}