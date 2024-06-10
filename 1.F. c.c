#include <stdio.h>

int suma_digitos(int numero) {
    int suma = 0;
    while (numero!= 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int resultado = suma_digitos(numero);

    printf("La suma de los dígitos es: %d\n", resultado);

    return 0;
}