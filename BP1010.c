#include <stdio.h>

int main ()
{
    int product_code1, product_unit1, product_code2, product_unit2;
    float product_price_for_one_unit1, product_price_for_one_unit2, price1, price2, total_price;

    /*taking input from the user*/
    scanf("%d", &product_code1);
    scanf("%d", &product_unit1);
    scanf("%f",&product_price_for_one_unit1);
    scanf("%d", &product_code2);
    scanf("%d", &product_unit2);
    scanf("%f",&product_price_for_one_unit2);

    /*calculating the price of products*/
    price1=product_unit1 * product_price_for_one_unit1;
    price2=product_unit2 * product_price_for_one_unit2;

    total_price = price1+price2;

    /*print the price of the product*/
    printf("VALOR A PAGAR: R$ %.2f\n", total_price);

    return 0;

}
