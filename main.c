#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

#include "character/character.h"
#include "weapons/weapons.h"

int i;

//Itens iniciais no inventário
item_inventario inventario[] = {
    {"Jaqueta reforçada", "Proteção Leve"},
    {"Fonte de Luz", "Utensílio"}
};
arma armas[] = {
    {"Katana", "Branca", "Adjacente", 10},
    {"Faca de Combate", "Branca", "Curto", 6},
    {"Revólver .38", "Fogo", "Curto", 8}
};

// Funções Principais

void abrirFichaPersonagem() {
    printf("Mauro Nunes\n\n");

    printf("HISTÓRIA -----------------------------------------\n\n");
    printf("Mauro Nunes é um soldado recém recrutado pela Ordem que foi enviado para missão como guarda costas\n");
    printf("de um especialista que desvendaria o caso.\n\n");

    printf("ATRIBUTOS -----------------------------------------\n\n");
    printf("Nex: %d%%\n", mauro.nex);
    printf("Classe: %s\n\n", mauro.classe);
    printf("Força: %d\n", mauro.forca);
    printf("Agilidade: %d\n", mauro.agilidade);
    printf("Inteligência: %d\n", mauro.inteligencia);
    printf("Vigor: %d\n", mauro.vigor);
    printf("Presença: %d\n\n", mauro.presenca);
}

// Funções do Inventário
void inicializarInventario(Inventario *inv, int capacidade) {
    inv->capacidade = capacidade;
    inv->quantidade = sizeof(inventario) / sizeof(inventario[0]);
    inv->itens = (item_inventario *) malloc(capacidade * sizeof(item_inventario));
    
    if (inv->itens == NULL) {
        printf("Erro de alocação de memória!\n");
        exit(1);
    }

    // Copia os itens padrão para o inventário
    for (size_t i = 0; i < (size_t)inv->quantidade; i++) {
        strcpy(inv->itens[i].nome, inventario[i].nome);
        strcpy(inv->itens[i].descricao, inventario[i].descricao);
    }
}

void ajustarCapacidade(Inventario *inv, int novaCapacidade) {
    // Realoca a memória para a nova capacidade
    inv->itens = (item_inventario *) realloc(inv->itens, novaCapacidade * sizeof(item_inventario));
    
    if (inv->itens == NULL) {
        printf("Erro de alocação de memória!\n");
        exit(1);
    }
    
    // Atualiza a capacidade do inventário
    inv->capacidade = novaCapacidade;

    printf("Capacidade ajustada para %d itens.\n\n", inv->capacidade);
}

void adicionarItem(Inventario *inv, const char *nome, const char *descricao) {
    if (inv->quantidade < inv->capacidade) {
        strcpy(inv->itens[inv->quantidade].nome, nome);
        strcpy(inv->itens[inv->quantidade].descricao, descricao);
        inv->quantidade++;  // Incrementa a quantidade de itens
        printf("%s foi adicionado ao inventário!\n\n", nome);
    } else {
        printf("\nInventário cheio! Não é possível adicionar mais itens.\n");
    }
}

void abrirInventario(Inventario *inv) {
    printf("====================================================\n");
    printf("|                  INVENTÁRIO                      |\n");
    printf("|                    (%d/%d)                        |\n", inv->quantidade, inv->capacidade);
    printf("====================================================\n");
    printf("Item                     |  Descrição                           \n");
    printf("----------------------------------------------------\n");

    // Verificar se há itens no inventário
    if (inv->quantidade == 0) {
        printf("O inventário está vazio.\n");
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
        printf("2. Ver inventário\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
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
                printf("Opção inválida! Tente novamente...\n");
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
    printf("\t\t*             TÍTULO DA MISSÃO              *\n");
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

    printf("Você está em uma van da ordem sendo conduzido para o local de sua missão.\nO motorista, cujo rosto está coberto por uma máscara, não disse uma única palavra durante toda a viagem.\nAo chegar no local, você avista uma casa cercada por fitas da polícia. Uma neblina rasa oculta parte do horizonte.\nAo descer da van com seus equipamentos, o motorista imediatamente dá a partida para ir embora.\nVocê está por conta própria.\n\nA sua frente, está a casa onde ocorreu um dos desaparecimentos. O que você faz?\n\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    Inventario inventario;

    //Inicializações necessárias
    inicializarInventario(&inventario, 10);

    //Capítulo 1 -----------------------------------------

    //Tela de Título
    //telaDeTitulo();

    //Tela de Início
    //telaDeInicio();

    //cena1();

    abrirInventario(&inventario);
    
    getch();
    return 0;
}


