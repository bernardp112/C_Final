#include <stdio.h>
#include <stdlib.h>

typedef struct reg_no {
  float info;
  struct reg_no *esq;
  struct reg_no *dir;
} no;

typedef no* no_raiz;


void inicializa(no_raiz * raiz){
  *raiz = NULL;
}

no_raiz cria_no(float valor) {
  no_raiz novo_no = (no_raiz) malloc(sizeof(no));
  novo_no->info = valor;
  novo_no->esq = NULL;
  novo_no->dir = NULL;
  return novo_no;
}

void cria_raiz(no_raiz * raiz, float valor){
  *raiz = cria_no(valor);
} 

no_raiz busca_valor(float valor, no_raiz raiz){
  if (raiz == NULL) return NULL;
  if (raiz->info == valor) return raiz;
  no_raiz aux = busca_valor(valor,raiz->esq);
  if (aux != NULL && aux->info == valor) return aux;
  return busca_valor(valor,raiz->dir);
} 

int insere_filho(no_raiz raiz, float valor_filho, float valor_pai, char lado){
  no_raiz pai = busca_valor(valor_pai, raiz);
  if (pai == NULL) return 0;
  no_raiz novo = cria_no(valor_filho);
  if (lado == 'e'){
    novo->esq = pai->esq;
    pai->esq = novo;
  }else{
    novo->dir = pai->dir;
    pai->dir = novo;              
  }
  return 1;
}

void imprime_arvore_preordem(no_raiz raiz){
  if (raiz == NULL) return;
  printf("%f ",raiz->info);
  imprime_arvore_preordem(raiz->esq);
  imprime_arvore_preordem(raiz->dir);
}

void imprime_arvore_posorden(no_raiz raiz){
  if (raiz == NULL) return;
  imprime_arvore_posordem(raiz->esq);
  imprime_arvore_posordem(raiz->dir);  
  printf("%f ",raiz->info);
}
    
int main(){
  no_raiz raiz;
  inicializa(&raiz);
  cria_raiz(&raiz,1);
  insere_filho(raiz,2,1,'e');
  insere_filho(raiz,3,1,'d');
  insere_filho(raiz,4,2,'e');
  insere_filho(raiz,5,2,'d');
  insere_filho(raiz,6,3,'e');
  insere_filho(raiz,7,3,'d');
  imprime_arvore_preordem(raiz);
  printf('\n');
  imprime_arvore_posordem(raiz);
  return 0;
}