#include <stdio.h>

int main(){

    char nome[50];
    float valorPorHora, horasTrabalhadas, pagamento;

    printf("Nome: \n");
    scanf("%s", nome);

    printf("Valor por hora: \n");
    scanf("%f", &valorPorHora);

    printf("Horas trabalhadas: \n");
    scanf("%f", &horasTrabalhadas);

    pagamento = valorPorHora * horasTrabalhadas;

    printf("O pagamento para %s deve ser = %.2f \n", nome, pagamento);

}