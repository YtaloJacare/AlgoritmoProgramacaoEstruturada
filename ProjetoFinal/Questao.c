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

Veiculo* iniciador() {
    Veiculo *novoVeic = (Veiculo*)malloc(sizeof(Veiculo));

    if(novoVeic == NULL) {
        printf("Nao ha memoria");
        exit(EXIT_FAILURE);
    } 

    novoVeic->proximo = NULL;

    return novoVeic;
}

Veiculo* adicionarVeiculo(Veiculo* lista) {
    Veiculo* novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));

    printf("Proprietario: ");
    fgets(novoVeiculo->proprietario, sizeof(novoVeiculo->proprietario), stdin);
    fflush(stdin);

    printf("Combustivel (alcool/diesel/gasolina): ");
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

    printf("\nNao foi encontrado nenhum veiculo");

    }
}

void realizarTroca(Veiculo *lista, int chassi) {
    Veiculo *atual = lista;
    int tes = 0;

    while (atual != NULL) {
        if(atual->chassi == chassi) {
            char n1 = atual->placa[3];
            char n2 = atual->placa[4];
            char n3 = atual->placa[5];
            char n4 = atual->placa[6];
    
            if(n1 != '0' && n2 != '0' & n3 != '0' & n4 != '0') {
            printf("Digite o nome do novo proprietario: ");
            scanf("%s", &atual->proprietario);
            fflush(stdin);

            } else {

            printf("Veiculo em questao possui digito 0.");

            }

            tes++;
        }

        atual = atual->proximo;
    }

    if(tes == 0) {

    printf("Nao foi encontrado nenhum veiculo");

    }
}


int main(){

    Veiculo* lista = NULL;
    
    int opcao;
    char novoProprietario[50], chassi[20];

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
                scanf("%s", novoProprietario);

                printf("Digite o chassi do veiculo: ");
                scanf("%s", chassi);
                
                realizarTroca(lista, chassi);

                break;

            default:

            printf("\nOpcao invalida. Tente novamente:");

        }
    } while (opcao != 0);

    return 0;
}