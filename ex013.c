#include <stdio.h>
#include <math.h>

int main () {

    float a, b, c, x1, x2, delta;

    printf("Coeficiente a: \n");
    scanf("%f", &a);

    printf("Coeficiente b: \n");
    scanf("%f", &b);

    printf("Coeficiente c: \n");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
       printf("Esta equacao nao possui raizes reais");
    }

    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
    }
    
    printf("X1 = %.4lf\n", x1);
    printf("X2 = %.4lf\n", x2);

    return 0;
}