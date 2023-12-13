#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int int_arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &int_arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d", int_arr[i]);
    }
    int num = 0;
    for (int i = 1; i < N; i++)
    {
        if (int_arr[i] < int_arr[i - 1])
        {
            num = i;
            break;
        }
    }
    printf("%d", num);
}
