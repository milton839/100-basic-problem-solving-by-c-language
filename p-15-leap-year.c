// Given a year year, determine whether it is a Leap Year.
#include <stdio.h>
char *checkLeapYear(int year)
{
    if (year % 400 == 0)
    {
        return "Leap Year";
    }
    else if (year % 100 == 0)
    {
        return "Not a Leap Year";
    }
    else if (year % 4 == 0)
    {
        return "Leap Year";
    }
    else
        return "Not a Leap Year";
}

//optimize
char *checkLeapYear(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return "Leap Year";

    return "Not a Leap Year";
}
int main()
{
    int year;
    scanf("%d", &year);
    char *leapYear = checkLeapYear(year);
    printf("%s\n", leapYear);
    return 0;
}