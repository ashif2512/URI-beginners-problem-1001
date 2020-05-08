#include <stdio.h>
#include <math.h>

int main ()
{
    double N;

    int hundred_taka, fifty_taka, tweenty_taka, ten_taka, five_taka, two_taka, one_taka;
    int remaining0, remaining1, remaining2, remaining3, remaining4, remaining5, remaining6, remaining7;
    int remaining8, remaining9, remaining10, remaining11, remaining12;
    int fifty_paisa, tweenty_five_paisa, ten_paisa, five_paisa, one_paisa;

    /*receiving input from the user*/
    scanf("%lf", &N);

    /*converting the amount into coins(paisa) for smooth calculation*/
    remaining0 = N * 100;

    /*calculating the amount in notes*/
    hundred_taka = remaining0 / 10000;
    remaining1 = remaining0 % 10000;
    fifty_taka = remaining1 / 5000;
    remaining2 = remaining1 % 5000;
    tweenty_taka = remaining2 / 2000;
    remaining3 = remaining2 % 2000;
    ten_taka = remaining3 / 1000;
    remaining4 = remaining3 % 1000;
    five_taka = remaining4 / 500;
    remaining5 = remaining4 % 500;
    two_taka = remaining5 / 200;
    remaining6 = remaining5 % 200;

    /*calculating the rest of the amount into coins*/
    one_taka = remaining6 / 100;
    remaining7 = remaining6 % 100;
    fifty_paisa = remaining7 / 50;
    remaining8 = remaining7 % 50;
    tweenty_five_paisa = remaining8 / 25;
    remaining9 = remaining8 % 25;
    ten_paisa = remaining9 / 10;
    remaining10 = remaining9 % 10;
    five_paisa = remaining10 / 5;
    remaining11 = remaining10 % 5;
    one_paisa = remaining11 / 1;
    remaining12 = remaining11 % 1;

    /*printing the notes and coins given by the calculation*/
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", hundred_taka);
    printf("%d nota(s) de R$ 50.00\n", fifty_taka);
    printf("%d nota(s) de R$ 20.00\n", tweenty_taka);
    printf("%d nota(s) de R$ 10.00\n", ten_taka);
    printf("%d nota(s) de R$ 5.00\n", five_taka);
    printf("%d nota(s) de R$ 2.00\n", two_taka);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", one_taka);
    printf("%d moeda(s) de R$ 0.50\n", fifty_paisa);
    printf("%d moeda(s) de R$ 0.25\n", tweenty_five_paisa);
    printf("%d moeda(s) de R$ 0.10\n", ten_paisa);
    printf("%d moeda(s) de R$ 0.05\n", five_paisa);
    printf("%d moeda(s) de R$ 0.01\n", one_paisa);


    return 0;



}
