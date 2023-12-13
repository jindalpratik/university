#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[20];
};

void display(struct student s2)
{
    printf("Name of Student is : %s\n", s2.name);
    printf("Roll no. of student is : %d\n", s2.roll);
}

int main()
{
    struct student s1;
    printf("Enter Roll number and Name of Student \n");
    scanf("%d %s", &s1.roll, &s1.name);
    display(s1);
    return 0;
}