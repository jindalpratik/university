#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    int power = 1;
    while(n!=0){
        int r = n%10;
        if(r==1){
            sum+=power;
        }
        power*=2;
        n/=10;
    }
    printf("%d",sum);
}