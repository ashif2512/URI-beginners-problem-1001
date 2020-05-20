#include <stdio.h>

int main ()
{
    double A, B, C, temp;

    /*receiving input from the user*/
    scanf("%lf%lf%lf", &A, &B, &C);

    /*arranging values in decreasing order*/
    if((A >= B) && (A >= C))
    {
        if(B >= C)
        {
            /*applying condition to find the form of triangle*/
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
        }
        else
        {
            temp = C;
            C = B;
            B = temp;

            /*applying condition to find the form of triangle*/
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

        }
    }

    else if((B >= A) && (B >= C))
    {
        if(A >= C)
        {
            temp = B;
            B = A;
            A = temp;

            /*applying condition to find the form of triangle*/
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

        }
        else
        {
            temp = B;
            B = A;
            A = temp;

            temp = C;
            C = B;
            B = temp;

            /*applying condition to find the form of triangle*/
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
        }
    }

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

            /*applying condition to find the form of triangle*/
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
        }
        else
        {
            temp = C;
            C = A;
            A = temp;

            /*applying condition to find the form of triangle*/
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
        }
    }





    return 0;
}
