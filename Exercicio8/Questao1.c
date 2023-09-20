#include<stdio.h>
#include<math.h>

//tem erros

main(){

int nt, idade, MaiorI, MenorI, IdadeR, RO, Diffbr, MediaIR;
float porcentagemR;
char Ava;

printf("[Avaliacao - Black Cinemas Corporation]");

do{
    nt++;
    fflush(stdin);

    do{
        printf("\nInforme sua Idade:");
        scanf("%d", &idade);
        
        if(idade > MenorI && idade == MaiorI){
            MaiorI = idade;
        } else {
            MenorI = idade;
        }
        fflush(stdin);

        if(idade <= 0){
            printf("\nIdade Invalida!!");
        }
    }while (idade <= 0);

    printf("Sua Opinao em relacao ao filme \n[A - Otimo] \n[B - Bom] \n[C - Regular] \n[D - Ruim] \n[E - Pessimo] \nDigite:");
    scanf("%c", &Ava);

    switch(Ava){

        case 'a': 
        Ava = RO;
        RO++;
        break;

        case 'b': Ava++;
        break;

        case 'c': Ava++;
        break;

        case 'd': Ava++;
        break;

        case 'e':Ava++;
        break;

        default: printf("\nNao Existente");
    }

    do{
        nt++;
    } while(nt == Ava);

    printf("Total de Opinioes: %c", nt);
    printf("Opnioes [Otimos]: %c", RO);
    


    printf("\nDigite [-1] para sair ou [0]:");
    scanf("%d", &idade);

}while(idade != -1);
}
