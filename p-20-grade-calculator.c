// Given an integer marks, determine the student's grade based on the following grading system:
#include <stdio.h>
char *gradeCalculator(int mark)
{
    if (0 > mark || mark > 100)
    {
        return "Invalid Input";
    }

    int grade = mark / 10;
    switch (grade)
    {
    case 10:
    case 9:
    case 8:
        return "A+";
    case 7:
        return "A";
    case 6:
        return "A-";
    case 5:
        return "B";
    case 4:
        return "C";
    default:
        return mark >= 33 && mark <= 39 ? "D" : "F";
    }
}
int main()
{
    int mark;
    scanf("%d", &mark);

    char *grade = gradeCalculator(mark);
    printf("%s\n", grade);
    return 0;
}