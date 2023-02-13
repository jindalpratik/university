#include <stdio.h>

int main()
{
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (originalNum = num; originalNum != 0; originalNum /= 10)
    {
        remainder = originalNum % 10;
        ++n;
        // store the sum of the power of individual digits in result
        result = result * 10 + remainder;
    }

    printf("%d %d", n, result);
    return 0;
}