// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função de soma
int soma () {
    int a, b;

    printf("\n Digite o primeiro número para a soma: ");
    scanf("%d", &a);

    printf("\n Digite o segundo número para a soma: ");
    scanf("%d", &b);

    printf("\n O resultado da soma é: %d\n\n", a+b);
}

// Função de subtração
int subtrair () {
    int a, b;

    printf("\n Digite o primeiro número para a subtração: ");
    scanf("%d", &a);

    printf("\n Digite o segundo número para a subtração: ");
    scanf("%d", &b);

    printf("\n O resultado da subtração é: %d\n\n", a-b);
}

// Função de multiplicação
int multiplicar () {
    int a, b;

    printf("\n Digite o primeiro número para a multiplicação: ");
    scanf("%d", &a);

    printf("\n Digite o segundo número para a multiplicação: ");
    scanf("%d", &b);
    
    printf("\n O resultado da multiplicação é: %d\n\n", a*b);

}

// Função de divisão
int dividir () {
    int a, b;

    printf("\n Digite o primeiro número para a divisão: ");
    scanf("%d", &a);

    printf("\n Digite o segundo número para a divisão: ");
    scanf("%d", &b);

    printf("\n O resultado da divisão é: %d\n\n", a/b);
}

// Função main (função principal)
int main () {

    setlocale(LC_ALL, "Portuguese");
    int opcao;

  printf("\n\tMenu - Calculadora\n\n");
  printf("[1] Somar\n");
  printf("[2] Subtrair\n");
  printf("[3] Multiplicar\n");
  printf("[4] Dividir\n");

  printf("\nOpção: ");
  scanf("%d",&opcao);

  switch(opcao)
  {
	  
	  case 1:
		  soma();
		  break;
	  case 2:
		  subtrair();
		  break;
	  case 3:
		  multiplicar();
		  break;
	  case 4:
		  dividir();
		  break;
  }
return 0;
}
