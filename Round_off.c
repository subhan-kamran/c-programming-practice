#include <stdio.h>

float roundoff(float num);

int main()
{

    float num;

    printf("Enter a decimal point value:");
    scanf("%f", &num);

    roundoff(num);

    return 0;
}

float roundoff(float num)
{

    float rounded = printf("The rounded off value is : %.2f",num);

    return 0;
}