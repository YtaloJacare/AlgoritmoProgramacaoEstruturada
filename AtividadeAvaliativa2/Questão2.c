#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define salarioM 1400.00


typedef struct{

char sexo[20];
char sexo_extenso[20];
float salario;

} dados;

int cadastrar(dados d[], int quantidadeAssalariados){

for(int i = 0; i < quantidadeAssalariados; i++) {

    printf("\nInforme o sexo do assalariado (M para Masculino, F para Feminino - Ou digite 'Sair'): ");
    scanf(" %s", d[i].sexo);

    if (strcmp(d[i].sexo, "Sair") == 0 || strcmp(d[i].sexo, "sair") == 0){

        return 1; // Retorna 1 para indicar saída
    }

    printf("Informe o salario em reais: ");
    scanf("%f", &d[i].salario);

    if(d[i].salario > 1.00){

        if(strcmp(d[i].sexo, "M") == 0 || strcmp(d[i].sexo, "m") == 0){

            strcpy(d[i].sexo_extenso, "Masculino");

        }else if (strcmp(d[i].sexo, "F") == 0 || strcmp(d[i].sexo, "f") == 0) {

            strcpy(d[i].sexo_extenso, "Feminino");

        } else{

            printf("\nSexo invalido.");
            continue;
    }

    printf("\nSalario: R$ %.2f\n", d[i].salario);

        if (d[i].salario > salarioM){

        printf("\nRelacao ao salario minimo: Acima");

        } else if (d[i].salario == salarioM) {

            printf("\nRelacao ao salario minimo: Igual");

        } else {

            printf("\nRelacao ao salario minimo: Abaixo");

        }

        printf("\nSexo: %s\n", d[i].sexo_extenso);

    } else {

        printf("\nSalario invalido.\n");

        }
    }
    return 0; 
}

void listar(dados d[], int totalPessoas) {

    printf("\n[-----Listagem de Dados-----]\n");

    int cadastrosValidos = 0;

    for(int i = 0; i < totalPessoas; i++){

    if (strlen(d[i].sexo) != 0 && d[i].salario > 1.0){

        cadastrosValidos++;

    }
    
    }

    if (cadastrosValidos > 0){

        for(int i = 0; i < totalPessoas; i++){

            if(strlen(d[i].sexo) != 0 && d[i].salario > 1.0){

            printf("\nSexo: %s", d[i].sexo_extenso);
            printf("\nSalario: %.2f\n", d[i].salario);

            }
        }
        
    } else{

        printf("\nNenhum cadastro existente.\n");
    }
}

main(){

    printf("[-----Cadastro-----]\n");

    int opcaoMenu, totalPessoas = 10 ;
    dados d[totalPessoas];

    do{

    printf("\n 1 - Cadastrar");
    printf("\n 2 - Listar");
    printf("\n 0 - Sair\n Sua escolha:");
    scanf("%d", &opcaoMenu);

    switch (opcaoMenu) {

    case 1:

        if (cadastrar(d, totalPessoas) == 1){
        printf("\nSaindo do cadastro.\n");
        break; 
        }

        break;

    case 2:
        listar(d, totalPessoas);
        break;
        }

    } while(opcaoMenu != 0);

    return 0;
}
