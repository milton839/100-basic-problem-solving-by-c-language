// Given two integers a and b, print their sum.
#include <stdio.h>
int sumOfTwoNumber(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    printf("Please Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int sum = sumOfTwoNumber(a, b);
    printf("Sum of two number is: %d\n", sum);
    return 0;
}