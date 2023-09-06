#include <stdio.h>

#define MAIOR_IDADE(idade) (idade >= 18 ? "Maior de Idade" : "Menor de Idade")

int main() {
    char nome[50];
    int idade;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("%s\n", MAIOR_IDADE(idade));

    return 0;
}

