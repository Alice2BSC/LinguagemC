#include <stdio.h>

int main()  {

    float largura, comprimento, metroQuadrado, area, preco;

    printf("Digite a largura do terreno:\n");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno:\n");
    scanf("%f", &comprimento);

    printf("Digite o valor do metro quadrado:\n");
    scanf("%f", &metroQuadrado);

    area = largura * comprimento;
    preco = area * metroQuadrado;

    printf("Area do terreno; %.2f\n", area);
    printf("Preco do terreno: %.2f\n", preco);

    return 0;
}