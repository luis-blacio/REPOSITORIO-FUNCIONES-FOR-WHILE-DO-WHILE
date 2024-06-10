#include <stdio.h>

int calcular_factorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    int factorial = calcular_factorial(num);

    printf("El factorial de %d es %d\n", num, factorial);
    return 0;
}