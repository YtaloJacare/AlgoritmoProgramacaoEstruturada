#include<stdio.h>
#include<stdlib.h>

main(){

//alocação estatica
//int x;

//alocação dinamica - malloc (memory allocation)
int *p; 
char *letra;

p = (int*)malloc(5 * sizeof(int));
if(p == NULL){

printf("Memoria Cheia");
return;

}

letra = (char*)malloc(sizeof(char));
if(letra == NULL){

printf("Memoria Cheia");
return;

}



printf("Endereco alocado para P: %d", p);

*p = 10;
*letra = 'A';
(*p)++;


printf("\nConteudo armazenado no endereco alocado e apontado por p: %d", *p);
printf("\nConteudo armazenado no endereco alocado e apontado por Letra: %c", *letra);

free(p);
free(letra);

}