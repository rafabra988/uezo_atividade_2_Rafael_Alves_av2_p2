#include "headersav2.h"
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
    char *v = malloc(sizeof(v[100]));
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

/*________________________________________ex1___________________________*/


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

/*________________________________________ex2___________________________*/

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

/*________________________________________ex3___________________________*/

void notacao_reversa(Pilha*p, char con[]){

    int tam, rest, mu=42, so=43, su=45, di=47, pa1=40,pa2=41,i=0, mucon=0, divcon=0;
    char *conta ,operan[100];

    conta=pilha_pop(p);

    for(tam=0;tam<strlen(conta);tam++){
        rest=conta[tam];
            if(rest==so || rest==su){
                if(operan[i-2]!=conta[tam+1]){
                    operan[i]=conta[tam-1];
                    i++;
                    operan[i]=conta[tam+1];
                    i++;
                    operan[i]=conta[tam];
                    i++;
                }
            }else if(rest==mu){
                mucon++;
            }else if(rest==di){
                divcon++;
            }
    }
    if(mucon>0 || divcon>0){
        mucon+=i;
        for(i;i<mucon;i++){
            operan[i]=mu;
        }
        divcon+=i;
        for(i;i<divcon;i++){
            operan[i]=di;
        }
    }

    pilha_push(p,operan);
}
