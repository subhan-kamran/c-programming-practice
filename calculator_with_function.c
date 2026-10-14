#include <stdio.h>

int Add(int a, int b);
int Subtract(int a, int b);
int Multiply(int a, int b);
float Divide(int a, int b);

int main() {
    int num1, num2, choice;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    while (1) {  
        printf("\nEnter your choice:\n");
        printf("1 - Add\n");
        printf("2 - Subtract\n");
        printf("3 - Multiply\n");
        printf("4 - Divide\n");
        printf("5 - Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting program.\n");
            break;  
        }

        switch (choice) {
            case 1:
                printf("Sum: %d\n", Add(num1, num2));
                break;
            case 2:
                printf("Difference: %d\n", Subtract(num1, num2));
                break;
            case 3:
                printf("Product: %d\n", Multiply(num1, num2));
                break;
            case 4: {
                float result = Divide(num1, num2);
                if (result != -1) {
                    printf("Quotient: %.2f\n", result);
                }
                break;
            }
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}

int Add(int a, int b) {
    return a + b;
}

int Subtract(int a, int b) {
    return a - b;
}

int Multiply(int a, int b) {
    return a * b;
}

float Divide(int a, int b) {
    int numerator, denominator;

    if (a > b) {
        numerator = a;
        denominator = b;
    } else {
        numerator = b;
        denominator = a;
    }

    if (denominator == 0) {
        printf("Error: Division by zero!\n");
        return -1; 
    } else {
        return (float)numerator / denominator;
    }
}