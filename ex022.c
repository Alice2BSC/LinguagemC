#include <stdio.h>

int main(){

    float salario, porcentagem, aumento, novoSalario;

    printf("Digite o salario da pessoa: \n");
    scanf("%f", &salario);

    if (salario <= 1000.0)
    {
        porcentagem = 20;
    }

    else if (salario <= 3000.0)
    {
        porcentagem = 15;
    }

    else if (salario <= 8000.0)
    {
        porcentagem = 10;
    }
    
    else
    {
        porcentagem = 5;
    }

    aumento = salario * porcentagem / 100;
    novoSalario = salario + aumento;

    printf("Novo salario = R$ %.2f\n", novoSalario);
    printf("Aumento = R$ %.2f\n", aumento);
    printf("Porcentagem = %.0f %%", porcentagem);
    
    return 0;
}