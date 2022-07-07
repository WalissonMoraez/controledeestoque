#include "produto.h"
#include "estoque.h"
#include "caixa.h"
#include "venda.h"

void menu(){
    //variaveis
    int opmenu;
    menu:
    system("cls");
    printf("| Controle geral|\n\n");
    printf("|[1] Cadastrar produto \n");
    printf("|[2] Visualizar estoque \n");
    printf("|[3] Visualizar caixa \n");
    printf("|[4] Simular venda \n");
    printf("|[0] Sair \n");
    scanf("%d",&opmenu);
    switch (opmenu)
    {
    case 1:
        produto();
        break;
    case 2:
        estoque();
        break;
    case 3:
        caixa();
        break;
    case 4:
        venda();
        break;
    
    case 0:
    break;
    default:
        erro:
        printf("\n|Valor Invalido");
        printf("\n|[1] Para voltar [0] Sair\n");
        scanf("\n%d",&opmenu);
        switch (opmenu)
        {
        case 1:
            goto menu;
            break;

        case 0:
        return;
        break;

        default:
            system("cls");
            goto erro;
            break;
        }
        goto menu;
    }
}