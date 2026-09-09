// Given two integers a and b, determine and return the larger number.
#include <stdio.h>
int largestOfTwo(int number1, int number2)
{
    if (number1 > number2)
        return number1;
    else if (number1 < number2)
        return number2;
    else
        return number1;
}
int main()
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    int largestNumber = largestOfTwo(number1, number2);
    printf("%d\n", largestNumber);
    return 0;
}