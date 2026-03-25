#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dado1, dado2, dado3, dado4;
    srand(time(NULL));

    dado1 = 1 + rand() % (6 - 1 + 1);
    dado2 = 1 + rand() % (6 - 1 + 1);
    dado3 = 1 + rand() % (6 - 1 + 1);
    dado4 = 1 + rand() % (6 - 1 + 1);

    printf("Dado lancado. Valor: %d\n",dado1);
    printf("Dado lancado. Valor: %d\n",dado2);
    printf("Dado lancado. Valor: %d\n",dado3);
    printf("Dado lancado. Valor: %d\n",dado4);

    return 0;
}
