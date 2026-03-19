#include <stdio.h>

int main() {

    float preco, dinheiro, troco;
    int quantidade;
    
    printf("Preco unitario do produto:\n");
    scanf("%f", &preco);
    
    printf("Dinheiro recebido:\n");
    scanf("%f", &dinheiro);

    printf("Quantidade comprada:\n");
    scanf("%d", &quantidade);

    troco = dinheiro - preco * quantidade;

    printf("Troco: %.2f\n", troco);

    return 0;
}