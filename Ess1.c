#include <stdio.h>

int main()
{

    int numero1, numero2, risultato;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    risultato = numero1 * numero2;

    printf("Il risultato della moltiplicazione è: %d\n", risultato);

    return 0;
}
