#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "characters.h"

void abrirFichaPersonagem(){
    ficha_personagem mauro;

    // Atribuição dos atributos dos personagens

    // Mauro
    strcpy(mauro.nome, "Mauro Nunes");
    mauro.nex = 5;
    strcpy(mauro.classe, "Combatente");
    mauro.forca = 2;
    mauro.agilidade = 0;
    mauro.inteligencia = -1;
    mauro.vigor = 2;
    mauro.presenca = 1;

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
    printf("Katana             1d10+4      Adjacente          \n");
    printf("Faca de Combate    1d6+2       Curto              \n");
    printf(".38 cano curto     2d4         Curto              \n");
    printf("\n\n");
}