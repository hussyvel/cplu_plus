#include <stdio.h>

void main (void)
{
    int int_valor = 5;
    float flt_valor = 3.33;

    printf ("Justificando à direita %5d valor\n", int_valor);
    printf ("Justificando à esquerda %-5d valor\n", int_valor);
    printf ("Justificando à direita %7.2f valor\n", flt_valor);
    printf ("Justificando à esquerda %-7.2f valor\n", flt_valor);
}