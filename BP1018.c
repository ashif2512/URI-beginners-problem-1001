#include <stdio.h>

int main ()
{
    int amount, hundred_taka, fifty_taka, tweenty_taka, ten_taka, five_taka, two_taka, one_taka;
    int remaining1, remaining2, remaining3, remaining4, remaining5, remaining6, remaining7;

    /*receiving input from the user*/
    scanf("%d", &amount);

    /*calculating smallest possible number of banknotes using the given notes*/
    hundred_taka = amount / 100;
    remaining1 = amount % 100;
    fifty_taka = remaining1 / 50;
    remaining2 = remaining1 % 50;
    tweenty_taka = remaining2 / 20;
    remaining3 = remaining2 % 20;
    ten_taka = remaining3 / 10;
    remaining4 = remaining3 % 10;
    five_taka = remaining4 / 5;
    remaining5 = remaining4 % 5;
    two_taka = remaining5 / 2;
    remaining6 = remaining5 % 2;
    one_taka = remaining6 / 1;
    remaining7 = remaining7 % 1;

    /*printing the smallest amount of banknotes*/
    printf("%d\n", amount);
    printf("%d nota(s) de R$ 100,00\n", hundred_taka);
    printf("%d nota(s) de R$ 50,00\n", fifty_taka);
    printf("%d nota(s) de R$ 20,00\n", tweenty_taka);
    printf("%d nota(s) de R$ 10,00\n", ten_taka);
    printf("%d nota(s) de R$ 5,00\n", five_taka);
    printf("%d nota(s) de R$ 2,00\n", two_taka);
    printf("%d nota(s) de R$ 1,00\n", one_taka);

    return 0;



}
