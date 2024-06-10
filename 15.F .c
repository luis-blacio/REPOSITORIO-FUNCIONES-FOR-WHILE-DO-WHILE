#include <stdio.h>

int suma_cubos(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i * i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int suma = suma_cubos(n);

    for (int i = 1; i <= n; i++) {
        printf("%d^3 + ", i);
    }
    printf("\b\b = %d\n", suma);

    return 0;
}