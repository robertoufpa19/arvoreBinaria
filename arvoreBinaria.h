
typedef struct arv Arv;

Arv* arv_criavazia(void);
Arv* arv_cria(char c, Arv* e, Arv* d);
Arv* arv_libera(Arv* a);
int arv_vazia(Arv* a);

int arv_pertence(Arv* a, int c);

void arv_imprime(Arv* a);

int letraminuscula(Arv* a);

int contarNos(Arv* a);


  int conta_Minuscula(char* a);

 int pares (Arv* a);
  int impares (Arv* a);


Arv* arv_insere(Arv* a, char v, int direcao);

Arv* arv_preordem (Arv* a)


