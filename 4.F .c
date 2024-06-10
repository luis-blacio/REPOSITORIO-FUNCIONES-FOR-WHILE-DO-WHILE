#include <stdio.h>

// Función para calcular la raíz cúbica
float calcular_raiz_cubica(int valor) {
    float aproximacion = 0.0;
    do {
        aproximacion += 0.001;
    } while (aproximacion * aproximacion * aproximacion < valor);
    if (aproximacion * aproximacion * aproximacion > valor) {
        aproximacion -= 0.001; // ajustar la raíz cúbica si no es exacta
    }
    return aproximacion;
}

int main() {
    int numero_usuario; // número del que se quiere calcular la raíz cúbica
    float resultado_raiz; // variable que almacenará la raíz cúbica

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero_usuario);

    // Calcular la raíz cúbica utilizando la función
    resultado_raiz = calcular_raiz_cubica(numero_usuario);

    // Mostrar el resultado con 3 decimales
    printf("La raíz cúbica de %d es %.3f\n", numero_usuario, resultado_raiz);

    return 0;
}