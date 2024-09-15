#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

#include "characters.h"
#include "weapons.h"

int i;

//Itens iniciais no inventário
item_inventario inventario[] = {
    {"Jaqueta reforçada", "Proteção Leve"},
    {"Fonte de Luz", "Utensílio"}
};


// Funções
void abrirFichaPersonagem() {
    printf("Mauro Nunes\n\n");

    printf("HISTÓRIA -----------------------------------------\n\n");
    printf("Mauro Nunes era um personal trainer e lutador aflito com a falta de motivação pessoal em sua vida, até que presenciou ataque de uma criatura paranormal dentro da academia em que trabalhava. O seu instinto inicial foi partir para cima e proteger vida de todos que estavam lá, pois considerava as mais importantes que a sua, o que impressionou os agentes da Ordem que haviam acabado de chegar no local.\n\n");

    printf("ATRIBUTOS -----------------------------------------\n\n");
    printf("Nex: %d%%\n", mauro.nex);
    printf("Classe: %s\n\n", mauro.classe);
    printf("Força: %d\n", mauro.forca);
    printf("Agilidade: %d\n", mauro.agilidade);
    printf("Inteligência: %d\n", mauro.inteligencia);
    printf("Vigor: %d\n", mauro.vigor);
    printf("Presença: %d\n\n", mauro.presenca);
}

void inicializarInventario(Inventario *inv, int capacidadeInicial) {
    inv->capacidade = capacidadeInicial;
    inv->quantidade = sizeof(inventario) / sizeof(inventario[0]);
    inv->itens = (item_inventario *) malloc(capacidadeInicial * sizeof(item_inventario));
    
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

void adicionarItem(Inventario *inv, const char *nome, const char *descricao) {
    if (inv->quantidade < inv->capacidade) {
        strcpy(inv->itens[inv->quantidade].nome, nome);
        strcpy(inv->itens[inv->quantidade].descricao, descricao);
        inv->quantidade++;  // Incrementa a quantidade de itens
    } else {
        printf("Inventário cheio! Não é possível adicionar mais itens.\n");
    }
}

void abrirInventario(Inventario *inv) {
    printf("-----------------INVENTÁRIO(%d/%d)-------------------\n", inv->quantidade, inv->capacidade);
    printf("Item                     |  Descrição                           \n");
    printf("----------------------------------------------------\n");

    // Verificar se há itens no inventário
    if (inv->quantidade == 0) {
        printf("O inventário está vazio.\n");
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

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tAs Mãos que Nos Acolhem");

    printf("\n\n\n A cidade de Tronco do Oeste está borbulhando com desaparecimentos de crianças de 6 anos de idade. Todas desapareceram\n na noite do dia em que seus pais notaram misteriosas marcas de mãos em suas costas. Os recrutas da Ordem são enviados\n para a cidade para investigar esses desaparecimentos e determinar se o caso se trata de um evento paranormal.\n O que eles não esperavam era que iriam se deparar com um dilema: reportar o acontecido e esperar reforços,\n possivelmente colocando a vida de mais uma criança em perigo; ou enfrentar uma perigosa criatura, apesar de serem\n apenas recrutas?");

    printf("\n\n\n\t\t\t\tPressione qualquer tecla para continuar...");
    
    getch();
    
    system("cls"); 

    // Inicio do Jogo

    //Inicializações necessárias
    inicializarInventario(&inventario, capacidadeInicial);
    
    
    

    getch();
    return 0;
}


