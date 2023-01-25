#include<stdio.h>
int main(){
    for(char abc = 'a'; abc != 'z'; abc++)
    {
        printf("%c", abc);
    }
    printf("z\n");
    for(char ABC = 'A'; ABC != 'Z'; ABC++)
    {
        printf("%c", ABC);
    }
    printf("Z\n");
    return 0;
}