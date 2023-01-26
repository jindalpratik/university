#include<stdio.h>
int main(){
    int x = 011;
    printf("%d", x);
    for(int i = 0; i < x; i+=3)
    {
        printf("*");
    }
    return 0;
}