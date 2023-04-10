// # Given an integer n, find and print the sum of numbers from 1 to n.
// n = int(input())
// sum = 0
// i = 1
// while i <= n:
//     sum = sum + i
//     i = i + 1
// print(sum)

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0, i = 1;
    while (i <= n)
    {
        sum += i;
        i += 1;
    }
    printf("%d", sum);
    return 0;
}