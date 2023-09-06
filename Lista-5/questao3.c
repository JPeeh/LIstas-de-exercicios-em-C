#include <stdio.h>

#define CALCULAR_MEDIA(a, b, c, d) ((a + b + c + d) / 4.0)

int main() {
    int num1, num2, num3, num4;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    printf("Digite o quarto número: ");
    scanf("%d", &num4);

    double media = CALCULAR_MEDIA(num1, num2, num3, num4);

    printf("A média dos números é: %.2lf\n", media);

    return 0;
}
