#include <stdio.h>
#include <math.h>

main(){

 //tem erros

 
    int valor, impar, contador = 0;
    printf("Digite um valor:");
    scanf("%d", &valor);


    while(impar <= valor){
        
        impar = (contador * 2) + 1;
		contador++;
		printf("\n%d", impar);
	
	}

}