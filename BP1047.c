#include<stdio.h>

int main ()
{
    int initial_hour, initial_minute, final_hour, final_minute, initial_time, final_time;
    int duration_time, duration_hour, duration_minute;

    /*receiving input from the user*/
    scanf("%d%d%d%d", &initial_hour, &initial_minute, &final_hour, &final_minute);

    /*converting time from hours to minutes*/
    initial_time = ((initial_hour * 60) + initial_minute);
    final_time = ((final_hour * 60) + final_minute);

    /*applying conditional logic to find the duration of the starting & ending of the game*/
    if(initial_time == final_time)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(final_time > initial_time)
    {
        duration_time = final_time - initial_time;
        duration_hour = duration_time / 60;
        duration_minute = duration_time % 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_minute);

    }
    else if(final_time < initial_time)
    {
        duration_time = (1440 - initial_time) + final_time;
        duration_hour = duration_time / 60;
        duration_minute = duration_time % 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_minute);

    }


    return 0;
}
