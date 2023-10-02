#include<stdio.h>
#include<math.h>

main(){

int numAlunos = 30;
double notas[numAlunos];
double mediaGeral = 0.0;
    
for (int i = 0; i < numAlunos; i++) {
    double n1, n2, n3, media;

    printf("\nDigite as notas do aluno %d (A1, A2, A3): ", i + 1);
    scanf("%lf %lf %lf", &n1, &n2, &n3);
        
    media = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
    notas[i] = media;
        
    printf("Media do aluno %d: %.2lf\n", i + 1, media);
        
    if (media >= 7.0) {
            printf("\nAprovado.");
    } else {
            printf("\nReprovado.");
    }
        
    mediaGeral += media;

    }
    
    mediaGeral /= numAlunos;
    
    printf("\nMedia geral da turma: %.2lf", mediaGeral);

}