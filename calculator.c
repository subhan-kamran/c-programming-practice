#include <stdio.h>

void calculatesum(int a, int b);
void calculatesub(int a, int b);
void calculatemul(int a, int b);
void calculatediv(int a, int b);

int main()
{
    int num1, num2, choice;

    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    printf("Enter\n1 for addition\n2 for subtraction\n3 for muliplication\n4 for division\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        calculatesum(num1,num2);
    }
    else if (choice == 2)
    {
        calculatesub(num1,num2);
    }
    else if (choice == 3)
    {
        calculatemul(num1,num2);
    }
    else if (choice == 4)
    {
        calculatediv(num1,num2);
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}

void calculatesum(int a, int b){
    printf("sum is %d", a + b);
}

void calculatesub(int a, int b){
    printf("sub is %d", a - b);
}

void calculatemul(int a, int b){
    printf("mul is %d", a * b);
}

void calculatediv(int a, int b){
    if(b == 0){
        printf("Error: Division by zero is not allowed");
    } else {
        printf("Division is %.2f", (float)a / b);
    }
}