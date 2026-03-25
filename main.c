#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, z;
    printf("Digite o valor Y: ");
    scanf("%f",&y);

    printf("Digite o valor Z: ");
    scanf("%f",&z);

    x = pow(y,2) + pow(z,3) + 1;


    printf("O resultado e %.2f",x);

    return 0;
}
