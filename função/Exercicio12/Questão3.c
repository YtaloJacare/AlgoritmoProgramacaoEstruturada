#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void imprimir(int matriz [10][10]){

for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j ++){

        printf("%d\t", matriz[i][j]);

    }

    printf("\n");
}

}

//trocar linha 2 pela 8 

void trocaLinha28(int matriz [10][10]){

    int aux;

    for(int i = 0; i < 10; i++){
        aux = matriz[1][i];
        matriz[1][i] = matriz [7][i];

        matriz[7][i] = aux;
    }

}

//trocar coluna 4 pela 10 

void trocaColuna410(int matriz [10][10]){

    int aux;

    for(int i = 0; i < 10; i++){
        aux = matriz[i][3];
        matriz[i][3] = matriz [i][9];

        matriz[i][9] = aux;
    }

}
//trocar diagonal

void trocarDiagonal(int matriz [10][10]){

    int aux;

    for(int i = 0; i < 10; i++){
        aux = matriz[i][i];
        matriz[i][i] = matriz [i][9 - i];

        matriz[i][9 - i] = aux;
    }

}

//trocar linha 5 pela 10

void trocaLinha510(int matriz [10][10]){

    int aux;

    for(int i = 0; i < 10; i++){
        aux = matriz[4][i];
        matriz[4][i] = matriz [i][9];

        matriz[i][9] = aux;
    }

}


main(){

int matriz [10][10];

for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j ++){
        matriz[i][j] = i * 10 + j;
    }

    printf("\n");
}


imprimir(matriz);

//trocaLinha28(matriz);

//trocaColunda410 (matriz);

//trocarDiagonal(matriz);

trocaLinha510(matriz);

printf("\n\n");

imprimir(matriz);

}

