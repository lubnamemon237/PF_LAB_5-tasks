#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][50], temp[50];
    int i, j;

    for(i = 0; i < 10; i++)
    {
        printf("Enter student name: ");
        scanf(" %[^\n]", name[i]);
    }

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
