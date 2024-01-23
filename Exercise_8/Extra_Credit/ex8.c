#include<stdio.h>

int main(int argc,char*argv[])
{
    if (argc == 1)
    {
        printf("You have 0 argument. you suck.\n");
    }else if (argc > 1 && argc < 4)
    {
        printf("You have %d arguments,here's your arguments: \n",argc-1);
        for (int i = 1; i < argc; i++)
        {
            printf("%s ",argv[i]);
        }
        printf("\n");
    }else
    {
        printf("You have too many arguments. you suck.\n");
    }
    
    return 0;
}