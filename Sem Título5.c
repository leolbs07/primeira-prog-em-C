#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	// Declarando variáveis 
	float valorA, calculo;
	
	// Pedindo informações
	printf("Digite o valor: ");
	scanf("%f", &valorA);
	
	// Cálculos.
	calculo = valorA * 1.1;
	
	//Exibindo informação
	printf("\nValor: %.2f", calculo);
	
	
}

