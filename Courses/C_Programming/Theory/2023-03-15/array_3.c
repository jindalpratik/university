int main()
{
    int x[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter array element: ");
        scanf("%d\n", &x[i]);
    }
    printf("%d\n", x[2]);
    printf("%d\n", x[4]);
    return 0;
}