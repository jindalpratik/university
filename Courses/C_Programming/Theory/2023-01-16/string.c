#include<stdio.h>
int main(){
    char abc[100];
    printf("Enter the value: ");
    gets(abc);
    printf("The value you entered: ");
    puts(abc);
    return 0;
}