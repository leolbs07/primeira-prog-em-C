#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	// Declarando vari�veis 
	float valorA, calculo;
	
	// Pedindo informa��es
	printf("Digite o valor salarial: ");
	scanf("%f", &valorA);
	
	// C�lculos.
	calculo = valorA / 1412;
	
	//Exibindo informa��o
	printf("\nQuantidade de sal�rios: %.2f", calculo);
	
}

