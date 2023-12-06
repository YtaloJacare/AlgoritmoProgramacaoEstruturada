#include<stdio.h>
#include<math.h>

main(){
    

    float custo, pordist = 0.28, imposto = 0.45, cfinal;
    
    printf("Determine o valor de fabrica!!: ");
    scanf("%f"), &custo;
    
    setbuf(stdin,NULL);

    cfinal = (custo * imposto) + (custo * pordist) + custo;

    printf("\nO valor do custo final do carro, equivale: %.2f", cfinal);


}