#include <stdio.h>

int main ()
{
    int X;
    float Y, Z;

    /*receiving values from the user*/
    scanf("%d", &X);
    scanf("%f", &Y);

    /*calculating for mileage*/
    Z = X / Y;

    /*printing the mileage value*/
    printf("%.3f km/l\n", Z);

    return 0;
}
