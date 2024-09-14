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
arma katana = {"Katana", "Branca", "Adjacente", 10};
arma faca_combate = {"Faca de Combate", "Branca", "Curto", 6};
arma revolver = {"Revolver .38", "Fogo", "Curto", 8};

//Funções
void abrirFichaPersonagem(){
    printf("Mauro Nunes\n\n");

    printf("HISTÓRIA -----------------------------------------\n\n");
    printf("Mauro Nunes era um personal trainer e lutador aflito com a falta de motivação pessoal em sua vida, até que presenciou ataque de uma criatura paranormal dentro da academia em que trabalhava. O seu instinto inicial foi partir para cima e protegervida de todos que estavam lá, pois considera vaas mais importantes que a sua, o que impressionou os agentes da Ordem que haviacabado de chegar no local.\n\n");

    printf("ATRIBUTOS -----------------------------------------\n\n");
    printf("Nex: %d%%\n", mauro.nex);
    printf("Classe: %s\n\n", mauro.classe);
    printf("Força: %d\n", mauro.forca);
    printf("Agilidade: %d\n", mauro.agilidade);
    printf("Inteligência: %d\n", mauro.inteligencia);
    printf("Vigor: %d\n", mauro.vigor);
    printf("Presença: %d\n\n", mauro.presenca);

    printf("INVENTÁRIO ---------------------------------------\n\n");
    printf("Katana              |   Arma corpo a corpo especial de duas mãos\n");
    printf("Faca de combate     |   Arma corpo a corpo simples de uma mão   \n");
    printf("Revólver (CP)       |   Calibre Pequeno                         \n");
    printf("Munição(2x)         |   Calibre Pequeno                         \n");
    printf("Jaqueta reforçada   |   Proteção Leve                           \n");
    printf("Fonte de Luz        |   Utensílio                              \n\n");

    printf("ARMAS --------------------------------------------\n");
    printf("Nome            |  Dano     |  Alcance            \n");
    printf("--------------------------------------------------\n");
    printf("%s\t\t   %d\t\t%s          \n", katana.nome, katana.dano, katana.alcance);
    printf("%s\t   %d\t\t%s          \n", faca_combate.nome, faca_combate.dano, faca_combate.alcance);
    printf("%s\t   %d\t\t%s          \n", revolver.nome, revolver.dano, revolver.alcance);
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

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tAs Mãos que Nos Acolhem");

    printf("\n\n\n A cidade de Tronco do Oeste está borbulhando com desaparecimentos de crianças de 6 anos de idade. Todas desapareceram\n na noite do dia em que seus pais notaram misteriosas marcas de mãos em suas costas. Os recrutas da Ordem são enviados\n para a cidade para investigar esses desaparecimentos e determinar se o caso se trata de um evento paranormal.\n O que eles não esperavam era que iriam se deparar com um dilema: reportar o acontecido e esperar reforços,\n possivelmente colocando a vida de mais uma criança em perigo; ou enfrentar uma perigosa criatura, apesar de serem\n apenas recrutas?");

    printf("\n\n\n\t\t\t\tPressione qualquer tecla para continuar...");
    
    getch();
    
    system("cls"); 

    // Inicio do Jogo

    abrirFichaPersonagem();

    getchar();
    return 0;
}


