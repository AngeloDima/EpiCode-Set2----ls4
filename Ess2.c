#include <stdio.h>

int main()
{

    int numero1, numero2;
    float media;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    media = (float)(numero1 + numero2) / 2;

    printf("La media aritmetica è: %.2f\n", media);

    return 0;
}
