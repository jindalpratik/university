#include <stdio.h>
int main()
{
    int n1 = 60 , n2 = 51 , AND ,OR , XOR;
    AND  = n1 & n2;
    OR = n1 | n2;
    XOR = n1 ^ n2;
    
    printf("AND = %d\n ", AND);
    printf("OR = %d\n ", OR);
    return 0;
}
// For some reason antivirus goes bonkers if I add a 3rd line.