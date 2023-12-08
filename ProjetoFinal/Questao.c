#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo {
    char proprietario[50];
    char combustivel[20];
    char modelo[50];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[10];
    struct Veiculo* proximo;

} Veiculo;

Veiculo* iniciar(){
    return NULL;
}

Veiculo* adicionarVeiculo(Veiculo* lista) {
    Veiculo* novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));

    printf("Proprietario: ");
    fgets(novoVeiculo->proprietario, sizeof(novoVeiculo->proprietario), stdin);
    fflush(stdin);

    printf("Combustivel [alcool-diesel-gasolina]: ");
    scanf("%s", &novoVeiculo->combustivel);
    fflush(stdin);

    printf("Modelo: ");
    scanf("%s", &novoVeiculo->modelo);
    fflush(stdin);

    printf("Cor: ");
    scanf("%s", &novoVeiculo->cor);
    fflush(stdin);

    printf("Chassi: ");
    scanf("%s", &novoVeiculo->chassi);
    fflush(stdin);
    
    printf("Ano: ");
    scanf("%d", &novoVeiculo->ano);
    fflush(stdin);
    
    printf("Placa: ");
    scanf("%s", &novoVeiculo->placa);
    fflush(stdin);

    novoVeiculo->proximo = lista;

    return novoVeiculo;
}

void listarDD(Veiculo *aux) {
    Veiculo *atual = aux;
    int tes = 0;

    if(atual == NULL) {
        printf("Nenhum veiculo registrado");
        return; 
    } else {
        while(atual != NULL) {

        if(atual->ano >= 2010 && strcmp(atual->combustivel, "diesel") == 0) {

            printf("\nProprietario do veiculos consultado: %s", atual->proprietario);
            tes++;

        }
            atual = atual->proximo;
        }

        if(tes == 0) {

            printf("Nao foi encontrado nenhum veiculo");

        }
    }

}
void listarPlaca(Veiculo *lista) {
    Veiculo *atual = lista;
    int tes = 0;

    while (atual != NULL){

        char primeiraLetra = atual->placa[0];
        int ultimoNum = atual->placa[6]; 
    
        if(primeiraLetra == 'J' || primeiraLetra == 'j') {
            if(ultimoNum == '0' || ultimoNum == '2' || ultimoNum == '4' || ultimoNum == '7'){

            printf("\nProprietario: %s", atual->proprietario);
            printf("\nPlaca: %s", atual->placa);

                tes++;
            }
        }

        atual = atual->proximo;
    }

    if(tes == 0) {

    printf("Nao foi encontrado nenhum veiculo");

    }
}

void listarModelo(Veiculo *lista) {
    Veiculo *atual = lista;
    int tes = 0;

    while (atual != NULL) {
        char segundaLetra = atual->placa[1];
        int somaNum = atual->placa[3] + atual->placa[4] + atual->placa[5] + atual->placa[6]; 
    
        if(
            (segundaLetra == 'A' || segundaLetra == 'a') 
            ||(segundaLetra == 'E' || segundaLetra == 'e') 
            ||(segundaLetra == 'I' || segundaLetra == 'i')
            ||(segundaLetra == 'O' || segundaLetra == 'o')
            ||(segundaLetra == 'U' || segundaLetra == 'u')) 
        {
            if(somaNum % 2 == 0) {

            printf("\nModelo: %s", atual->modelo);
            printf("\nCor: %s", atual->cor);
            tes++;

            }
        }

        atual = atual->proximo;
    }

    if(tes == 0) {

    printf("\nNao foi encontrado nenhum veiculo com as especifacoes exigidas");

    }
}

Veiculo* mudarprop(Veiculo* lista, char* novoProprietario, char* chassi) {
    Veiculo* atual = lista;

    while (atual != NULL) {
        if (strcmp(atual->chassi, chassi) == 0) {
            int temZero = 0;
            for (int i = 0; i < strlen(atual->placa); i++) {
                if (atual->placa[i] == '0') {
                    temZero = 1;
                    break;
                }
            }

            if (!temZero) {
                strcpy(atual->proprietario, novoProprietario);
                printf("\nProprietario trocado.");
                return lista;
            } else {
                printf("\nTroca de proprietario nao permitida.");
                return lista;
            }
        }
        atual = atual->proximo;
    }

    printf("\nVeiculo com chassi %s nao encontrado.\n", chassi);
    return lista;
}

void liberarLista(Veiculo* lista) {
    Veiculo* atual = lista;
    while (atual != NULL) {
        Veiculo* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}



int main(){

    Veiculo* lista = iniciar();
    
    int opcao;
    char chassi[20];
    char novoprop[20];

    printf("[-----Controle de Veiculos-----]");

    do {
        printf("\n1 - Cadastrar um Veiculo");
        printf("\n2 - Listar Proprietarios Diesel 2010");
        printf("\n3 - Listar Placas que iniciam com J");
        printf("\n4 - Listar Modelo e Cor");
        printf("\n5 - Trocar Proprietario");
        printf("\n0 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao) {
            case 1:
                lista = adicionarVeiculo(lista);
                break;
            case 2:
                listarDD(lista);
                break;
            case 3:
                listarPlaca(lista);
                break;
            case 4:
                listarModelo(lista);
                break;
            case 5:

                printf("\nDigite o novo proprietario: ");
                scanf("%s", novoprop);
                printf("Digite o chassi do veiculo: ");
                scanf("%s", chassi);
                lista = mudarprop(lista, novoprop, chassi);

                break;
            default:

            printf("\nOpcao invalida. Tente novamente:");

        }
    } while (opcao != 0);

    return 0;
}
