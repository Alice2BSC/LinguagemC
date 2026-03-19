#include <stdio.h>

int main () {

    char nome1[20];
    int idade1;
    char nome2[20];
    int idade2;
    float media;

    printf("Dados da primeira pessoa: \n");
    printf("Digite o nome da primeira pessoa:\n");
    scanf("%s", nome1);
    printf("Idade: \n");
    scanf("%d", &idade1);
    
    printf("Dados da segunda pessoa: \n");
    printf("Digite o nome da segunda pessoa:\n");
    scanf("%s", nome2);
    printf("Idade: \n");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2.0;

    printf("A idade média de %s e %s é de %.1f anos \n", nome1, nome2, media);

    return 0;
}