#include <stdio.h>

int main ()
{
    char seller_name[100];
    double fixed_salary, total_sale, bonus, salary;
    /*Taking employee name from the user*/
    scanf("%s", seller_name);
    /*taking salary input from the user*/
    scanf("%lf",&fixed_salary);
    /*taking total sale input from the user*/
    scanf("%lf",&total_sale);
    /*bonus calculation on the basis of 15% total sale*/
    bonus=(total_sale * 0.15);
    /*calculating final salary of an employee*/
    salary= (fixed_salary + bonus);
    /*print the total salary of an employee*/
    printf("TOTAL = R$ %.2lf\n",salary);

    return 0;


}

