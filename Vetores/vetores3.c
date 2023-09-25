#include<stdio.h>
#include<math.h>

main(){
    //declaracao e atribuicao

int num[5];

for(int i = 0; i < 5; i++){

    printf("Digite um numero: ");
    scanf("%d", &num[i]);
}
for(int i = 0; i < 5; i++){
    printf("\n%d %d", i, num[i]);
}

}