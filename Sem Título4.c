#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	// Declarando variáveis 
	float valorA, calculo;
	
	// Pedindo informações
	printf("Digite o valor salarial: ");
	scanf("%f", &valorA);
	
	// Cálculos.
	calculo = valorA / 1412;
	
	//Exibindo informação
	printf("\nQuantidade de salários: %.2f", calculo);
	
}

