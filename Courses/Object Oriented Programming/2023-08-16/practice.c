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
    struct dob date;
};

int main()
{
    struct student s1;
    printf("Enter the date of birth :\n");
    scanf("%d %d %d", &s1.date.day, &s1.date.month, &s1.date.year);
    printf("Date of birth is %d/%d/%d", s1.date.day, s1.date.month, s1.date.year);
    return 0;
}