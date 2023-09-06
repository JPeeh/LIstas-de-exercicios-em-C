#include <stdio.h>

void trocar(int *ptr, int novo_valor) {
    *ptr = novo_valor;
}

int main() {
    int numero;
    int *ptr = NULL;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    printf("Valor antes da troca:\n");
    printf("N�mero: %d\n", numero);
    printf("Ponteiro: %p\n", ptr);

    ptr = &numero;  // Armazena o endere�o da vari�vel 'numero' no ponteiro

    int novo_valor;
    printf("Digite o novo valor: ");
    scanf("%d", &novo_valor);

    trocar(ptr, novo_valor);  // Realiza a troca do conte�do usando o ponteiro

    printf("Valor ap�s a troca:\n");
    printf("N�mero: %d\n", numero);
    printf("Ponteiro: %p\n", ptr);

    return 0;
}
