// Given an integer marks, determine whether a student has passed or failed.
#include <stdio.h>
char *passFailCheck(int mark)
{
    if (mark < 0 || mark > 100)
    {
        return "Invalid Input";
    }
    else if (mark < 33)
    {
        return "Fail";
    }
    return "Pass";
}
int main()
{
    int mark;
    scanf("%d", &mark);

    char *passFail = passFailCheck(mark);
    printf("%s\n", passFail);
    return 0;
}