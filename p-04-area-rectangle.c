// Given the length and width of a rectangle, calculate and return its area.
#include <stdio.h>
int areaOfRectangle(int length, int width)
{
    return length * width;
}
int main()
{
    int length, width;
    scanf("%d %d", &length, &width);
    int result = areaOfRectangle(length, width);
    printf("%d\n", result);
    return 0;
}