// Given an integer n, determine whether the number is Even or Odd.
#include <stdio.h>
char *evenOrOdd(int number)
{
    if (number < 0)
    {
        return "Please Enter a Positive Number";
    }
    else if (number % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}
int main()
{
    int number;
    scanf("%d", &number);
    char *evenOdd = evenOrOdd(number);
    printf("%s\n", evenOdd);
    return 0;
}