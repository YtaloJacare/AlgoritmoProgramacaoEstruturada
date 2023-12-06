#include<stdio.h>
#include<math.h>


//Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior).

main(){

    int a, b, c;

    printf("Digite 3 valores numericos:");
    scanf("%d %d %d", &a, &b, &c);

    int maior;
    int meio;
    int menor;


//Separação
    if((a > b) && (a > c)){
    maior = a;
    } 
    else if((b > a) && (b > c)){
    maior = b;
    } 
    else if((c > a) && (c > b)){
    maior = c;
    } 

//Separação
    if((a < b) && (a < c)){
    menor = a;
    } 
    else if( (b < a) && (b < c)){
    menor = b;
    }
    else if( (c < a) && (c < b)){
    menor = c;
    }
    //sepração
    if((a < maior) && (a > menor)){
    meio = a;
    }
    else if((b < maior) && (b > menor)){
    meio = b;
    }
    else if((c < maior) && (c > menor)){
    meio = c;
    }

    printf("Menor Valor: %d", menor);
    printf("\nValor do Meio: %d", meio);
    printf("\nMaior Valor: %d", maior);

}
