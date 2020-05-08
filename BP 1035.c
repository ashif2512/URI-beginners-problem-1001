#include <stdio.h>

int main ()
{
    int A, B, C, D;

    /*receiving values from the user*/
    scanf("%d%d%d%d", &A, &B, &C, &D);

    /*using if else condition to find desired number*/
    if ((B > C) && (D > A) && ((C + D) > (A + B)) && ((C >= 0) && (D >= 0)) && (A % 2 == 0))
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
