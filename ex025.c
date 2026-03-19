#include <stdio.h>

int main(){

    int numero, soma;
    soma = 0;

    printf("Digite o primeiro numero:");
    scanf("%d", &numero);

    while (numero != 0)
    {
        soma = soma + numero;
        printf("Digite outro numero: ");
        scanf("%d", &numero);
    }

    printf("Soma = %d\n", soma);
    
    return 0;
}