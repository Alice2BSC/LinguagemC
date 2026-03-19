#include <stdio.h>

int main(){

    int horaInicial, horaFinal, duracao;

    printf("Hora inicial: \n");
    scanf("%d", &horaInicial);

    printf("Hora final: \n");
    scanf("%d", &horaFinal);

    if(horaInicial < horaFinal){
        duracao = horaFinal - horaInicial;
    }

    else
    {
        duracao = 24 - horaInicial + horaFinal;
    }
    
    printf("O jogo durou %d horas! \n", duracao);

    return 0;
}