#include <stdio.h>

int main ()
{
    int age, days, months, years;
    int remaining1, remaining2;

    /*receiving input from the user*/
    scanf("%d", &age);

    /*calculating years, months, days from the input*/
    years = age / 365;
    remaining1= age % 365;
    months = remaining1 / 30;
    remaining2 = remaining1 % 30;
    days = remaining2;

    /*printing the calculating values*/
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;


}
