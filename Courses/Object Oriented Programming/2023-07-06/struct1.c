#include <stdio.h>

struct employee
{
    int id;
    char name;
    float marks;
} a, b, c;

// struct employee a;

int main()
{
    struct employee m;
    m.id = 12;
    m.name = 'a';
    m.marks = 2.4;
    printf("Marks: %f\n", m.marks);

    struct employee k = {3, 'b', 46.2};
    printf("Marks: %f\n", k.marks);
    return 0;
}