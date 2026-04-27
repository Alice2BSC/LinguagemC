#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, x1, x2;
    
    printf("Coeficiente A: \n");
    scanf("%lf", &a);
    
    printf("Coeficiente B: \n");
    scanf("%lf", &b);
    
    printf("Coeficiente C: \n");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;
    
    if (delta < 0) {
       printf("A equacao nao possui raizes reais\n"); 
    } else {
       x1 = (-b + sqrt(delta)) / (2*a);
       x2 = (-b - sqrt(delta)) / (2*a);
       printf("x1 = %.4f\n", x1);
       printf("x2 = %.4f\n", x2);
    }
    
    return 0;
}