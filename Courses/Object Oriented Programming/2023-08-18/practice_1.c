#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[20];
}s1;

// Gets the student details and returns it.
struct student getDetails(){
    struct student s1;
    printf("Enter Roll number and Name of Student \n");
    scanf("%d %s", &s1.roll, &s1.name);
    return s1;
}

void display(int a, char b[20]){
    printf("Name of Student is : %s\n",b);
    printf("Roll no. of student is : %d\n",a);
}

int main(){
    struct student s2 = getDetails();
    display(s2.roll, s2.name);
    return 0;
}