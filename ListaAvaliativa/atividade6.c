#include<stdio.h>
#include<math.h>

main(){


    float raio;
    float pi = 3.14;
    

    printf("Determine um valor para o raio de um circuferencia: ");
    scanf("%f", &raio);

    setbuf(stdin,NULL);

    float area = pi * pow(raio,2); 

    printf("Valor da area: %.2f", area);


}