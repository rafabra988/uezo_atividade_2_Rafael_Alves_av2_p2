#include "header.h"
Pilha *pilha_cria(void)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

int pilha_vazia(Pilha *p)
{
    if (p->prim == NULL)
        return 1;
    return 0;
}

void pilha_push(Pilha *p, char v[])
{
    Elemento *novo;

    novo = (Elemento *)malloc(sizeof(Elemento));
    stpcpy(novo->info, v);
    novo->prox = p->prim;
    p->prim = novo;
}

char * pilha_pop(Pilha *p)
{
    Elemento *t;
    char *v = malloc(sizeof(v[10]));
    if (pilha_vazia(p))
    {
        printf("Pilha vazia.\n");
        return "0";
    }
    t = p->prim;
    stpcpy(v, t->info);
    p->prim = t->prox;
    free(t);
    return v;
    free(v);
}

void pilha_libera(Pilha *p)
{
    Elemento *t, *q = p->prim;
    while (q != NULL)
    {
        t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

int comparar_oposto(Pilha*p, Pilha*p2){

    char *verific,*segund, aux[10];
    int tam, j=0;

    verific = pilha_pop(p);
    segund = pilha_pop(p2);
    tam=strlen(segund);
    for(tam=(strlen(segund)-1);tam>-1;tam--){
        aux[j] = segund[tam];
        j += 1;
    }
    if (strcmp(verific, aux) == 0){
        return 1;
    }else{
        return 0;
    }

    free(verific);
    free(segund);
}

int ver_tem_D(Pilha*p){
    char *verific;
    int tam, rest, cont=1, ascii_D=68;

    verific=pilha_pop(p);

    for(tam=(strlen(verific)-1);tam>-1;tam--){
        rest=verific[tam];
        if(ascii_D==rest){
            cont=0;
        }
        cont++;
        if(cont>=2){
            return 0;
            break;
        }else{
            return 1;
        }
    }
}


