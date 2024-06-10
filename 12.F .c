#include <stdio.h>

void mensajeBienvenida() {
    printf("Bienvenido al programa de suma de números impares\n");
}

int main() {
    int n, suma = 0;
    mensajeBienvenida();
    printf("Ingrese un número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            suma += i;
            printf("%d + ", i);
        }
    }
    printf("\b\b  \n"); // para eliminar el "+ " extra al final
    printf("La suma de los números impares es: %d\n", suma);

    return 0;
}