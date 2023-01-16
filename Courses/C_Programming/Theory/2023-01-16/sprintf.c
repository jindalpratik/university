#include<stdio.h>
int main(){
    char abc[100];
    int d = 93;
    sprintf(abc, "The number is: %d", d);
    printf("%s", abc);
    return 0;
}