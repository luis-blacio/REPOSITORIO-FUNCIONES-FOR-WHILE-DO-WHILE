#include <stdio.h>
int es_primo_for(int n) {
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // no es primo
        }
    }
    return 1; // es primo
}
int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (es_primo_for(num)) {
        printf("%d es primo\n", num);
    } else {
        printf("%d no es primo\n", num);
    }
    return 0;
}