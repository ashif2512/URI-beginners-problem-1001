#include <stdio.h>

int main ()
{
    double radius, sphare;
    /*taking input from the user*/
    scanf("%lf", &radius);
    /*calculation of sphare*/
    sphare = ((4.0/3) * 3.14159 * (radius * radius * radius));
    /*printing the result*/
    printf("VOLUME = %.3lf\n", sphare);

    return 0;
}
