#include <stdio.h>

int calcularSuma(int n) {
    int suma = 0, i = 1;
    while (i <= n) {
        suma += i;
        i++;
    }
    return suma;
}

int main() {
    int n;

    printf("Ingrese el número de términos: ");
    scanf("%d", &n);

    printf("La serie es: ");
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" + ");
        }
    }
    printf("\n");

    int suma = calcularSuma(n);
    printf("La suma de los primeros %d términos es: %d\n", n, suma);

    return 0;
}