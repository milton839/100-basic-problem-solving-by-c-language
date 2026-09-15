// Given a single character ch, determine whether it is a digit or not a digit.
#include <stdio.h>
char *checkDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
        return "Digit";
    else
        return "Not a Digit";
}
int main()
{
    char ch;
    scanf("%c", &ch);

    char *isDigit = checkDigit(ch);
    printf("%s\n", isDigit);
    return 0;
}