#ifndef HEADERSAV2_H_INCLUDED
#define HEADERSAV2_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#define N 10
//pilha char
typedef struct elemento
{
    char info[10];
    struct elemento *prox
}Elemento;

typedef struct pilha
{
    char *descricao;
    Elemento *prim;
}Pilha;

//pilha int
typedef struct elemenint{
    int info;
    struct elemenint *prox
}Elpilha;

typedef struct pilhint{
    char *descricao;
    Elemento *prim;
}Pilhaint;

//lista
typedef struct elemento2{
    int info;
    struct elemento2 *prox;
}Elemento2;

Elemento2 *init;

Pilha *pilha_cria(void);

int pilha_vazia(Pilha *p);

void pilha_push(Pilha *p, char v[]);

char * pilha_pop(Pilha *p);

void pilha_libera();

int comparar_oposto(Pilha*p, Pilha*p2);

void ver_tem_D(Pilha*p);

void notacao_reversa(Pilha*p);

Elemento2* lst_cria (void);

Elemento2* lst_insere (Elemento2* lst, int val);

void lst_imprime (Elemento2* lst);

void lst_libera (Elemento2* lst);

Elemento2* lst_concatena(Elemento2* lst, Elemento2* lst2);

Pilhaint* pilha_criaint (void);

int pilha_vaziaint (Pilhaint* p);

void pilha_pushint (Pilhaint* p, int v);

int pilha_popint (Pilhaint* p);

void pilha_liberaint (Pilhaint* p);


#endif // HEADERSAV2_H_INCLUDED
