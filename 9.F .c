#include <stdio.h>
int contarDigitosFor(int num) {
    int contador = 0;
    for (; num!= 0; num /= 10) {
        contador++;
    }
    return contador;
}
int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    printf("El número de dígitos es: %d\n", contarDigitosFor(num));
    return 0;
}
