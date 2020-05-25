#include <stdio.h>

int main ()
{
    float salary, taxes1, taxes2, taxes3, taxes4, amount1, amount2, amount3, amount4;

    scanf("%f", &salary);

    if((salary >= 0.00) && (salary <= 2000.00))
    {
        printf("Isento\n");
    }
    else if((salary >= 2000.01) && (salary <= 3000.00))
    {
        amount1 = salary - 2000;
        taxes1 = amount1 * 0.08;

        printf("R$ %.2f\n", taxes1);

    }
    else if((salary >= 3000.01) && (salary <= 4500.00))
    {
        amount1 = salary - 2000;
        amount2 = amount1 - 1000;

        if(amount2 >= 0)
        {
            taxes1 = 1000 * 0.08;

            amount3 = amount2 - 1500;

            if(amount3 >= 0)
            {
                taxes2 = (1500 * 0.18) + taxes1;

                printf("R$ %.2f\n", taxes2);
            }
            else
            {
                taxes2 = (amount2 * 0.18) + taxes1;

                printf("R$ %.2f\n", taxes2);
            }
        }

    }
    else if(salary > 4500)
    {
        amount1 = salary - 2000;
        amount2 = amount1 - 1000;

        if(amount2 >= 0)
        {
            taxes1 = 1000 * 0.08;

            amount3 = amount2 - 1500;

            if(amount3 >= 0)
            {
                taxes2 = (1500 * 0.18) + taxes1;

                amount4 = amount3 - 4500;

                if(amount4 >= 0)
                {
                    taxes3 = (4500 * 0.28) + taxes2;

                    if(amount4 > 4500)
                    {
                        taxes4 = (amount4 * 0.28) + taxes3;

                        printf("R$ %.2f\n", taxes4);
                    }
                    else
                    {
                        taxes4 = (amount4 * 0.28) + taxes3;

                        printf("R$ %.2f\n", taxes4);
                    }
                }
                else
                {
                    taxes3 = (amount3 * 0.28) + taxes2;

                    printf("R$ %.2f\n", taxes3);
                }
            }
        }
    }


    return 0;
}
