#include <stdio.h>

int main ()
{
    float average, N, N1, N2, N3, N4, N5;

    /*receiving input from the user*/
    scanf("%f%f%f%f", &N1, &N2, &N3, &N4);

    /*finding the average using the given credit*/
    average = (((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / (2.0 + 3.0 + 4.0 + 1.0));

    /*printing the SGPA after calculation*/
    printf("Media: %.1f\n", average);

    /*applyiing the given condition*/
    if (average >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(average < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(average >= 5.0 && average <= 6.9)
    {
        printf("Aluno em exame.\n");

        scanf("%f", &N5);

        N = ((average + N5) / 2);

        if(N >= 5.0)
        {
            printf("Nota do exame: %.1f\n", N5);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", N);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", N);
        }

    }


    return 0;

}
