#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// Declarando vari�veis
	float valorA, valorB;
	float soma, multiplicacao, divisao, subtracao;
	
	// Solicinatndo dados para o usu�rio.
	printf("Digite o valor da nota A: ");
	scanf("%f", &valorA);
	
	printf("Digite o valor da nota B: ");
	scanf("%f", &valorB);
	
	// Realizando c�lculos.
	soma = valorA + valorB;
	multiplicacao = valorA * valorB;
	divisao = valorA / valorB;
	subtracao = valorA - valorB;
	
	// Exibindo resultados. 
	system("cls");
	printf("=== Exibindo resultados ===");
	printf("\nNota A: %.1f", valorA);
	printf("\nNota B: %.1f", valorB);
	
	
	printf("\nSoma: %.1f", soma);
	printf("\nMultiplica��o: %.1f", multiplicacao);
	printf("\nDivis�o: %.1f", divisao);
	printf("\nSubtra��o: %.1f", subtracao);
	
	return 0;
}
