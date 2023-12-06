#include<stdio.h>
#include<math.h>

main(){

    int a, b, c, d;

    printf("Digite 4 valores numericos:");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int maior;
    int menor;

// Valores maiores

    if((a > b) && (a > c) && (a > d)){
    maior = a;
    } 
    if((b > a) && (b > c) && (b > d)){
    maior = b;
    } 
    if((c > a) && (c > b) && (c > d)){
    maior = c;
    } 
    if((d > a) && (d > b) && (d > c)){
    maior = d;
    } 


 // Valores menores 

    else if((a < b) && (a < c) && (a < d)){
    menor = a;
    } 
    else if((b < a) && (b < c) && (b < d)){
    menor = b;
    }
    else if((c < a) && (c < b) && (c < d)){
    menor = c;
    }
    else if((d < a) && (d < b) && (d < c)){
    menor = d;
    }

    printf("Maior Valor: %d", maior);
    printf("\nMenor valor: %d", menor);
}
