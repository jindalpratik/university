#include <stdio.h>
#include <string.h>

struct dob
{
    int day;
    int month;
    int year;
};
struct student
{
    char name[20];
    int roll;
    int marks;
    struct dob d;
};

int main()
{
    struct student s1;
    printf("Enter the name of students: ");
    scanf("%s", &s1.name);
    printf("Enter the roll number of students: ");
    scanf("%d", &s1.roll);
    printf("Enter the marks of students: ");
    scanf("%d", &s1.marks);
    printf("Enter the date of birth of students: ");
    scanf("%d %d %d", &s1.d.day, &s1.d.month, &s1.d.year);
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %d\n", s1.marks);
    printf("Date of birth: %d/%d/%d\n", s1.d.day, s1.d.month, s1.d.year);
    return 0;
}