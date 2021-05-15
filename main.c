#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "headersav2.h"

int main(void)
{

    setlocale(LC_ALL, "portuguese");

/*________________________________________ex1___________________________*/
//    Elemento *p;
//    Elemento *p2;
//    char ahah[10];
//
//    p=pilha_cria();
//    scanf("%s",ahah);
//    pilha_push(p,ahah);
//    scanf("%s",ahah);
//    pilha_push(p2,ahah);
//
//    int result=comparar_oposto(p,p2);
//
//    if(result==1){
//        printf("Ã© da forma x C y");
//    }else{
//        printf("nÃ£o da forma x C y");
//    }
//
//    pilha_libera(p);
//    pilha_libera(p2);

/*________________________________________ex2___________________________*/

//    Elemento *p;
//    char ahah[100];
//    int retorno;
//
//    p=pilha_cria();
//    scanf("%s",ahah);
//    pilha_push(p,ahah);
//
//    retorno=ver_tem_D(p);
//
//    if(retorno==1){
//        printf("cadeia de caracteres %s é da forma x C y", ahah);
//    }else{
//        printf("cadeia de caracteres %s não é da forma x C y", ahah);
//
//    }
//
//    pilha_libera(p);

/*________________________________________ex3___________________________*/

//    char expre[20], *result;
//    Pilha*p;
//    int u=9;
//
//    printf("Digite a expressão ");
//    scanf("%s", expre);
//    pilha_push(p,expre);
//
//    notacao_reversa(p,expre);
//    result=pilha_pop(p);
//
//    printf("%s",result);
//
//    pilha_libera(p);

/*________________________________________ex5___________________________*/

        int resp, v;

        Elemento2* lst, *lst2 , *lst3;

        lst = lst_cria();
        lst2 = lst_cria();
        lst3 = lst_cria();

        printf("quanta posições tera na primeira lista?\n");
        scanf("%d",&resp);

        for(int i=0;i<resp;i++){
            printf("qual o valor do %dº elemento?",i+1);
            scanf("%d",&v);
            lst = lst_insere(lst, v);
        }

        printf("\nquanta posições tera na segunda lista?\n");
        scanf("%d",&resp);

        for(int i=0;i<resp;i++){
            printf("qual o valor do %dº elemento?",i+1);
            scanf("%d",&v);
            lst2 = lst_insere(lst2,v);
        }

        lst3=lst_concatena(lst,lst2);

        printf("\nFirst List: ");
        lst_imprime(lst);
        printf("\nSecond List: ");
        lst_imprime(lst2);
        printf("\nThird List: ");
        lst_imprime(lst3);

        lst_libera(lst);
        lst_libera(lst2);
        lst_libera(lst3);

    return 0;
}
