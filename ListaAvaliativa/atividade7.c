#include<stdio.h>
#include<math.h>

main(){

    int ano, mes, dia, total;

    printf("Digite quantos anos voce tem:");
	scanf("%d", &ano);
    setbuf(stdin, NULL);

    printf("Digite seu mes de nascimento:");
	scanf("%d", &mes);
    setbuf(stdin, NULL);

    printf("Digite seu dia de nascimento:");
	scanf("%d", &dia);
    setbuf(stdin, NULL);

    total = ano * 365 + mes * 30 + dia;
	
	printf("\nSua idade em dias: %d", total);

    

	

}
