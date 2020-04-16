#include <stdio.h>
int main ()
{
    int a,b,c,d;
    int mul1,mul2,sub;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    mul1=a*b;
    mul2=c*d;
    sub=mul1-mul2;
    printf("DIFERENCA = %d\n",sub);
    return 0;
}
