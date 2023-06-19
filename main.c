

#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main(){

	//Criando a Árvore - Nó raiz
 Arv* arvoreBinaria =

     arv_cria('1',
      arv_cria('2', arv_criavazia(),arv_cria('3',
        arv_cria('4',arv_criavazia(),arv_cria('5', arv_criavazia(), arv_criavazia())),arv_criavazia())),arv_criavazia());



	printf("Imprime Arvore\n");
	arv_imprime(arvoreBinaria);
	printf("\n");

    int numNos = contarNos(arvoreBinaria);
	printf("Numeros de nos = %d ", numNos);
	 printf("\n");



     int qtdNosComMinusculo = letraminuscula(arvoreBinaria);
	printf("qunatidades de nos com letras minusculas = %d ", qtdNosComMinusculo );
	 printf("\n");

	 int qtdPares = pares(arvoreBinaria);
	   printf(" Quantidade de nos com numeros pares = %d ", qtdPares);

	    printf("\n");

	   	 int qtdImpares = impares(arvoreBinaria);
	   printf(" Quantidade de nos com numeros Impares = %d ", qtdImpares);


	// teste

/*char frase[89];


    printf("digite uma frase:\n");

    scanf(" %87[^\n]",frase);


	 int Letras = conta_Minuscula(frase);
	printf("letra Minusculas = %i", Letras);

	printf("\n"); */




}


