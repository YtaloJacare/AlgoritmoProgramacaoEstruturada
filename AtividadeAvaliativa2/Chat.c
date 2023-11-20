#include <stdio.h>

int main() {
    int quantidadeAssalariados;
    float salarioMinimo = 1400.00;

    printf("Digite a quantidade de assalariados a cadastrar: ");
    scanf("%d", &quantidadeAssalariados);

    for (int i = 0; i < quantidadeAssalariados; i++) {
        char sexo;
        float salario;
        char sexo_extenso[20];

        printf("\nInforme o sexo do assalariado (M para Masculino, F para Feminino): ");
        scanf(" %c", &sexo);

        printf("Informe o salário do assalariado em reais: ");
        scanf("%f", &salario);

        if (salario > 1.00) {
            if (sexo == 'M' || sexo == 'm') {
                strcpy(sexo_extenso, "Masculino");
            } else if (sexo == 'F' || sexo == 'f') {
                strcpy(sexo_extenso, "Feminino");
            } else {
                printf("Sexo inválido.\n");
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

    return 0;
}