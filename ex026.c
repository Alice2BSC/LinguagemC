#include <stdio.h>

int main()
{
    char nome1 [20], nome2[20];
    int idade1, idade2;
    float media;
    
    printf("Dados da primeira pessoa: \n");
    printf("Nome: \n");
    scanf("%s", nome1);
    
    printf("Idade: \n");
    scanf("%d", &idade1);
    
    printf("Dados da segunda pessoa: \n");
    printf("Nome: \n");
    scanf("%s", nome2);
    
    printf("Idade: \n");
    scanf("%d", &idade2);
    
    media = (idade1 + idade2) / 2.0;
    
    printf("A idade media de %s e %s e de %.1lf. \n", nome1, nome2, media);
    
    return 0;
}