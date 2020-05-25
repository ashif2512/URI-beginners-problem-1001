#include <stdio.h>

int main ()
{
    float number[6];
    int i, positive = 0, negative = 0;

    scanf("%f", &number[0]);
    scanf("%f", &number[1]);
    scanf("%f", &number[2]);
    scanf("%f", &number[3]);
    scanf("%f", &number[4]);
    scanf("%f", &number[5]);

    for(i = 0; i < 6; i++)
    {
        if(number[i] >= 0)
        {
            positive++;
        }
    }

    printf("%d valores positivos\n", positive);


    return 0;
}
