#include <stdio.h>


int main()
{
    float precoUnitario,dinheiro, totalPagar, troco;
    int quantidade;
    
    printf("preco unitario do produto: \n");
    scanf("%f", &precoUnitario);
    
    printf("Quantidade comprada: \n");
    scanf("%d", &quantidade);
    
    printf("Dinheiro trocado: \n");
    scanf("%f", &dinheiro);
    
    totalPagar = precoUnitario * quantidade;
    troco = dinheiro - totalPagar;
    
    if (dinheiro < totalPagar){
        printf("Dinheiro insuficiente! Valor restante %.2f", totalPagar - dinheiro);
    }
    
    else {
        printf("troco: %.2f \n", troco);
    }

    return 0;
}