#include <stdio.h>
#include <ctype.h>
#include <string.h>

void print_arguments(int argc,char*argv[]);
void print_letters(char arg[],int len);

int main(int argc, char*argv[])
{
    print_arguments(argc,argv);
    return 0;
}

void print_arguments(int argc,char*argv[])
{
    for (int i = 0; i < argc; i++)
    {
        print_letters(argv[i],strlen(argv[i]));
    }
}

void print_letters(char arg[],int len)
{
    for (int i = 0; i < len; i++)
    {
        char ch = arg[i];

        if (isalpha(ch) || isblank(ch))
        {
            printf("'%c' == %d\n",ch,ch);
        }
    }
}