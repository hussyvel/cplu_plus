#include <stdio.h>

void main (void)
{
    int segundos_na_hora;
    float media;

    segundos_na_hora = 60 * 60;
    media = (5 +  10 + 15 + 20) / 4;
    printf ("Numero de segundo em uma hora %d\n", segundos_na_hora);
    printf ("A média de 5, 10, 15 e 20 é %f\n" , media);
    printf ("O numero de segundos em 48 minutos é %d\n", segundos_na_hora - 12 * 60);
}