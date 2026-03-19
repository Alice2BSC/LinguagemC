#include <stdio.h>

int main (){
    
    float r, Pi = 3.14159, area;

    printf("Digite o valor do raio do circulo: \n");
    scanf("%f", &r);

    area = Pi * r * r;

    printf("Area = %.3f\n", area);

    return 0;
}