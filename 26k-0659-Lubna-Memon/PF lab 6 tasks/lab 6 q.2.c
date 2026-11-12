#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *passwords[5] = {"abc123", "ly303", "ylz103", "tyx43", "tod98"};
    
    int strongest = 0;
    int strongestScore = 0;
    int below10 = 0;
    int i, j, score;

    for(i = 0; i < 5; i++)
    {
        score = 0;

        for(j = 0; passwords[i][j] != '\0'; j++)
        {
            if(islower(passwords[i][j]))
            {
                score += 1;
            }
            else if(isupper(passwords[i][j]))
            {
                score += 2;
            }
            else if(isdigit(passwords[i][j]))
            {
                score += 3;
            }
        }

        if(strlen(passwords[i]) >= 8)
        {
            score += 5;
        }

        if(strstr(passwords[i], "123") != NULL)
        {
            score -= 3;
        }

        printf("Password = %s\n", passwords[i]);
        printf("Score = %d\n", score);

        if(strongestScore < score)
        {
            strongestScore = score;
            strongest = i;
        }

        if(score < 10)
        {
            below10++;
        }
    }

    printf("The strongest password is %s\n", passwords[strongest]);
    printf("The passwords which scored below 10 are: %d\n", below10);

    return 0;
}
