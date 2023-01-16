#include<stdio.h>
int main(){
    char abc[100];
    int d;
    printf("Enter a value: ");
    scanf("%s %d", abc , &d);
    printf("The value you entered: %s %d", abc , d);
    return 0;
}