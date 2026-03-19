#include <stdio.h>

int main (){

    int totalSegundo, horas, minutos, segundos, resto;

    printf("Digite a duracao em segundos: \n");
    scanf("%d", &totalSegundo);

    horas = totalSegundo / 3600;
    resto = totalSegundo % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}