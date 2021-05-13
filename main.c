#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "header.h"

int main(void)
{
    setlocale(LC_ALL,"portuguese");
/*________________________________________ex1___________________________*/
    Elemento *p;
    Elemento *p2;
    char ahah[10];
printf("çé");
    p=pilha_cria();
    scanf("%s",ahah);
    pilha_push(p,ahah);
    scanf("%s",ahah);
    pilha_push(p2,ahah);

    int result=comparar_oposto(p,p2);

    if(result==1){
        printf("щ da forma x C y");
    }else{
        printf("nуo щ da forma x C y");
    }

    pilha_libera(p);
    pilha_libera(p2);

/*________________________________________ex2___________________________*/

//    Elemento *p;
//    char ahah[10];
//    int retorno;
//
//    p=pilha_cria();
//    scanf("%s",ahah);
//    pilha_push(p,ahah);
//
//    retorno=ver_tem_D(p);
//
//    if(retorno==1){
//        printf("cadeia de caracteres %s щ da forma x C y", ahah);
//    }else{
//        printf("cadeia de caracteres %s nуo щ da forma x C y", ahah);
//
//    }
//
//    pilha_libera(p);

/*________________________________________ex3___________________________*/






    return 0;
}


