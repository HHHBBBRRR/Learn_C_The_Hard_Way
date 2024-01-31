#include<stdio.h>

int main(int argc,char*argv[])
{
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    int count = sizeof(ages) / sizeof(ages[0]);

    for(int i = count - 1; i >= 0; i--) 
    {
        printf("%s has %d years alive.\n",names[i], ages[i]);
    }
    printf("-----------------------------\n\n");

    int *cur_age = ages;
    char **cur_name = names;

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%s is %d years old.\n",*(cur_name + i),*(cur_age + i));
    }
    printf("-----------------------------\n\n");

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%s is %d years old.\n",cur_name[i],cur_age[i]);
    }
    printf("-----------------------------\n\n");

    for(cur_name = &names[count-1], cur_age = &ages[count-1];
            (cur_age - ages) >= 0;
            cur_name--, cur_age--)
    {
        printf("%s lived %d years so far.\n",
                *cur_name, *cur_age);
    }
    
    return 0;
}