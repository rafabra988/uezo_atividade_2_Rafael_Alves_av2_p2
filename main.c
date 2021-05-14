#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "headersav2.h"

int main(void)
{

//    setlocale(LC_ALL, "portuguese");

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
//        printf("√© da forma x C y");
//    }else{
//        printf("n√£o da forma x C y");
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
//        printf("cadeia de caracteres %s È da forma x C y", ahah);
//    }else{
//        printf("cadeia de caracteres %s n„o È da forma x C y", ahah);
//
//    }
//
//    pilha_libera(p);

/*________________________________________ex3___________________________*/

    char expre[20], *result;
    Pilha*p;
    int u=9;

    printf("Digite a express„o ");
    scanf("%s", expre);
    pilha_push(p,expre);

    notacao_reversa(p,expre);
    result=pilha_pop(p);

    printf("%s",result);

    pilha_libera(p);
    return 0;
}
