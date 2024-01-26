#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Error: you need one argument.\n");
        return 1;
    }

    for (int cnt = 1; cnt < argc; cnt++)
    {
        for (int i = 0; argv[cnt][i] != '\0'; i++)
        {
            char letter = argv[cnt][i];
            letter = tolower(letter);

            switch (letter)
            {
            case 'a':
                printf("%d: 'A'\n", i);
                break;
            case 'e':
                printf("%d: 'E'\n", i);
                break;
            case 'i':
                printf("%d: 'I'\n", i);
                break;
            case 'o':
                printf("%d: 'O'\n", i);
                break;
            case 'u':
                printf("%d: 'U'\n", i);
                break;
            case 'y':
                if (i > 2)
                {
                    printf("%d: 'Y'\n", i);
                }
                break;
            default:
                printf("%d: %c is not a vowel.\n", i, letter);
                break;
            }
        }
    }

    return 0;
}