#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int start_time, end_time, total_time;

    /*receiving input from the user*/
    scanf("%d%d", &start_time, &end_time);

    /*applying conditional logic for finding the game time*/
    if(((start_time >= 0) && (start_time < 12)) && ((end_time > 0) && (end_time <= 12)) && (start_time != end_time))
    {
        total_time = abs(start_time - end_time);

        printf("O JOGO DUROU %d HORA(S)\n", total_time);
    }
    else if(((start_time >= 0) && (start_time < 12)) && ((end_time > 12) && (end_time <= 24)) && (start_time != end_time))
    {
        total_time = abs(start_time - end_time);

        printf("O JOGO DUROU %d HORA(S)\n", total_time);
    }
    else if(((start_time >= 12) && (start_time <= 24)) && ((end_time >= 0) && (end_time <= 12)) && (start_time != end_time))
    {
        total_time = (abs(start_time - 24) + end_time);

        printf("O JOGO DUROU %d HORA(S)\n", total_time);
    }
    else if(((start_time >= 12) &&(start_time <= 24)) && ((end_time >= 12) && (end_time < 24)) && (start_time != end_time))
    {
        total_time = abs(start_time - end_time);

        printf("O JOGO DUROU %d HORA(S)\n", total_time);
    }
    else if(start_time == end_time)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }


    return 0;
}
