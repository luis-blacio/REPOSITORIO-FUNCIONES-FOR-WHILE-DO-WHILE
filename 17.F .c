#include <stdio.h>

float calcular_producto(int n) {
    float producto = 1.0;
    for(int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }
    return producto;
}

int main() {
    int n;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    float producto = calcular_producto(n);

    printf("La serie del producto es: ");
    for(int i = 1; i <= n; i++) {
        printf("1/%d * ", i);
    }
    printf("\nResultado decimal: %.2f\n", producto);

    int denominador = 1;
    for(int i = 1; i <= n; i++) {
        denominador *= i;
    }

    int numerador = (int) (producto * denominador);
    printf("Resultado fraccionario: %d/%d\n", numerador, denominador);

    return 0;
}