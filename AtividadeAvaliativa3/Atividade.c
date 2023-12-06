#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

typedef struct Produto
{

    int codigo;
    int quantidade;
    float valor;
    char descricao[40];
    struct Produto *prox;

} Produto;

Produto *criarListaVazia()
{

return NULL;

}

Produto *criarNovaProduto()
{
    Produto *novaProduto = (Produto *)malloc(sizeof(Produto));

    if (novaProduto == NULL)
    {
        printf("Nao foi possivel alocar memoria");
        exit(EXIT_FAILURE);
    }

    novaProduto->prox = NULL;
    return novaProduto;
}

Produto *cadastrar(Produto *Lista)
{

    Produto *novaProduto = criarNovaProduto();

    srand(time(NULL));
    novaProduto->codigo = rand() % 100;

    printf("\nInforme a descricao: ");
    fgets(novaProduto->descricao, sizeof(novaProduto->descricao), stdin);
    fflush(stdin);

    printf("\nInforme o valor: ");
    scanf("%f", &novaProduto->valor);
    fflush(stdin);

    printf("\nDigite a quantidade: ");
    scanf("%d", &novaProduto->quantidade);
    fflush(stdin);

    if (Lista == NULL)
    {
        Lista = novaProduto;
    }
    else
    {
        Produto *atual = Lista;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novaProduto;
    }

    return Lista;
}

void mostrar(Produto *lista){

Produto *atual = lista;

if(atual == NULL){
printf("Nenhum produto cadastrado");
return;

}else{
    while(atual != NULL){
        printf("codigo: %d", atual->codigo);
        printf("\ndescricao: %s", atual->descricao);
        printf("quantidade: %d", atual->quantidade);
        printf("\nvalor: %.2f\n", atual->valor);
        atual = atual ->prox;
    }
}

}

Produto* buscar(Produto *lista, int codigoBusca){

Produto *atual = lista;
if(atual == NULL){
printf("Ninguem cadastrado");
return;

} else{
    while(atual != NULL){
        if(atual->codigo == codigoBusca){
            printf("\ndescricao: %s", atual->descricao);
            printf("\ncodigo: %d", atual->codigo);
            printf("\nquantidade: %d", atual->quantidade);
            printf("\nvalor: %.2f", atual->valor);
            return atual;
        }
        atual = atual->prox;

    }
    printf("Produto nao encontrado");
    return NULL;
    }

}

void alterar(Produto *encontrada){

printf("\nAlterar descricao: ");
fgets(encontrada->descricao, sizeof(encontrada->descricao), stdin);
fflush(stdin);

printf("\nAlterar a quantidade: ");
scanf("%d", &encontrada->quantidade);
fflush(stdin);

printf("\nAlterar Valor: ");
scanf("%f", &encontrada->valor);
fflush(stdin);

}

Produto* excluir(Produto *lista, int codigoBusca){

Produto *anterior = NULL;
Produto *atual = lista;
    while(atual != NULL && atual->codigo != codigoBusca){
        anterior = atual;
        atual = atual->prox;
    }
    if(atual != NULL){
        if(anterior != NULL){
            //exluir depois do 1ª 
            anterior->prox = atual->prox;
        }else{
            //excluir o 1ª
            lista = atual->prox;
        }
        free(atual);
        printf("Produto Excluido com sucesso!");
    }else{
        printf("Nao encontrado!");
    }
    return lista;
}

void liberarLista(Produto* lista){

Produto *atual;
Produto *proximaProduto;

while(atual != NULL){
    proximaProduto = atual->prox;
    free(atual);
    atual = proximaProduto;
}

}


main()
{

    Produto *lista = criarListaVazia();
    Produto *encontrada;
    int opcao, codigoBusca;
    
    printf("[-----Funcao de Administrador-----]");
    printf("\n[-----Cadastro do Produtos-----]");

    do
    {

        printf("\nDigite 1 - Cadastrar um Produto");
        printf("\nDigite 2 - Mostrar todos os Produtos");
        printf("\nDigite 3 - Buscar um Produto");
        printf("\nDigite 4 - Alterar um Produto");
        printf("\nDigite 5 - Excluir um Produto");
        printf("\nDigite 0 - Sair\n");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao)
        {
        case 1:
        lista = cadastrar(lista);
            
        break;

        case 2:
        mostrar(lista);

        break;

        case 3:
        printf("Digite o codigo para buscar:");
        scanf("%d", &codigoBusca);
        fflush(stdin);
        encontrada = buscar(lista, codigoBusca);

        break;

        case 4:
        printf("\nDigite o codigo para alterar:");
        scanf("%d", &codigoBusca);
        fflush(stdin);
        encontrada = buscar(lista, codigoBusca);
        if(encontrada != NULL){
            alterar(encontrada);
        }
        break;

        case 5:
        printf("\nDigite o codigo para alterar:");
        scanf("%d", &codigoBusca);
        lista = excluir(lista, codigoBusca);
        break;
        }

    } while (opcao != 0);

    liberarLista(lista);
}