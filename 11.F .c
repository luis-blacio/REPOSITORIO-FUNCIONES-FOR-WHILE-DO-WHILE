#include <stdio.h>
int mcd_for(int a, int b) {
    int i, mcd = 1;
    for (i = 2; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
        }
    }
    return mcd;
}
int main() {
    int a, b;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
    printf("El MCD de %d y %d es %d\n", a, b, mcd_for(a, b));
    return 0;
}