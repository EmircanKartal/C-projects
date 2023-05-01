#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main()
{
    char word[101];
    printf("Enter a word (up to 100 characters): ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    int i, last_vowel = -1, is_thin = 1;
    for (i = 0; i < strlen(word); i++)
    {
        char c = toupper(word[i]); 
        if (c == 'A' || c == 'I' || c == 'O' || c == 'U')
        {
            if (last_vowel != -1 && is_thin)
            {
                printf("The word does not follow vowel harmony.\n");
                return 0;
            }
            last_vowel = i;
            is_thin = 0;
        }
        else if (c == 'E' || c == 'I' || c == 'U' || c == 'O')
        {
            if (last_vowel != -1 && !is_thin)
            {
                printf("The word does not follow vowel harmony.\n");
                return 0;
            }
            last_vowel = i;
            is_thin = 1;
        }
    }

    printf("The word follows vowel harmony.\n");
    return 0;
}
