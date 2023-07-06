#include <stdio.h>
#include <string.h>

typedef struct student {
    int id;
    float marks;
    char fav_char;
    char name[34];
}std;

int main(){
    std harry, ravi, shubhangi;
    harry.id = 1;
    ravi.id = 2;
    shubhangi.id = 3;
    strcpy(shubhangi.name,"Shubhangi Bhatacharya");

    harry.marks = 10.4;
    ravi.marks = 20.4;
    shubhangi.marks = 30.4;

    printf("Shubhangi has got %f marks \n",shubhangi.marks);
    printf("Shubhangi's full name is %s \n", shubhangi.name);
    return 0;
}