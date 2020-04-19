#include <stdio.h>
#include <math.h>

int main ()
{
    double x1, y1, x2, y2, value1, value2, result1, result2, result3, result;

    /*receiving values from the user*/
    scanf("%lf%lf", &x1, &y1);
    scanf("%lf%lf", &x2, &y2);

    /*subtracting between x2, x1*/
    value1= x2 - x1;
    /*finding the power of 2 of value1*/
    result1= (pow(value1,2));

    /*subtracting between y2, y1*/
    value2= y2 - y1;
    /*finding the power of 2 of value2*/
    result2= (pow(value2,2));

    /*adding values of result1 and result2*/
    result3= result1+result2;

    /*finding the root of result3 value*/
    result=sqrt(result3);

    /*printing the value of result*/
    printf("%.4lf\n", result);

    return 0;
}
