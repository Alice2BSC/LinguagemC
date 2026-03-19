#include <stdio.h>

int main (){

    float d1, d2,d3, maior;

    printf("Digite as tres distancias:\n");
    scanf("%f %f %f", &d1, &d2, &d3);

    if (d1 > d2 && d1 > d3)
    {
        maior = d1;
    }

    else if(d2 > d3){
        maior  = d2;
    }

    else
    {
        maior = d3;
    }

    printf("Maior distancia: %.2f\n", maior);

    return 0;
}