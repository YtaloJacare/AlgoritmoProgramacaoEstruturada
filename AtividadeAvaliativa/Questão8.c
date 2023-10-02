#include<stdio.h>
#include<math.h>

main(){

float salario, mediaSalario = 0.0, maiorSalario = 0.0;
int numFilhos, totalPessoas = 0, totalSalarioAte100 = 0;
    
do {
    printf("\nInforme o salario - Valor Negativo para Encerrar: ");
    scanf("%f", &salario);
        
    if (salario >= 0) {

        printf("\nInforme o numero de filhos: ");
        scanf("%d", &numFilhos);
            
        mediaSalario += salario;
            
        if (salario <= 100.0) {
                totalSalarioAte100++;
        }
            
        if (salario > maiorSalario) {
                maiorSalario = salario;
        }
            
            totalPessoas++;
        }

    } while (salario >= 0);
    
    if (totalPessoas > 0) {
        mediaSalario /= totalPessoas;
        
    printf("\nMedia do salario da populacao: %.2f", mediaSalario);
    printf("\nMaior salario: %.2f", maiorSalario);
    printf("\nPercentual de pessoas com salario ate R$100.00: %.2f%%", (float)totalSalarioAte100 / totalPessoas * 100);

    } else {
    printf("\nNenhum inserido.");
    }

}