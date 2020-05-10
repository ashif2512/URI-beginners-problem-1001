#include <stdio.h>
#include <math.h>

int main ()
{
    float A, B, C, D, E, F, G, R1, R2;

    scanf("%f%f%f", &A, &B, &C);

    D = ((B * B) - (4 * A * C));
    E = (2 * A);
    F = - B + sqrt(D);
    G = - B - sqrt(D);

    R1 = F / E;
    R2 = G / E;

    if ((A == 0) || (D < 0))
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }


    return 0;
}
