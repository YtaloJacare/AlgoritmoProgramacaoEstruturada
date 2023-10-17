#include<stdio.h>
#include<math.h>

void imprimir();

int somar(int n1, int n2){

    int soma = n1 + n2;
    return soma;

}

main(){

imprimir();
imprimir();
imprimir();

int numero1, numero2;

printf("\nDigite dois numeros:");
scanf("%d %d", &numero1, &numero2);
int retornoFuncao = somar (numero1, numero2);
printf("O retorno da funcao e: %d", retornoFuncao);

}

//implementacao das funcoes

void imprimir(){
    //escopo da funcao

    printf("\nImprimindo...");

}
