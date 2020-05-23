#include <stdio.h>

int main ()
{
    float amount, total, percentage;

    scanf("%f", &amount);

    if((amount >= 0.00) && (amount <= 400.00))
    {
        percentage = amount * 0.15;
        total = amount + percentage;

        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", percentage);
        printf("Em percentual: 15 %%\n");
    }
    else if((amount >= 400.01) && (amount <= 800.00))
    {
        percentage = amount * 0.12;
        total = amount + percentage;

        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", percentage);
        printf("Em percentual: 12 %%\n");
    }
    else if((amount >= 800.01) && (amount <= 1200.00))
    {
        percentage = amount * 0.10;
        total = amount + percentage;

        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", percentage);
        printf("Em percentual: 10 %%\n");
    }
    else if((amount >= 1200.01) && (amount <= 2000.00))
    {
        percentage = amount * 0.07;
        total = amount + percentage;

        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", percentage);
        printf("Em percentual: 7 %%\n");
    }
    else if(amount > 2000.00)
    {
        percentage = amount * 0.04;
        total = amount + percentage;

        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", percentage);
        printf("Em percentual: 4 %%\n");
    }


    return 0;
}
