#include <stdio.h>

float calcularSuma(int n) {
    float suma = 0.0;
    for(int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }
    return suma;
}

int main() {
    int n;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    float suma = calcularSuma(n);

    printf("La suma de la serie es: ");
    for(int i = 1; i <= n; i++) {
        printf("1/%d + ", i);
    }
    printf("\nResultado decimal: %.2f\n", suma);

    int denominador = 1;
    for(int i = 1; i <= n; i++) {
        denominador *= i;
    }

    int numerador = (int) (suma * denominador);
    printf("Resultado fraccionario: %d/%d\n", numerador, denominador);

    return 0;
}