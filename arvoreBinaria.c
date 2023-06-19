

#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

struct arv{
	char info;
    struct arv* esq;
	struct arv* dir;

};


Arv* arv_criavazia(void){
	return NULL;
}

Arv* arv_cria(char c, Arv* sae, Arv* sad){
	Arv* p = (Arv*) malloc(sizeof(Arv));
	p->info = c;
	p->esq = sae;
	p->dir = sad;
	return p;
}

int arv_vazia(Arv* a){
	return a == NULL;
}

 void arv_imprime(Arv* a){

	printf("<");

	if(!arv_vazia(a)){
		printf("%c",a->info); //Mostra nó ra
		arv_imprime(a->esq); //Mostra sae
		arv_imprime(a->dir); //Mostra sad
	}

	printf(">");
}

Arv* arv_libera(Arv* a){
	if(!arv_vazia(a)){
		arv_libera(a->esq);
		arv_libera(a->dir);
		free(a);
	}
	return NULL;
}

int arv_pertence(Arv* a, int c){

	if(arv_vazia(a)){
        return 0;
	}else if( a->info == c ||
              arv_pertence(a->esq, c )|| arv_pertence(a->dir, c)){
	  return 1;
	}else{
        return 0;
	}
}



int letraminuscula(Arv* a){

   int qtd = 0;
     int i;

       for(i = 97; i < 119; i++){
          char aux = i ;
           if(arv_pertence(a, aux)){
            qtd++;
           }
       }
       return qtd;

          }




int contarNos(Arv* a){

  if (a == NULL){
  return 0;
  } else{
  int nE = contarNos(a->esq);
  int nD = contarNos(a->dir);
    return nE + nD + 1;
   }
}


  int pares(Arv* a){

   int qtd = 0;
     int i;
     int elemento;

       for(i = '1'; i < '10'; i++){
          int aux = i ;
            if(aux%2 == 0)
           if(arv_pertence(a, aux)){
            qtd++;
           }
       }
       return qtd;

          }

    int impares(Arv* a){

   int qtd = 0;
     int i;
     int elemento;

       for(i = '1'; i < '10'; i++){
          int aux = i ;
            if(aux%2 == 1)
           if(arv_pertence(a, aux)){
            qtd++;
           }
       }
       return qtd;

          }

          void arv_preordem (Arv* a)
 {


Arv* A[MAX]; //qual seria o valor de max?
Arv* p; Arv* raiz; int topo;
int acabou;
topo = 0; p = a; acabou = arv_vazia(a); //inicializações
while (!acabou) // enquanto houver nós para processar
{
while (!arv_vazia(p))
{
processa (p->info);
topo++; A[topo] = p;
p = p->esq;
}
if (topo != 0)
{
p = A[topo]->dir;
topo--;
}
else {acabou = 1;}
}
}


/*
  int conta_Minuscula(char* a){


int i,contador=0, n,s;

//while(i!='\0'){
    for(i=0; a[i] != '\0';i++){

        if(a[i] >= 97 && a[i] <= 119){
        contador++;
        }
    }

    return contador;
} */
