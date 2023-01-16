#include<stdio.h>
// Only the first charachter is saved and printed by this method at a time.
int main(){
    int d;
    printf("Enter the value of d: "); 
    d = getchar();
    printf("The value you entered was: ");
    putchar(d);
    return 0;
}