// Given a single character ch, determine whether it is:
#include <stdio.h>
char *uppercaseOrLowerCaseCheck(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
        return "Uppercase Letter";
    else if (letter >= 'a' && letter <= 'z')
        return "Lowercase Letter";
    else
        return "Invalid Input";
}
int main()
{
    char letter;
    scanf("%c", &letter);

    char *letterCheck = uppercaseOrLowerCaseCheck(letter);
    printf("%s\n", letterCheck);
    return 0;
}