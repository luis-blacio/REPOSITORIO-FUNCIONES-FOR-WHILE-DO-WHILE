#include <stdio.h>

int suma_pares(int n) {
    int suma = 0;
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    int suma = suma_pares(n);

    printf("La suma de los números pares es: %d\n", suma);

    return 0;
}