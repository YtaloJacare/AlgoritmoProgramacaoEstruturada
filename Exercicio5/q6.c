#include<stdio.h>
#include<math.h>

main(){

    int numero;

    printf("Digite um numero inteiro:");
    scanf("%d", &numero);
    
    if(numero % 2==0){   
    printf("O valor digitado foi par (o_0)");
    }
    else{
        printf("O programa nao deve continuar (T_T)");
    }

}