#include <stdio.h>

int main ()
{
    float A, B, C, perimeter, area;

    /*receiving input from the user*/
    scanf("%f%f%f", &A, &B, &C);

    /*implementing conditional logic whether to form a triangle or not*/
    if(((A + B) > C) && ((B + C) > A) && ((C + A) > B))
    {
        perimeter = A + B + C;
        printf("Perimetro = %.1f\n", perimeter);
    }
    else
    {
        area = (((A + B) * C) / 2);
        printf("Area = %.1f\n", area);
    }

    return 0;
}
