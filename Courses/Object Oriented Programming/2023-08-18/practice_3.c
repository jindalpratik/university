#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[20];
} s1;

// Gets the student details and stores it
void getDetails(struct student *s2)
{
    printf("Enter Roll number and Name of Student \n");
    scanf("%d %s", &(*s2).roll, &s2->name);
}

void display(int a, char b[20])
{
    printf("Name of Student is : %s\n", b);
    printf("Roll no. of student is : %d\n", a);
}

int main()
{
    struct student s2;
    getDetails(&s2);
    display(s2.roll, s2.name);
    return 0;
}
