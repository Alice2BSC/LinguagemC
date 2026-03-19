#include <stdio.h>

int main() {

    float A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida A: \n");
    scanf("%f", &A);

    printf("Digite a medida B: \n");
    scanf("%f", &B);

    printf("Digite a medida C: \n");
    scanf("%f", &C);

    areaQuadrado = A * A;
    areaTriangulo = A * B / 2;
    areaTrapezio = (A + B) * C / 2;

    printf("Area do Quandrado: %.4f\n", areaQuadrado);
    printf("Area do retangulo:%.4f\n", areaTriangulo);
    printf("Area do Trapezio: %.4f\n", areaTrapezio);

    return 0;
}