#include <stdio.h>
int main ()
{
    int i, num, cont = 0;
    
    for (i = 0; i < 10; i++)
    {
        printf ("Digite o numero: \n", i);
        scanf ("%d", &num);

        if (num > 20)
        {
            cont++;
        }
    }

    printf ("A quantidade de numeros maiores que vinte e: %d", cont);

    return 0;
}