#include <stdio.h>

int main(){

    float valorPagar, preco;
    int quantidade, codigo;

    printf("Codigo do produto comprado:\n");
    scanf("%d", &codigo);

    printf("Quantidade comprada:\n");
    scanf("%d", &quantidade);

    switch (codigo) {
    case 1:
        preco = 5.00;
        break;
    case 2:
        preco = 3.50;
        break;
    case 3:
        preco = 4.80;
        break;
    case 4:
        preco = 8.90;
        break;
    case 5:
        preco = 7.32;
        break;
    default:
        break;
    }

    valorPagar = preco * quantidade;

    printf("Valor a pagar: R$ %.2f", valorPagar);
    return 0;
}