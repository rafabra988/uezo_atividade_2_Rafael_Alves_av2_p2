#include "headersav2.h"
Pilhaint* pilha_criaint (void){
    Pilhaint *p = (Pilhaint*) malloc(sizeof(Pilhaint));
    p->prim = NULL;
    return p;
}

int pilha_vaziaint (Pilhaint* p){
    if(p->prim == NULL)
    return 1;
    return 0;
}

void pilha_pushint (Pilhaint* p, int v){
    Elpilha *novo;
    novo = (Elpilha*) malloc(sizeof(Elpilha));
    novo->info = v;
    novo->prox = p->prim;
    p->prim = novo;
}

int pilha_popint (Pilhaint* p){
    Elpilha *t;
    int v;
//    if (pilha_vazia(p)){
//        printf("Pilha vazia.\n");
//        return 0;
//    }

    t = p->prim;
    v = t->info;
    p->prim = t->prox;
    free(t);
    return v;
}

void pilha_liberaint (Pilhaint* p){
    Elpilha *t, *q = p->prim;
    while (q!=NULL)
    {
        t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

/*-----------------------------------------------------------------*/


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

Elemento2* lst_cria (void){
    Elemento2 *aux;
    aux=(Elemento2*)malloc(sizeof(Elemento2));
    init=aux;
    return NULL;
}

Elemento2* lst_insere (Elemento2* lst, int val){
    Elemento2* aux=init;
    int v=0;
    Elemento2* novo =(Elemento2*)malloc(sizeof(Elemento2));
    novo->info = val;
    novo->prox = lst;
    if(v<1){
        aux->prox=novo;
        v=1;
    }
    return novo;
}

void lst_imprime (Elemento2* lst){
    Elemento2* p;
    for (p = lst; p != NULL; p = p->prox){
        printf("%d -> ", p->info);
    }
    printf("NULL");
}

void lst_libera (Elemento2* lst){
    Elemento2 *p = lst, *t;
    while (p != NULL){
        t = p->prox;
        free(p);
        p = t;
    }
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

void ver_tem_D(Pilha*p){
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

void notacao_reversa(Pilha*p){

    int tam, rest, mu=42, so=43, su=45, di=47, pa1=40,pa2=41,i=0, mucon=0, divcon=0;
    char *conta ,operan[100];

    conta=pilha_pop(p);

    for(tam=0;tam<strlen(conta);tam++){
        rest=conta[tam];

        if(i==strlen(conta)){
            operan[i]='\0';
            break;
        }

        if(rest==so || rest==su){
            if(operan[i-2]==conta[tam-1]){
                operan[i]=conta[tam+1];
                i++;
                operan[i]=conta[tam];
                i++;
            }else{
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

/*________________________________________ex5___________________________*/

Elemento2* lst_concatena(Elemento2* lst, Elemento2* lst2){
    Elemento2* p1,* p2,* lst3;
    Pilhaint*p;
    p1=lst;
    p2=lst2;
    int cont=0, aux2;
    char aux[1];

    lst3 = lst_cria();
    p=pilha_criaint();

    while(p1!=NULL){
        pilha_pushint(p,p1->info);
        p1=p1->prox;
        cont++;
    }

    while(p2!=NULL){
        pilha_pushint(p,p2->info);
        p2=p2->prox;
        cont++;
    }


    for(int i=0;i<cont;i++){
        aux2=pilha_popint(p);
        lst3=lst_insere(lst3,aux2);
    }

    return lst3;
    pilha_liberaint(p);
    lst_libera(lst3);
}
