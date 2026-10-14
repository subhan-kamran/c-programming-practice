#include <stdio.h>

float Fahrenheittemp(float celsius);
float celsiustemp(float Fahrenheit);

int main()
{

    int num;

    printf(" Enter\n1 for converting celsius to Fahrenheit\n2 for converting Fahrenheit to celsius\n");
    scanf("%d", &num);

    if (num == 1)
    {
        float temperature;

        printf("Enter the temperature:");
        scanf("%f", &temperature);

        float Fahrenheit = Fahrenheittemp(temperature);

        printf("Fahrenheit is %f", Fahrenheit);
    }
    else if (num == 2)
    {
        float temperature;

        printf("Enter the temperature:");
        scanf("%f", &temperature);

        float celsius = celsiustemp(temperature);

        printf("Fahrenheit is %f", celsius);
    }
    else
    {
        printf("Invalid Input! Enter a valid number");
    }

    return 0;
}

float Fahrenheittemp(float celsius)
{

    float Fahrenheit = ((celsius * (9.0 / 5.0)) + 32.0);

    return Fahrenheit;
}

float celsiustemp(float Fahrenheit)
{

    float celsius = (5.0 / 9.0) * (Fahrenheit - 32);

    return celsius;
}