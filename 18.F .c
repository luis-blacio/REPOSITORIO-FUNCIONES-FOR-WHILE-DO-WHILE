#include <stdio.h>

int es_primo(int num) {
    if (num <= 1) return 0; // 0 y 1 no son primos
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // si num es divisible entre i, no es primo
    }
    return 1; // si no se encontró divisor, es primo
}

int main() {
    int n, contador = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    printf("Los números primos hasta %d son: ", n);
    for (int i = 2; i <= n; i++) {
        if (es_primo(i)) {
            printf("%d ", i);
            contador++;
        }
    }
    printf("\nHay %d números primos hasta %d.\n", contador, n);
    return 0;
}