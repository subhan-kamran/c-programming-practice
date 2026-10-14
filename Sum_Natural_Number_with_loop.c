#include<stdio.h>

int sum(int n);

int main(){

    int n;

    printf("Enter the numbers you want to find the sum:");
    scanf("%d", &n);

    printf("sum is %d", sum(n));

    return 0;
}

int sum(int n){

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
    
} 