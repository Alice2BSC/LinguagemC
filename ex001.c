#include <stdio.h>

int main() {
    char produto1[20] = "computador";
    char produto2[20] = "TV";
    float preco1 = 2100.5;
    float preco2 = 1830.0;
    int idade = 30;
    int codigo = 5291;
    char genero = 'F';

     
    printf("O preco do computador custa:%.2f\n", preco1);
    printf("O preco da TV custa:%.2f\n", preco2);
    printf("Codigo:%d\n", codigo);
    printf("Dados da pessoa: genero %c e idade %d\n", genero,idade);

    return 0;
}