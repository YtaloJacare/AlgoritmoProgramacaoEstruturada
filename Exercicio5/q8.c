#include<stdio.h>
#include<math.h>

main(){

    int idade, tempo;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("Digite seu tempo de trabalho: ");
    scanf("%d", &tempo);
    fflush(stdin);

    if(idade >= 65 || tempo >= 30){
        printf("Voce pode se aposentar!!");
    }
    else if(idade >= 60 || tempo >=25 ){
        printf("Voce pode se aposentar!!");
    }
    else{
        printf("Vai trabalhar vagabundo!!");
    }
}