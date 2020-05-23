#include <stdio.h>
#include <string.h>

int main ()
{
    char name1[30], name2[30], name3[30];

    /*receiving input from the user*/
    scanf("%s%s%s", name1, name2, name3);

    /*applying conditional logic by using strcmp() function to compare two string*/
    if(strcmp(name1, "vertebrado") == 0)
    {
        if(strcmp(name2, "ave") == 0)
        {
            if(strcmp(name3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else if(strcmp(name3, "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }
        else if(strcmp(name2, "mamifero") == 0)
        {
            if(strcmp(name3, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else if(strcmp(name3, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }
    else if(strcmp(name1, "invertebrado") == 0)
    {
        if(strcmp(name2, "inseto") == 0)
        {
            if(strcmp(name3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else if(strcmp(name3, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
        else if(strcmp(name2, "anelideo") == 0)
        {
            if(strcmp(name3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else if(strcmp(name3, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
