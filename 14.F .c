#include <stdio.h>

int suma_cuadrados(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    printf("La suma de los cuadrados de los números del 1 al %d es: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d^2 + ", i);
    }
    printf("\b\b = %d\n", suma_cuadrados(n));

    return 0;
}