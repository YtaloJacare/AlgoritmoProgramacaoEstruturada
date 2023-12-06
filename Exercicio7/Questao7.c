#include<stdio.h>
#include<math.h>

main(){

    char cabelo, olhos, sexo;
    int  CM = 0, CF= 0, CG = 0, CE = 0, idade;
    float valor, porcentagem;
    printf("[....Registro para Pesquisa....]");

//Sexo

    do{
        CG++;
        fflush(stdin);
        do{
            printf("\nDefina seu sexo [M] - [F]:");
            scanf("%c", &sexo);
            if(sexo == 'm'){
               CM ++; 
            } else{
                CF ++;
            }
            fflush(stdin);

            if(sexo != 'm' && sexo != 'f'){
            printf("\nOpcao invalida. \nPor Favor tenta novamente:");
            }
        }while(sexo != 'm' && sexo != 'f');

//Olhos

    do{
        printf("\nDigite a cor dos olhos [A] - [V] - [C] - [P]:");
        scanf("%c", &olhos);
        fflush(stdin);

        if(olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p'){
        printf("\nOpcao invalida. \nPor Favor tenta novamente:");
        }
    }while(olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p');
    
//cabelo

    do{
        printf("\nDigite a cor do cabelo [R]-[L]-[C]-[P]:");
        scanf("%c", &cabelo);
        fflush(stdin);

        if(cabelo != 'r' && cabelo != 'l' && cabelo != 'c' && cabelo != 'p'){
        printf("\nOpcao invalida. \nPor Favor tenta novamente:");
        }
    }while(cabelo != 'r' && cabelo != 'l' && cabelo != 'c' && cabelo != 'p');

//Idade

    do{
        printf("\nDigite sua Idade:");
        scanf("%d", &idade);
        fflush(stdin);

        if(idade < 10 || idade > 100){
        printf("\nOpcao invalida. \nPor Favor tenta novamente:");

        }
} while(idade != -1 && (idade < 10 || idade > 100));

//salario

    do{
        printf("\nDigite Salario:");
        scanf("%d", &valor);
        fflush(stdin);

        if(idade < 0){
        printf("\nOpcao invalida. \nPor Favor tenta novamente:");
        }
        } while(valor < 0);

        if(sexo == 'f' && cabelo == 'c' && olhos == 'c' && idade > 18 && idade < 35){
            CE++;
        }

    printf("Digite [-1] para sair ou [0]:");
    scanf("%d", &idade);

}while (idade != -1);


    porcentagem = (float) CE *100 / CG;

    printf("\nContador Geral: %d", CG);
    printf("\nContador Total Homens: %d", CM);
    printf("\nContador Toral Mulheres: %d", CF);
    printf("\nPorcentagem mulheres com carcteritsicas especificas: %.2f", porcentagem);
}
