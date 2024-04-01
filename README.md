#include <stdio.h>
#include <locale.h>

int contador = 0;
float nota, soma =0, media;
char resposta;

int main(){


do {

  printf("Digite uma nota: ");
  scanf("%f",&nota);

 fflush(stdin);

 printf("Deseja inserir mais uma nota: ");
 scanf("%c",&resposta);
 resposta = toupper(resposta);

 soma += nota;
 contador++;

} while(resposta != '0');

media = soma / contador;

printf("\n === Exibindo resultados === \n");
printf("Média: %.1f \n", media);

return 0;
}
