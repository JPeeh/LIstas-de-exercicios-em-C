#include <stdio.h>

#define SOMAR(x, y) (x + y)
#define SUBTRAIR(x, y) (x - y)
#define DIVIDIR(x, y) (x / y)
#define MULTIPLICAR(x, y) (x * y)

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", SOMAR(num1, num2));
    printf("Subtração: %d\n", SUBTRAIR(num1, num2));
    printf("Divisão: %d\n", DIVIDIR(num1, num2));
    printf("Multiplicação: %d\n", MULTIPLICAR(num1, num2));

    return 0;
}
