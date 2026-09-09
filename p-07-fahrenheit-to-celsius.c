// Given a temperature in Fahrenheit, convert it to Celsius and return the result.
// Celsius = (Fahrenheit - 32) × 5 / 9
#include <stdio.h>
float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
int main()
{
    float celcius, fahrenheit;
    scanf("%f", &fahrenheit);
    celcius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f\n", celcius);
    return 0;
}