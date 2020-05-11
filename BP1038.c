#include <stdio.h>

int main ()
{
    int X, Y;
    float A, B, C, D, E;

    scanf("%d%d", &X, &Y);

    if (X == 1)
    {
        A = 4.00 * Y;
        printf("Total: R$ %.2f\n", A);
    }
    else if (X == 2)
    {
        B = 4.50 * Y;
        printf("Total: R$ %.2f\n", B);
    }
    else if (X == 3)
    {
        C = 5.00 * Y;
        printf("Total: R$ %.2f\n", C);
    }
    else if (X == 4)
    {
        D = 2.00 * Y;
        printf("Total: R$ %.2f\n", D);
    }
    else if (X == 5)
    {
        E = 1.50 * Y;
        printf("Total: R$ %.2f\n", E);
    }


    return 0;
}
