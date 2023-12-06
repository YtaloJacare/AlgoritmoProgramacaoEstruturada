#include<stdio.h>
#include<math.h>

main(){

    int a, b, c;
    float delta, x, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%d",&a);
    fflush(stdin);

    printf("Digite o valor de B: ");
    scanf("%d",&b);
    fflush(stdin);

    printf("Digite o valor de C: ");
    scanf("%d",&c);
    fflush(stdin);


    if(a == 0){
        printf("O valor do coeficiente A nunca e igual a 0, caso isso ocorra, a equacao deixa de ser do segundo grau");
    }

    delta = (b * b) - (4 * a * c);

    if(delta < 0){

        printf("Nao existe raiz");
    }

    else if(delta == 0){

        x = (b * -1 + sqrt(delta)) / 2 * a;
        printf("Existe apenas uma raiz : %.2f", x);
    }

    else if (delta > 0){

        x1 = (b * -1 + sqrt(delta)) /2 * a;
        x2 = (b * -1 - sqrt(delta)) /2 * a;
        printf("\nOs valores da raizes sao: %.1f, %.1f", x1, x2);
    }

}
