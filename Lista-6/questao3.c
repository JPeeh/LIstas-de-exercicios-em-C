#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	def calcular_quadrado(vetor):
    vetor_quadrado = []
    for num in vetor:
        quadrado = num ** 2
        vetor_quadrado.append(quadrado)
    return vetor_quadrado

def calcular_soma(vetor, x, y):
    if x < len(vetor) and y < len(vetor):
        return vetor[x] + vetor[y]
    else:
        return None

# Ler o conjunto de números reais
numeros = input("Digite os números reais separados por espaço: ").split()
numeros = [float(num) for num in numeros]

# Calcular o quadrado das componentes do vetor
vetor_quadrado = calcular_quadrado(numeros)

# Pedir as posições x e y para calcular a soma
x = int(input("Digite a posição x: "))
y = int(input("Digite a posição y: "))

# Calcular e imprimir a soma das posições x e y
soma = calcular_soma(vetor_quadrado, x, y)
if soma is not None:
    print("A soma das posições x e y é:", soma)
else:
    print("As posições x e y estão fora do intervalo válido.")

	return 0;
}
