#include<stdio.h>

int main(){

    char ch;

    printf("Please type a character : ");
    scanf(" %c",&ch);

    printf("\nThe ASCII code for\'%c\'is %d",ch,ch);

    return 0;
}