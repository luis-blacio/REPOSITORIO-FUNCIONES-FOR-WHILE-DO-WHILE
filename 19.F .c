#include <stdio.h>

int calcula_triangular(int n) {
    int triangular = 0;
    for (int i = 1; i <= n; i++) {
        triangular += i;
    }
    return triangular;
}

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int triangular = calcula_triangular(n);
    printf("1");
    for (int i = 2; i <= n; i++) {
        printf(" + %d", i);
    }
    printf("\nEl %d-ésimo número triangular es: %d\n", n, triangular);

    return 0;
}