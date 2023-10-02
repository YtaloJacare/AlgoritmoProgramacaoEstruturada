#include<stdio.h>
#include<math.h>

main(){

int contador = 0;
float Altze = 1.10, Altchico = 1.50;

while(Altze <= Altchico){
    Altchico +=0.02;
    Altze += 0.03;
    contador ++;
}

printf("Zeca ficara maior que chico em %d anos!!", contador);
  
}