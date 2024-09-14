#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

#include "characters.h"
#include "weapons.h"

//Atributos do Personagem
ficha_personagem mauro = {
    .nome = "Mauro Nunes",
    .nex = 5,
    .classe = "Combatente",
    .forca = 2,
    .agilidade = 0,
    .inteligencia = -1,
    .vigor = 2,
    .presenca = 1
};

//Armas
arma armas[] = {
    {"Katana", "Branca", "Adjacente", 10},
    {"Faca de Combate", "Branca", "Curto", 6},
    {"Rev�lver .38", "Fogo", "Curto", 8}
};

//Invent�rio
item_inventario inventario[] = {
    {"Jaqueta refor�ada", "Prote��o Leve"},
    {"Fonte de Luz", "Utens�lio"}
};

int i;

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

    printf("INVENT�RIO ---------------------------------------\n");
    printf("Item                    |  Descri��o                           \n");
    printf("--------------------------------------------------------------\n");
    for (size_t i = 0; i < sizeof(inventario) / sizeof(inventario[0]); i++) {
        printf("%-24s |  %s\n", inventario[i].nome, inventario[i].descricao);
    }
    printf("\n");

    printf("ARMAS --------------------------------------------\n");
    printf("Nome                    |  Dano   |  Alcance            \n");
    printf("--------------------------------------------------------\n");
    for (size_t i = 0; i < sizeof(armas) / sizeof(armas[0]); i++) {
        printf("%-24s |  %d  |  %s\n", armas[i].nome, armas[i].dano, armas[i].alcance);
    }
    printf("\n\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese");

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

    abrirFichaPersonagem();

    getchar();
    return 0;
}


