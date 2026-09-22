// Given an integer N, do the following:

// Print all integers from 1 to N, one per line.
// Calculate and print the sum of all integers from 1 to N.
#include <stdio.h>
// aytar complexity O(n) r formula: N × (N + 1) / 2 dia korle complexity O(1) =>efficient
int sumOf1toN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("Value of i is: %d\n", i);
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);

    int sum = sumOf1toN(n);
    printf("%d\n", sum);
    return 0;
}