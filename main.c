#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

#include "characters.h"
#include "weapons.h"

int i;

//Itens iniciais no invent�rio
item_inventario inventario[] = {
    {"Jaqueta refor�ada", "Prote��o Leve"},
    {"Fonte de Luz", "Utens�lio"}
};


// Fun��es
void abrirFichaPersonagem() {
    printf("Mauro Nunes\n\n");

    printf("HIST�RIA -----------------------------------------\n\n");
    printf("Mauro Nunes � um soldado rec�m recrutado pela Ordem que foi enviado para miss�o como guarda costas\n");
    printf("de um especialista que desvendaria o caso.\n\n");

    printf("ATRIBUTOS -----------------------------------------\n\n");
    printf("Nex: %d%%\n", mauro.nex);
    printf("Classe: %s\n\n", mauro.classe);
    printf("For�a: %d\n", mauro.forca);
    printf("Agilidade: %d\n", mauro.agilidade);
    printf("Intelig�ncia: %d\n", mauro.inteligencia);
    printf("Vigor: %d\n", mauro.vigor);
    printf("Presen�a: %d\n\n", mauro.presenca);
}

void inicializarInventario(Inventario *inv, int capacidadeInicial) {
    inv->capacidade = capacidadeInicial;
    inv->quantidade = sizeof(inventario) / sizeof(inventario[0]);
    inv->itens = (item_inventario *) malloc(capacidadeInicial * sizeof(item_inventario));
    
    if (inv->itens == NULL) {
        printf("Erro de aloca��o de mem�ria!\n");
        exit(1);
    }

    // Copia os itens padr�o para o invent�rio
    for (size_t i = 0; i < (size_t)inv->quantidade; i++) {
        strcpy(inv->itens[i].nome, inventario[i].nome);
        strcpy(inv->itens[i].descricao, inventario[i].descricao);
    }
}

void adicionarItem(Inventario *inv, const char *nome, const char *descricao) {
    if (inv->quantidade < inv->capacidade) {
        strcpy(inv->itens[inv->quantidade].nome, nome);
        strcpy(inv->itens[inv->quantidade].descricao, descricao);
        inv->quantidade++;  // Incrementa a quantidade de itens
    } else {
        printf("Invent�rio cheio! N�o � poss�vel adicionar mais itens.\n");
    }
}

void abrirInventario(Inventario *inv) {
    printf("-----------------INVENT�RIO(%d/%d)-------------------\n", inv->quantidade, inv->capacidade);
    printf("Item                     |  Descri��o                           \n");
    printf("----------------------------------------------------\n");

    // Verificar se h� itens no invent�rio
    if (inv->quantidade == 0) {
        printf("O invent�rio est� vazio.\n");
    }

    for (size_t i = 0; i < (size_t)inv->quantidade; i++) {
        printf("%-24s |  %s\n", inv->itens[i].nome, inv->itens[i].descricao);
    }

    printf("-----------------------ARMAS------------------------\n");
    printf("Nome                     |  Dano  |  Alcance            \n");
    printf("----------------------------------------------------\n");

    // Supondo que armas seja um array definido corretamente
    for (size_t i = 0; i < sizeof(armas) / sizeof(armas[0]); i++) {
        if (armas[i].dano < 10) {
            printf("%-24s |  0%d    |  %s\n", armas[i].nome, armas[i].dano, armas[i].alcance);
        } else {
            printf("%-24s |  %d    |  %s\n", armas[i].nome, armas[i].dano, armas[i].alcance);
        }
    }

    printf("----------------------------------------------------\n");
    printf("\n");
}

void abrirMenu(Inventario *inv){
    int opcao;

    do{
        printf("1. Ver ficha do personagem\n");
        printf("2. Ver invent�rio\n");
        printf("3. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                system("cls");
                abrirFichaPersonagem();
                break;
            case 2:
                system("cls");
                abrirInventario(inv);
                break;
            case 3:
                printf("\nSaindo...\n");
                Sleep(2000);
                system("cls");
                break;
            default:
                system("cls");
                printf("Op��o inv�lida! Tente novamente...\n");
                break;
        }
    } while (opcao != 3);
}

// Cenas em Jogo

void telaDeTitulo(){
    system("cls");

    printf("\n\n\n\n");
    printf("\t\t***********************************************\n");
    printf("\t\t*                                             *\n");
    printf("\t\t*          ORDEM PARANORMAL - TEXT RPG        *\n");
    printf("\t\t*                                             *\n");
    printf("\t\t*                                             *\n");
    printf("\t\t*          Gabriel Martins - 2024 v1.0        *\n");
    printf("\t\t*                                             *\n");
    printf("\t\t***********************************************\n");
    printf("\n\n\n\n");
    printf("\t\tPressione qualquer tecla para continuar...");

    getch();
}

void telaDeInicio(){
    system("cls");

    printf("\n\n\n\n");
    printf("\t\t*********************************************\n");
    printf("\t\t*                                           *\n");
    printf("\t\t*        O LAMENTO DO INTERCEPTADOR         *\n");
    printf("\t\t*                                           *\n");
    printf("\t\t*********************************************\n");
    printf("\n");
    printf("\t\tUma entidade de terror, o Interceptador, assola a rede militar brasileira,\n");
    printf("\t\tcriando zumbis sanguin�rios e deixando um rastro de medo. Voc�, um soldado rec�m-recrutado,\n");
    printf("\t\tdeve desvendar o mist�rio por tr�s dessa for�a sombria\n");
    printf("\t\te enfrentar o ocultista que manipula o medo para alcan�ar poder.\n");
    printf("\t\tEm uma corrida contra o tempo, ele precisa resolver o enigma\n");
    printf("\t\tdo medo e confrontar a entidade antes que seja tarde demais.\n");
    printf("\n\n");
    printf("\t\tPressione qualquer tecla para continuar...");
    
    getch();
}

void cena1(){
    system("cls");

    
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    Inventario inventario;
    int capacidadeInicial = 10;

    //Inicializa��es necess�rias
    inicializarInventario(&inventario, capacidadeInicial);
    
    //Cap�tulo 1 -----------------------------------------

    //Tela de T�tulo
    telaDeTitulo();

    //Tela de In�cio
    telaDeInicio();

    cena1();

    getch();
    return 0;
}


