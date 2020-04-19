#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int A, B, C, maiorAB, maior;

    /*receiving input from the user*/
    scanf("%d%d%d", &A, &B, &C);

    /*making calculation for finding the greatest number*/
    maiorAB = ((A + B + abs (A - B)) / 2);
    /*comparing the greatest value between A & B to C */
    maior = ((maiorAB + C + abs (maiorAB - C)) / 2);

    /*printing the greatest number*/
    printf("%d eh o maior\n", maior);

    return 0;

}
