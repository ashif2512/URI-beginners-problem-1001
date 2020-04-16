#include <stdio.h>
int main ()
{
    int employee_number, month_worked_hours;
    double amount_received_per_hour, salary;

    scanf("%d",&employee_number);
    scanf("%d",&month_worked_hours);
    scanf("%lf",&amount_received_per_hour);

    salary=amount_received_per_hour * month_worked_hours;

    printf("NUMBER = %d\n",employee_number);
    printf("SALARY = U$ %.2lf\n",salary);

    return 0;


}
