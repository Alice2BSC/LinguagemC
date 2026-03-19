#include <stdio.h>

int main(){

    float glicose;

    printf("Digite a medida da glicose:\n");
    scanf("%f", &glicose);

    if (glicose <= 100)
    {
        printf("Classificacao: normal");
    }

    else if (glicose <= 140.0)
    {
        printf("Classificacao: elevado");
    }

    else
    {
        printf("Classificacao: diabetes");
    }
    
    return 0;
}