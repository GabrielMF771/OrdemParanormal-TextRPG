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
    printf("Mauro Nunes era um personal trainer e lutador aflito com a falta de motiva��o pessoal em sua vida, at� que presenciou ataque de uma criatura paranormal dentro da academia em que trabalhava. O seu instinto inicial foi partir para cima e proteger vida de todos que estavam l�, pois considerava as mais importantes que a sua, o que impressionou os agentes da Ordem que haviam acabado de chegar no local.\n\n");

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

void mostrarMenu(Inventario *inv){
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

int main(){
    setlocale(LC_ALL, "Portuguese");
    Inventario inventario;
    int capacidadeInicial = 10;

    // Tittle Screen

    printf("\n\n\n\n\n\n\t\t\t\t\tOrdem Paranormal - Text RPG");
    printf("\n\n\n\n\n\n\n\n\t\t\t\tPressione qualquer tecla para continuar...");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\tGabriel Martins - 2024 v1.0");

    getch();
    
    system("cls");

    // Tela de inicio

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tAs M�os que Nos Acolhem");

    printf("\n\n\n A cidade de Tronco do Oeste est� borbulhando com desaparecimentos de crian�as de 6 anos de idade. Todas desapareceram\n na noite do dia em que seus pais notaram misteriosas marcas de m�os em suas costas. Os recrutas da Ordem s�o enviados\n para a cidade para investigar esses desaparecimentos e determinar se o caso se trata de um evento paranormal.\n O que eles n�o esperavam era que iriam se deparar com um dilema: reportar o acontecido e esperar refor�os,\n possivelmente colocando a vida de mais uma crian�a em perigo; ou enfrentar uma perigosa criatura, apesar de serem\n apenas recrutas?");

    printf("\n\n\n\t\t\t\tPressione qualquer tecla para continuar...");
    
    getch();
    
    system("cls"); 

    // Inicio do Jogo

    //Inicializa��es necess�rias
    inicializarInventario(&inventario, capacidadeInicial);
    
    
    

    getch();
    return 0;
}


