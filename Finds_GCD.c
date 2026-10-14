#include <stdio.h>

int GCD(int a, int b);

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = GCD(num1, num2);

    printf("The GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}

int GCD(int a, int b) {
    
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        int temp = b;
        b = a % b;   
        a = temp;
    }

    return a;  
}