#include <stdio.h>

int main () {

    float carro, distanciaPercorrida, combustivelGasto;

    printf("Distancia total percorrida: \n");
    scanf("%f", &distanciaPercorrida);

    printf("Total de gasto do combustivel: \n");
    scanf("%f", &combustivelGasto);

    carro = distanciaPercorrida / combustivelGasto;

    printf("Comsumo medio: %.3f\n", carro);
    return 0;
}