#include <stdio.h>

void trocar(int *ptr, int novo_valor) {
    *ptr = novo_valor;
}

int main() {
    int numero;
    int *ptr = NULL;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Valor antes da troca:\n");
    printf("Número: %d\n", numero);
    printf("Ponteiro: %p\n", ptr);

    ptr = &numero;  // Armazena o endereço da variável 'numero' no ponteiro

    int novo_valor;
    printf("Digite o novo valor: ");
    scanf("%d", &novo_valor);

    trocar(ptr, novo_valor);  // Realiza a troca do conteúdo usando o ponteiro

    printf("Valor após a troca:\n");
    printf("Número: %d\n", numero);
    printf("Ponteiro: %p\n", ptr);

    return 0;
}
