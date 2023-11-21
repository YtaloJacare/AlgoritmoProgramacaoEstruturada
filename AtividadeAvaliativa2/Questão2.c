#include<stdio.h>
#include<math.h>
#include<stdlib.h>


typedef struct {

char sexo [20];
char sexo_extenso[20];
float salario;

} dados;


void cadastrar(dados d[], int indice){

int quantidadeAssalariados;

 for (int i = 0; i < quantidadeAssalariados; i++) {
        char sexo;
        float salario;
        char sexo_extenso[20];

        printf("\nInforme o sexo do assalariado (M para Masculino, F para Feminino): ");
        scanf(" %c", &sexo);

        printf("Informe o salário do assalariado em reais: ");
        scanf("%f", &salario);

        if (salario > 1.00){
            if (sexo == 'M' || sexo == 'm'){

            strcpy(sexo_extenso, "Masculino");

            } else if (sexo == 'F' || sexo == 'f'){

            strcpy(sexo_extenso, "Feminino");

            } else {

            printf("\nSexo inválido.");

                continue;
            }

            printf("\nSalário: R$ %.2f\n", salario);

            if (salario > salarioMinimo) {
                printf("Classificação em relação ao salário mínimo: Acima\n");
            } else if (salario == salarioMinimo) {
                printf("Classificação em relação ao salário mínimo: Igual\n");
            } else {
                printf("Classificação em relação ao salário mínimo: Abaixo\n");
            }

            printf("Sexo: %s\n", sexo_extenso);
        } else {
            printf("Salário inválido.\n");
        }
    }



}


void listar(dados d[], int totalPessoas){

for(int i = 0; i < totalPessoas; i++){

printf("\nSexo: %s", d[i].sexo_extenso);
printf("\nIdade: %d", d[i].salario);


}


main(){

printf("[-----Cadastro-----]");

int opcaoMenu, totalPessoas = 0;


do{

    printf("\n 1 - Cadastrar");
    printf("\n 2 - Listar");
    printf("\n 0 - Sair:");
    scanf("%d", &opcaoMenu);

    switch (opcaoMenu){

    case 1: 

    cadastrar(d, totalPessoas);

    break;

    case 2: 
        
    listar(d, totalPessoas);

    break;

    }

} while(opcaoMenu != 0);


}
