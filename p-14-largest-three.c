// Given three integers a, b, and c, determine and return the largest number among them.
#include <stdio.h>
// int largestOfThree(int number1, int number2, int number3)
// {
//     if (number1 >= number2 && number1 >= number3)
//         return number1;
//     else if (number2 > number1 && number2 >= number3)
//         return number2;
//     else
//         return number3;
// }

// best approach for beginner
int largestOfThree(int a, int b, int c)
{
    int largest = a;

    if (b > largest)
        largest = b;

    if (c > largest)
        largest = c;

    return largest;
}
int main()
{
    int number1, number2, number3;
    scanf("%d %d %d", &number1, &number2, &number3);

    int largestNumber = largestOfThree(number1, number2, number3);
    printf("%d\n", largestNumber);
    return 0;
}