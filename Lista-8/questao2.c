#include <stdio.h>

void modificarNumero(int *ptr) {
    *ptr += 10; // Incrementa o valor em 10
}

int main() {
    int numero;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    printf("Valor antes da chamada da fun��o: %d\n", numero);

    modificarNumero(&numero); // Passa o endere�o da vari�vel 'numero' para a fun��o

    printf("Valor ap�s a chamada da fun��o: %d\n", numero);

    return 0;
}

questao 3

#include <stdio.h>

int main() {
    int numero;
    int *ptr;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    ptr = (int *)numero; // Convers�o expl�cita de inteiro para ponteiro

    printf("Formato ap�s a atribui��o: %p\n", ptr);

    return 0;
}
