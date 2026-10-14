#include<stdio.h>

int main(){

    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);

    if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
        printf("Invalid Input! Please enter a valid alphabet.\n");
        return 0;  
    }

    
    if ( ch == 'a' || ch == 'A')
    {
        printf("It is a vowel");
    }
    else if ( ch == 'e' || ch == 'E')
    {
        printf("It is a vowel");
    }
    else if ( ch == 'i' || ch == 'I')
    {
        printf("It is a vowel");
    }
    else if ( ch == 'o' || ch == 'O')
    {
        printf("It is a vowel");
    }
    else if ( ch == 'u' || ch == 'U')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is a consonant");
    }

    return 0;
    
}