#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of which to print the multiplication table of: ");
    scanf("%d",&m);
    for(int i = 1; i < 11 ; i++)
    {
        printf("%d X %d = %d\n",m,i,i*m);
    }
    return 0;
}