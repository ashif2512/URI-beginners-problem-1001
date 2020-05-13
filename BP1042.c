#include <stdio.h>

int main ()
{
    int A, B, C;

    /*receiving input from the user*/
    scanf("%d%d%d", &A, &B, &C);

    /*implementing conditional logic according to the given instruction*/
    if(A >= B && A >= C)
    {
        if (B >= C)
        {
            printf("%d\n", C);
            printf("%d\n", B);
            printf("%d\n", A);
            printf("\n");
            printf("%d\n", A);
            printf("%d\n", B);
            printf("%d\n", C);
        }
        else
        {
            printf("%d\n", B);
            printf("%d\n", C);
            printf("%d\n", A);
            printf("\n");
            printf("%d\n", A);
            printf("%d\n", B);
            printf("%d\n", C);
        }
    }

    else if(B >= A && B >= C)
    {
        if(A >= C)
        {
            printf("%d\n", C);
            printf("%d\n", A);
            printf("%d\n", B);
            printf("\n");
            printf("%d\n", A);
            printf("%d\n", B);
            printf("%d\n", C);
        }
        else
        {
            printf("%d\n", A);
            printf("%d\n", C);
            printf("%d\n", B);
            printf("\n");
            printf("%d\n", A);
            printf("%d\n", B);
            printf("%d\n", C);
        }
    }

    else if(C >= A && C >=B)
    {
        if(A >= B)
        {
            printf("%d\n", B);
            printf("%d\n", A);
            printf("%d\n", C);
            printf("\n");
            printf("%d\n", A);
            printf("%d\n", B);
            printf("%d\n", C);
        }
        else
        {
            printf("%d\n", A);
            printf("%d\n", B);
            printf("%d\n", C);
            printf("\n");
            printf("%d\n", A);
            printf("%d\n", B);
            printf("%d\n", C);
        }
    }


    return 0;
}
