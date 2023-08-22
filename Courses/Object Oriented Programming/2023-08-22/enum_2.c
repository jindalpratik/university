#include<stdio.h>
#include<string.h>
enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec }m;

int main(){
    char months[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September","October", "November", "December"};
    for (m = jan; m <= dec; ++m)
        printf("%d  %s\n", m+1, months[m]);
    return 0;
}