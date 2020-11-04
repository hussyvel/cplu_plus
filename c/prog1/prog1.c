#include <stdio.h>

void main(void)
{
    int positivo = 32767;
    int negativo = -32768;

    printf ("%d + 1 é %d\n" , positivo, positivo + 1);
    printf ("%d - 1 é %d\n", negativo, negativo - 1);
}