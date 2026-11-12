#include <stdio.h>
#include <string.h>

int main()
{
    char feedback[20], updated[30], temp[20];
    char *p;

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    feedback[strcspn(feedback, "\n")] = '\0';

    printf("\nTotal characters: %d\n", strlen(feedback));

    if(strstr(feedback, "bad") != NULL)
        printf("Bad word found.\n");

    if(strstr(feedback, "good") != NULL)
        printf("Good word found.\n");

    strcpy(updated, feedback);

    p= strstr(updated, "bad");

    if(p != NULL)
    {
        strcpy(temp, p + 3);
        strcpy(p, "not good");
        strcat(p, temp);
    }

    printf("Updated review: %s", updated);

    return 0;
}
