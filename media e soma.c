#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");

	char nome[200];
	int idade;
	float notaA, notaB, notaC, soma, media;
	
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	fgets(nome, 200, stdin);
	
	printf("Informe sua idade: ");
	scanf("%i", &idade);
	
	printf("\nDigite o valor da nota A: ");
	scanf("%f", &notaA);
	
	printf("\nDigite o valor da nota B: ");
	scanf("%f", &notaB);
	
	printf("\nDigite o valor da nota C: ");
	scanf("%f", &notaC);
	
	soma = notaA + notaB + notaC;
	media = soma / 3;
	
	
    if (media >= 7.0 && media <= 10.0) {
    	printf("\nAluno aprovado!");
	} else if (media >= 0.0 && media < 7.0) {
		printf("\nAluno reprovado!");
	} else {
		printf("\nInforme um valor válido");
	}
	
	printf("\n === Exibindo resultados ===\n");
	printf("Nome: %s \n", nome);
	printf("idade: %i \n", idade);
    printf("Nota A: %f \n", notaA);
    printf("Nota B: %f \n", notaB);
    printf("Nota C: %f \n", notaC);
    printf("Sua média é: %.1f \n", media);
    printf("Soma das notas é: %.1f \n", soma);
	
	
	
	return 0;
}
