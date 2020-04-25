#include <stdio.h>

int main ()
{
    int duration, hours, minutes, seconds;
    int remaining1, remaining2;

    /*receiving input from the user*/
    scanf("%d", &duration);

    /*calculating hours, minutes, seconds using the given input*/
    hours = duration / 3600;
    remaining1 = duration % 3600;
    minutes = remaining1 / 60;
    remaining2 = remaining1 % 60;
    seconds = remaining2;

    /*printing the calculated value*/
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
