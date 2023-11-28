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

main()
{

    Pessoa *lista = criarListaVazia();

    int opcao;

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

            break;

        case 3:

            break;

        case 4:

            break;

        case 5:

            break;
        }

    } while (opcao != 0);
}