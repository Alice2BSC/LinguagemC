#include <stdio.h>

int main () {
    
    int x,y,soma;

    printf("Digite o valor do X:\n");
    scanf("%d", &x);
 
    printf("Digite o valor do Y:\n");
    scanf("%d", &y);

    soma = x + y;

    printf("Soma = %d\n", soma);
    return 0;
}