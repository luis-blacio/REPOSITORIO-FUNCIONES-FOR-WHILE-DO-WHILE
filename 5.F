#include <stdio.h>

void bienvenida() {
    printf("Bienvenido al generador de serie de Fibonacci!\n");
}

int main() {
    int n, t1 = 0,  t2 = 1,  nextTerm = 0,  i = 1;

    bienvenida();

    printf("Ingrese el número de términos de la serie de Fibonacci: ");
    scanf("%d", &n);

    printf("La serie de Fibonacci es: ");

    while (i <= n) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        i++;
    }

    return 0;
}