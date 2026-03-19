#include <stdio.h>

int main() {

    int a, b, c, menor;

    printf("primeiro valor: \n");
    scanf("%d", &a);

    printf("Segundo valor: \n");
    scanf("%d", &b);

    printf("Terceiro valor: \n");
    scanf("%d", &c);

    if (a <= b && a <= c) {
        printf("Menor:%d \n", a);
    }

    else if (b <= a && b <= c) {
        printf("Menor:%d \n", b);
    }

     else{
       printf("Menor:%d \n", c);
     }
    
    return 0;
}