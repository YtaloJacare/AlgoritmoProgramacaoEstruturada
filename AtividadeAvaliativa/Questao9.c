#include<stdio.h>
#include<math.h>

main(){

int candidato[4] = {0}; 
int votosNulos = 0;
int votosEmBranco = 0;
int codigoVoto;

while (1) {
        
printf("\nDigite o codigo do voto - 0 para encerrar: ");
scanf("%d", &codigoVoto);
        
    if (codigoVoto == 0) {
    break;
    }
        
switch (codigoVoto) {

case 1:
case 2:
case 3:
case 4:
candidato[codigoVoto - 1]++;
break;

case 5:
votosNulos++;
break;

case 6:
votosEmBranco++;
break;

default:
printf("\nCodigo de voto invalido.");
}

}
    
printf("\nTotal de votos para cada candidato:");

for (int i = 0; i < 4; i++) {

printf("\nCandidato %d: %d votos", i + 1, candidato[i]);
}
    
printf("\nTotal de votos nulos: %d", votosNulos);
printf("\nTotal de votos em branco: %d", votosEmBranco);
    

}