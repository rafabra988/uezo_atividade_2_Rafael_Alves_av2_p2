#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#define N 10

typedef struct elemento
{
    char info[10];
    struct elemento *prox
}Elemento;

struct pilha
{
    char *descricao;
    Elemento *prim;
};

typedef struct pilha Pilha;

Pilha *pilha_cria(void);

int pilha_vazia(Pilha *p);

void pilha_push(Pilha *p, char v[10]);

char * pilha_pop(Pilha *p);

void pilha_libera();

int comparar_oposto(Pilha*p, Pilha*p2);

int ver_tem_D(Pilha*p);



#endif // HEADER_H_INCLUDED
