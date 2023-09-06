#include <stdio.h>

void modificarNumero(int *ptr) {
    *ptr += 10; // Incrementa o valor em 10
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Valor antes da chamada da função: %d\n", numero);

    modificarNumero(&numero); // Passa o endereço da variável 'numero' para a função

    printf("Valor após a chamada da função: %d\n", numero);

    return 0;
}

questao 3

#include <stdio.h>

int main() {
    int numero;
    int *ptr;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    ptr = (int *)numero; // Conversão explícita de inteiro para ponteiro

    printf("Formato após a atribuição: %p\n", ptr);

    return 0;
}
