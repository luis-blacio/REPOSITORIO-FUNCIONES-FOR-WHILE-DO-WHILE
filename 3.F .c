#include <stdio.h>

int calcularPotencia(int base, int exponente) {
    int resultado = 1, i = 0;
    while (i < exponente) {
        resultado += resultado * (base - 1);
        i++;
    }
    return resultado;
}

int main() {
    int base, exponente;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    int resultado = calcularPotencia(base, exponente);

    printf("La potencia de %d elevado a %d es: %d\n", base, exponente, resultado);
    return 0;
}