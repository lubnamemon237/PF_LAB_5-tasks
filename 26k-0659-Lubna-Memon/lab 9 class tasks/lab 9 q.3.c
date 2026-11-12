#include <stdio.h>
#include <string.h>

int main()
{
    char email[100], domain[100];
    char *p;

    printf("Enter email address: ");
    scanf("%s", email);

    p = strchr(email, '@');

    if(p != NULL)
    {
        strcpy(domain, p + 1);

        printf("Domain name: %s", domain);
    }
    else
    {
        printf("Invalid email address.");
    }

    return 0;
}
