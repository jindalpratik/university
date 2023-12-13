#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *ptr;
    char ans;
    char file_name[50];

    printf("Enter the name of the file to open: ");
    scanf("%s", &file_name);

    ptr = fopen(file_name, "r");

    if (ptr != NULL)
    {
        printf("File opened successfully.\n");
    }
    else
    {
        fclose(ptr);
        printf("File not found, would you like to create a file.(Y/N) ");
        fflush(stdin);
        scanf("%c", &ans);
        if (ans == 'Y')
        {
            printf("File created successfully.\n");
            ptr = fopen(file_name, "w");
        }
        else
        {
            printf("File not created, exiting editor.\n");
            exit(0);
        }
    }

        fclose(ptr);
    printf("Enter the mode to edit the file in. (r,w,a) ");
    fflush(stdin);
    scanf("%c", &ans);
    if (ans == 'r')
    {
        printf("Printing the contents of the file.\n");
        ptr = fopen(file_name, "r");
        char c;
        while ((c = fgetc(ptr)) != EOF)
        {
            printf("%c", c);
        }
        fclose(ptr);
    }
    else if (ans == 'w')
    {
        printf("Enter the contents to be written to the file.\n");
        ptr = fopen(file_name, "w");
        char a[50];
        printf("Enter a string.\n");
        fflush(stdin);
        fgets(a, 50, stdin);
        for (int i = 0; i < strlen(a); i++)
        {
            fputc(a[i], ptr);
        }
        printf("Contents written to the file exiting.");
        fclose(ptr);
    }
    else if (ans == 'a')
    {
        printf("Printing the contents of the file.\n****\n");
        ptr = fopen(file_name, "r");
        char c;
        while ((c = fgetc(ptr)) != EOF)
        {
            printf("%c", c);
        }
        fclose(ptr);
        printf("\n****\nEnter the contents to be appended to the file.\n");
        ptr = fopen(file_name, "a");
        char a[50];
        printf("Enter a string.\n");
        fflush(stdin);
        fgets(a, 50, stdin);
        for (int i = 0; i < strlen(a); i++)
        {
            fputc(a[i], ptr);
        }
        fclose(ptr);
    }
    else
    {
        printf("Invalid mode selected, exiting editor.");
        exit(0);
    }

    return 0;
}