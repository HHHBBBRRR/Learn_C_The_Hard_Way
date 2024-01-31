#include<stdio.h>

void print_ages(int *cur_age,char ** cur_name,int count);

int main(int argc,char*argv[])
{
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    for (int i = 1; i < argc; i++)
    {
        printf("arg[%d]: %s\n",i,*(argv+i));
    }
    

    int count = sizeof(ages) / sizeof(ages[0]);

    for(int i = 0; i < count; i++) 
    {
        printf("%s has %d years alive.\n",*(names+i), *(ages+i));
    }
    printf("-----------------------------\n\n");

    int *cur_age = ages;
    char **cur_name = names;

    print_ages(ages,names,count);

    for (int i = 0; i < count; i++)
    {
        printf("%s is %d years old.\n",*(&cur_name[i]),*(&cur_age[i]));
    }
    printf("-----------------------------\n\n");

    for (int i = 0; i < count; i++)
    {
        printf("%s is %d years old.\n",*(cur_name + i),*(cur_age + i));
    }
    printf("-----------------------------\n\n");

    while ((cur_age - ages) < count)
    {
        printf("%s lived %d years so far.\n",
                *cur_name, *cur_age);
        cur_name++;
        cur_age++;
    }
    
    for (int i = 0; i < count; i++)
    {
        printf("ages[%d]: %p\n",i,ages+i);
    }
    
    return 0;
}

void print_ages(int *cur_age,char ** cur_name,int count)
{
    printf("This is a function.\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s is %d years old.\n",cur_name[i],cur_age[i]);
    }
    printf("-----------------------------\n\n");
}