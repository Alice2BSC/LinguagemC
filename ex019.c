#include <stdio.h>

int main(){

    char escala;
    float c, f;

    printf("Voce vai digitar a temperatura em qual escala (C/F)?");
    scanf("%c", &escala);
    
    if (escala == 'F')
    {
        printf("Digite a temperatura em Fahrenheit:\n");
        scanf("%f", &f);
        c = (5.0/9.0) * (f - 32);
        printf("Temperatura equivalente em Celsius:%.2f\n", c);
    }
    else
    {
        printf("Digite a temperatura em Celsius:\n");
        scanf("%f", &c);
        f = c * (9.0/5.0) + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2f\n", f);
    }

    return 0;
}