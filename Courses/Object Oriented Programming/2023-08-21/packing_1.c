#include <stdio.h>
#include <string.h>
struct A
{
    long long a;
    char b;
};
struct B
{
    long long C;
    char d;
} __attribute__((packed));
struct C
{
    long long e;
    char f;
} __attribute__((packed, aligned(4)));

int main()
{
    printf("Size of A: %d\n", sizeof(struct A));
    printf("Size of B: %d\n", sizeof(struct B));
    printf("Size of C: %d\n", sizeof(struct C));
    return 0;
}