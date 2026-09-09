// Given an integer n, determine whether the number is:
#include <stdio.h>
char *checkNumber(int number)
{
    if (number > 0)
        return "Positive";

    else if (number < 0)
        return "Negative";

    else
        return "Zero";
}
int main()
{
    int number;
    scanf("%d", &number);
    char *numberCheck = checkNumber(number);
    printf("%s\n", numberCheck);
    return 0;
}