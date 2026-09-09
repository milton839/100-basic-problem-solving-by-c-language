// Given a temperature in Celsius, convert it to Fahrenheit and return the result.
// Formula: Fahrenheit = (Celsius × 9 / 5) + 32
#include <stdio.h>
float celciusToFahrenheit(float celcius)
{
    return celcius * 9 / 5 + 32;
}
int main()
{
    float celcius, fahrenheit;
    scanf("%f", &celcius);
    fahrenheit = celciusToFahrenheit(celcius);
    printf("%.2f\n", fahrenheit);
    return 0;
}