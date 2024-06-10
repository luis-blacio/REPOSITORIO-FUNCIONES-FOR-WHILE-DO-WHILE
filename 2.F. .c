#include <stdio.h>

int invertir_numero(int num) {
    int inverso = 0, resto;
    do {
        resto = num % 10;
        inverso = inverso * 10 + resto;
        num /= 10;
    } while (num != 0);
    return inverso;
}

int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    int inverso = invertir_numero(num);

    printf("El inverso del número es: %d\n", inverso);
    return 0;
}