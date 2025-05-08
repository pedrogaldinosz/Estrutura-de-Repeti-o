//Recebe 5 numeros e mostra os pares

#include <stdio.h>
int main ()
{
    int i, num, cont = 0;

    for (i = 0; i < 5; i++)
    {
        printf ("Digite o numero: \n");
        scanf ("%d ", &num);

        if (num % 2 == 0)
        {
            cont ++;
        }
    }

    printf ("A quantidade de numeros pares e: %d\n", cont);


    return 0;
}