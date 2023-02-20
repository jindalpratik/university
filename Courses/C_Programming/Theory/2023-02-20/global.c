#include <stdio.h>
int fun1();
int fun2();
int num;
int main()
{
    num = 10;
    printf("%d\n", num);
    fun1();
    return 0;
}
int fun1()
{
    num = 20;
    printf("%d\n", num);
    fun2();
    return 0;
}
int fun2()
{
    num = 30;
    printf("%d", num);
    return 0;
}