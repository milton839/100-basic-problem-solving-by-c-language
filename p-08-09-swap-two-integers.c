// Given two integers a and b, swap their values using a third variable called temp.
#include <stdio.h>
void swapTwoIntegers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapWithoutTemp(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Main value: %d %d\n", a, b);
    // swapTwoIntegers(&a, &b);
    swapWithoutTemp(&a, &b);

    printf("After Swap value: %d %d\n", a, b);

    return 0;
}