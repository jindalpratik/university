// def F(n):
//     i = 2
//     a = 1
//     b = 1
//     sum = 0
//     if n <= 2:
//         return 1
//     while i < n:
//         sum = a + b
//         a = b
//         b = sum
//         i = i + 1
//     return sum

// n = int(input())
// nth_term = F(n)
// print(nth_term)

#include <stdio.h>
int main()
{
    int n ,a = 1, b = 1,sum = 0;
    printf("How long should the fibonacci series be: ");
    scanf("%d", &n);
    printf("1 1 ");
    for(int i=2; i < n; i++)
    {
        sum = a+b;
        a = b;
        b = sum;
        printf("%d ",sum);
    }
    return 0;
}