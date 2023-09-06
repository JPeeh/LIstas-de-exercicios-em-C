#include <stdio.h>

long long int calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int inicio = 30;
    int fim = 33;

    for (int i = inicio; i <= fim; i++) {
        long long int fatorial = calcularFatorial(i);
        printf("Fatorial de %d: %lld\n", i, fatorial);
    }

    return 0;
}
