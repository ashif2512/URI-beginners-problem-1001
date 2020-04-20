#include <stdio.h>

int main ()
{
    int distance, time;

    /*inputting the distance from the user*/
    scanf("%d", &distance);

    /*calculating the time for completing the given distance*/
    time = distance * 2;

    /*printing the needed time*/
    printf("%d minutos\n", time);

    return 0;

}
