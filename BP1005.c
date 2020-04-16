#include <stdio.h>
int main ()
{
    double A,B,E;
    scanf("%lf%lf",&A,&B);
    E=(((A*3.5)+(B*7.5))/(3.5+7.5));
    printf("MEDIA = %.5lf\n",E);
    return 0;
}
