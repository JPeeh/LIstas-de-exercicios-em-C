#include <stdio.h>

#define CALCULAR_MEDIA(a, b, c, d) ((a + b + c + d) / 4.0)

int main() {
    int num1, num2, num3, num4;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);

    printf("Digite o quarto n�mero: ");
    scanf("%d", &num4);

    double media = CALCULAR_MEDIA(num1, num2, num3, num4);

    printf("A m�dia dos n�meros �: %.2lf\n", media);

    return 0;
}
