#include <stdio.h>
#include <string.h>

int main ()
{
    int day1, day2;
    int hour1, minute1, second1, hour2, minute2, second2;
    int initial_time, ending_time, spending_time, time_in_days, time_in_hour, time_in_minute, time_in_second;
    int reminder1, reminder2, reminder3;

    char str1[10], str2[10];
    char a[5], b[5], c[5], d[5];

    scanf("%s %d", &str1, &day1);
    scanf("%d%s%d%s%d", &hour1, &a, &minute1, &b, &second1);

    scanf("%s %d", &str2, &day2);
    scanf("%d%s%d%s%d", &hour2, &c, &minute2, &d, &second2);


    initial_time = ((day1 * 86400) + (hour1 * 3600) + (minute1 * 60) + second1);
    ending_time = ((day2 * 86400) + (hour2 * 3600) + (minute2 * 60) + second2);

    spending_time = (ending_time - initial_time);


    time_in_days = spending_time / 86400;
    reminder1 = spending_time % 86400;
    time_in_hour = reminder1 / 3600;
    reminder2 = reminder1 % 3600;
    time_in_minute = reminder2 / 60;
    reminder3 = reminder2 % 60;
    time_in_second = reminder3;


    printf("%d dia(s)\n", time_in_days);
    printf("%d hora(s)\n", time_in_hour);
    printf("%d minuto(s)\n", time_in_minute);
    printf("%d segundo(s)\n", time_in_second);



    return 0;
}
