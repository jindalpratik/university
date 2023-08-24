#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr;
    ptr = fopen("first.txt","a");
    if (ptr != NULL)
        printf("File opened successfully.\n");
    else
        printf("File not found.\n");

    char a[50];
    printf("Enter a string.\n");
    scanf("%s",&a);

    for(int i=0; i <strlen(a);i++)
    {
        fputc(a[i],ptr);
    }
    fclose(ptr);
    return 0;
}