#include <stdio.h>

// Función para calcular el factorial de un número
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Función para calcular la suma de los factoriales de los primeros n números
int suma_factoriales(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, suma_factoriales(n));
    return 0;
}