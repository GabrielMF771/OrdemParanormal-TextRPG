#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

#include "character/character.h"
#include "weapons/weapons.h"

int i;

//Itens iniciais no invent�rio
item_inventario inventario[] = {
    {"Jaqueta refor�ada", "Prote��o Leve"},
    {"Fonte de Luz", "Utens�lio"}
};
arma armas[] = {
    {"Katana", "Branca", "Adjacente", 10},
    {"Faca de Combate", "Branca", "Curto", 6},
    {"Rev�lver .38", "Fogo", "Curto", 8}
};

// Fun��es Principais

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

// Fun��es do Invent�rio
void inicializarInventario(Inventario *inv, int capacidade) {
    inv->capacidade = capacidade;
    inv->quantidade = sizeof(inventario) / sizeof(inventario[0]);
    inv->itens = (item_inventario *) malloc(capacidade * sizeof(item_inventario));
    
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

void ajustarCapacidade(Inventario *inv, int novaCapacidade) {
    // Realoca a mem�ria para a nova capacidade
    inv->itens = (item_inventario *) realloc(inv->itens, novaCapacidade * sizeof(item_inventario));
    
    if (inv->itens == NULL) {
        printf("Erro de aloca��o de mem�ria!\n");
        exit(1);
    }
    
    // Atualiza a capacidade do invent�rio
    inv->capacidade = novaCapacidade;

    printf("Capacidade ajustada para %d itens.\n\n", inv->capacidade);
}

void adicionarItem(Inventario *inv, const char *nome, const char *descricao) {
    if (inv->quantidade < inv->capacidade) {
        strcpy(inv->itens[inv->quantidade].nome, nome);
        strcpy(inv->itens[inv->quantidade].descricao, descricao);
        inv->quantidade++;  // Incrementa a quantidade de itens
        printf("%s foi adicionado ao invent�rio!\n\n", nome);
    } else {
        printf("\nInvent�rio cheio! N�o � poss�vel adicionar mais itens.\n");
    }
}

void abrirInventario(Inventario *inv) {
    printf("====================================================\n");
    printf("|                  INVENT�RIO                      |\n");
    printf("|                    (%d/%d)                        |\n", inv->quantidade, inv->capacidade);
    printf("====================================================\n");
    printf("Item                     |  Descri��o                           \n");
    printf("----------------------------------------------------\n");

    // Verificar se h� itens no invent�rio
    if (inv->quantidade == 0) {
        printf("O invent�rio est� vazio.\n");
    }

    for (size_t i = 0; i < (size_t)inv->quantidade; i++) {
        printf("%-24s |  %s\n", inv->itens[i].nome, inv->itens[i].descricao);
    }

    printf("\n====================================================\n");
    printf("|                     ARMAS                        |\n");
    printf("====================================================\n");
    printf("%-24s | %-6s|  %-10s\n", "Nome", "Dano", "Alcance");
    printf("----------------------------------------------------\n");

    for (size_t i = 0; i < sizeof(armas) / sizeof(armas[0]); i++) {
        if (armas[i].dano < 10) {
            printf("%-24s |  0%d   |  %s\n", armas[i].nome, armas[i].dano, armas[i].alcance);
        } else {
            printf("%-24s |  %d   |  %s\n", armas[i].nome, armas[i].dano, armas[i].alcance);
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
    printf("\t\t*             T�TULO DA MISS�O              *\n");
    printf("\t\t*                                           *\n");
    printf("\t\t*********************************************\n");
    printf("\n");
    printf("\t\tLorem ipsum dolor sit amet consectetur adipisicing elit.\n");
    printf("\t\tQuas accusantium quaerat perspiciatis labore iusto? Nostrum debitis labore numquam, recusandae,\n");
    printf("\t\tdolorem nisi illo dolorum voluptatum pariatur nihil at, eligendi error cupiditate?\n");
    printf("\n");
    printf("\t\tPressione qualquer tecla para continuar...");
    
    getch();
}

void cena1(){
    system("cls");

    printf("Voc� est� em uma van da ordem sendo conduzido para o local de sua miss�o.\nO motorista, cujo rosto est� coberto por uma m�scara, n�o disse uma �nica palavra durante toda a viagem.\nAo chegar no local, voc� avista uma casa cercada por fitas da pol�cia. Uma neblina rasa oculta parte do horizonte.\nAo descer da van com seus equipamentos, o motorista imediatamente d� a partida para ir embora.\nVoc� est� por conta pr�pria.\n\nA sua frente, est� a casa onde ocorreu um dos desaparecimentos. O que voc� faz?\n\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    Inventario inventario;

    //Inicializa��es necess�rias
    inicializarInventario(&inventario, 10);

    //Cap�tulo 1 -----------------------------------------

    //Tela de T�tulo
    //telaDeTitulo();

    //Tela de In�cio
    //telaDeInicio();

    //cena1();

    abrirInventario(&inventario);
    
    getch();
    return 0;
}


