#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	// Declarando vari�veis 
	float valorA, calculo;
	
	// Pedindo informa��es
	printf("Digite o valor: ");
	scanf("%f", &valorA);
	
	// C�lculos.
	calculo = valorA * 1.1;
	
	//Exibindo informa��o
	printf("\nValor: %.2f", calculo);
	
	
}

