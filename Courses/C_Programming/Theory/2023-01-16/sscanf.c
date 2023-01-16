#include<stdio.h>
int main(){
    char abc[] = "Welcome to chitkara: 1853";
    int d;
    sscanf(abc, "Welcome to chitkara: %d", &d);
    printf("%d", d);
    return 0;
}