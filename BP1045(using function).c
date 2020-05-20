#include <stdio.h>

/*making a function to minimize the calculation*/
void calculation(double A, double B, double C)
{
            if(A >= (B + C))
            {
                printf("NAO FORMA TRIANGULO\n");

                return 0;
            }
            if((A * A) == ((B * B) + (C * C)))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            if((A * A) > ((B * B) + (C * C)))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            if((A * A) < ((B * B) + (C * C)))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }
            if((A == B) && (A == C) && (B == C))
            {
                printf("TRIANGULO EQUILATERO\n");
            }
            if(((A == B) && (A != C) && (B != C)) || ((A == C) && (A != B) && (C != B)) || ((B == C) && (B != A) && (C != A)))
            {
                printf("TRIANGULO ISOSCELES\n");
            }

        return calculation;

}

int main ()
{
    double A, B, C, temp;

    scanf("%lf%lf%lf", &A, &B, &C);

    /*rearranging the values in decreasing order and then swapping where it needs*/
    if((A >= B) && (A >= C))
    {
        if(B >= C)
        {
            calculation(A, B, C);
        }
        else
        {
            temp = C;
            C = B;
            B = temp;

            calculation(A, B, C);
        }
    }

    /*rearranging the values in decreasing order and then swapping where it needs*/
    else if((B >= A) && (B >= C))
    {
        if(A >= C)
        {
            temp = B;
            B = A;
            A = temp;

            calculation(A, B, C);
        }
        else
        {
            temp = B;
            B = A;
            A = temp;

            temp = C;
            C = B;
            B = temp;


            calculation(A, B, C);
        }
    }

    /*rearranging the values in decreasing order and then swapping where it needs*/
    else if((C >= A) && (C >= B))
    {
        if(A >= B)
        {
            temp = C;
            C = A;
            A = temp;

            temp = C;
            C = B;
            B = temp;


            calculation(A, B, C);
        }
        else
        {
            temp = C;
            C = A;
            A = temp;


            calculation(A, B, C);
        }
    }


    return 0;
}
