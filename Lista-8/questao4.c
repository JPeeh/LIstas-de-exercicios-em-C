#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int top;
} Pilha;

void inicializarPilha(Pilha *pilha) {
    pilha->top = -1;
}

int estaVazia(Pilha *pilha) {
    return pilha->top == -1;
}

int estaCheia(Pilha *pilha) {
    return pilha->top == MAX_SIZE - 1;
}

void push(Pilha *pilha, int valor) {
    if (estaCheia(pilha)) {
        printf("Erro: a pilha está cheia.\n");
        return;
    }

    pilha->items[++pilha->top] = valor;
}

int pop(Pilha *pilha) {
    if (estaVazia(pilha)) {
        printf("Erro: a pilha está vazia.\n");
        return -1;
    }

    return pilha->items[pilha->top--];
}

int main() {
    Pilha pilha;
    inicializarPilha(&pilha);

    int *ptr1, *ptr2, *ptr3;

    ptr1 = (int *)malloc(sizeof(int));
    ptr2 = (int *)malloc(sizeof(int));
    ptr3 = (int *)malloc(sizeof(int));

    printf("Digite o valor para o primeiro ponteiro: ");
    scanf("%d", ptr1);

    printf("Digite o valor para o segundo ponteiro: ");
    scanf("%d", ptr2);

    printf("Digite o valor para o terceiro ponteiro: ");
    scanf("%d", ptr3);

    push(&pilha, *ptr1);
    push(&pilha, *ptr2);
    push(&pilha, *ptr3);

    printf("\nValores na pilha:\n");
    while (!estaVazia(&pilha)) {
        int valor = pop(&pilha);
        printf("%d\n", valor);
    }

    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
