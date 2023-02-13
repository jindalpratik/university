#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'A':
            printf("Vowel");
            break;
        default:
            printf("consonant");
    }
    return 0;
}