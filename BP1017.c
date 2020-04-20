#include <stdio.h>

int main ()
{
    int spent_time, average_speed;
    float total_distance, needed_oil_liters;

    scanf("%d", &spent_time);
    scanf("%d", &average_speed);

    total_distance = spent_time * average_speed;
    needed_oil_liters = total_distance / 12;

    printf("%.3f\n", needed_oil_liters);

    return 0;
}
