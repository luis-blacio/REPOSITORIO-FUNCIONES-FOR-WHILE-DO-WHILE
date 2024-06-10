#include <stdio.h>

// Función que calcula el producto de una serie geométrica
long long producto_geom(int inicial, int razon, int terminos) {
    long long producto = 1;
    int terme_actual = inicial;
    for (int i = 0; i < terminos; i++) {
        producto *= terme_actual;
        terme_actual *= razon;
    }
    return producto;
}

int main() {
    int inicial, razon, terminos;
    printf("Ingrese el término inicial: ");
    scanf("%d", &inicial);
    printf("Ingrese la razón: ");
    scanf("%d", &razon);
    printf("Ingrese el número de términos: ");
    scanf("%d", &terminos);

    long long resultado = producto_geom(inicial, razon, terminos);
    printf("El producto de la serie geométrica es: %lld\n", resultado);

    return 0;
}