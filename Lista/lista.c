#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

typedef struct Pessoa
{

    int id;
    int idade;
    char nome[40];
    struct Pessoa *prox;

} Pessoa;

Pessoa *criarListaVazia()
{

return NULL;

}

Pessoa *criarNovaPessoa()
{
    Pessoa *novaPessoa = (Pessoa *)malloc(sizeof(Pessoa));

    if (novaPessoa == NULL)
    {
        printf("Nao foi possivel alocar memoria");
        exit(EXIT_FAILURE);
    }

    novaPessoa->prox = NULL;
    return novaPessoa;
}

Pessoa *cadastrar(Pessoa *Lista)
{

    Pessoa *novaPessoa = criarNovaPessoa();

    srand(time(NULL));
    novaPessoa->id = rand() % 100;

    printf("\nInforme o nome: ");
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    while(getchar() != '\n');

    printf("\nDigite a Idade: ");
    scanf("%d", &novaPessoa->idade);
    while(getchar() != '\n');

    if (Lista == NULL)
    {
        Lista = novaPessoa;
    }
    else
    {
        Pessoa *atual = Lista;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novaPessoa;
    }

    return Lista;
}

void mostrar(Pessoa *lista){

Pessoa *atual = lista;

if(atual == NULL){
printf("Ninguem cadastrado");
return;

}else{
    while(atual != NULL){
        printf("\nNome: %s", atual->nome);
        printf("ID: %d", atual->id);
        printf("\nIdade: %d", atual->idade);
        atual = atual ->prox;
    }
}

}

Pessoa* buscar(Pessoa *lista, int idBusca){

Pessoa *atual = lista;
if(atual == NULL){
printf("Ninguem cadastrado");
return;

} else{
    while(atual != NULL){
        if(atual->id == idBusca){
            printf("\nNome: %s", atual->nome);
            printf("ID: %d", atual->id);
            printf("\nIdade: %d", atual->idade);
            return atual;
        }
        atual = atual->prox;

    }
    printf("Pessoa nao encontrad-a");
    return NULL;
    }

}

void alterar(Pessoa *encontrada){

printf("\nAlterar nome: ");
fgets(encontrada->nome, sizeof(encontrada->nome), stdin);
while(getchar() != '\n');

printf("\nAlterar a idade: ");
scanf("%d", &encontrada->idade);
while(getchar() != '\n');

}

Pessoa* excluir(Pessoa *lista, int idBusca){

Pessoa *anterior = NULL;
Pessoa *atual = lista;
    while(atual != NULL && atual->id != idBusca){
        anterior = atual;
        atual = atual->prox;
    }
    if(atual != NULL){
        if(anterior != NULL){
            //exluir alguem depois do 1ª 
            anterior->prox = atual->prox;
        }else{
            //excluir o 1ª
            lista = atual->prox;
        }
        free(atual);
        printf("Pessoa Exluida com sucesso!");
    }else{
        printf("Nao encontrada!");
    }
    return lista;
}

void liberarLista(Pessoa* lista){

Pessoa *atual;
Pessoa *proximaPessoa;

while(atual != NULL){
    proximaPessoa = atual->prox;
    free(atual);
    atual = proximaPessoa;
}

}


main()
{

    Pessoa *lista = criarListaVazia();
    Pessoa *encontrada;
    int opcao, idBusca;
    
    printf("[-----Cadastro do Jaca-----]");

    do
    {

        printf("\nDigite 1 - Cadastrar uma pessoa");
        printf("\nDigite 2 - Mostrar todos os cadastros");
        printf("\nDigite 3 - Buscar um cadastro");
        printf("\nDigite 4 - Alterar um cadastro");
        printf("\nDigite 5 - Excluir um cadastro");
        printf("\nDigite 0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        lista = cadastrar(lista);
            
        break;

        case 2:
        mostrar(lista);

        break;

        case 3:
        printf("Digite o Id para buscar:");
        scanf("%d", &idBusca);
        encontrada = buscar(lista, idBusca);

        break;

        case 4:
        printf("\nDigite o Id para alterar:");
        scanf("%d", &idBusca);
        encontrada = buscar(lista, idBusca);
        if(encontrada != NULL){
            alterar(encontrada);
        }
        break;

        case 5:
        printf("\nDigite o Id para alterar:");
        scanf("%d", &idBusca);
        lista = excluir(lista, idBusca);
        break;
        }

    } while (opcao != 0);

    liberarLista(lista);
}