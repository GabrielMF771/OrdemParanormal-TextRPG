#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include "characters.h"

void abrirFichaPersonagem(){
    ficha_personagem mauro;

    // Atribui��o dos atributos dos personagens

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

    printf("HIST�RIA -----------------------------------------\n\n");
    printf("Mauro Nunes era um personal trainer e lutador aflito com a falta de motiva��o pessoal em sua vida, at� que presenciou ataque de uma criatura paranormal dentro da academia em que trabalhava. O seu instinto inicial foi partir para cima e protegervida de todos que estavam l�, pois considera vaas mais importantes que a sua, o que impressionou os agentes da Ordem que haviacabado de chegar no local.\n\n");

    printf("ATRIBUTOS -----------------------------------------\n\n");
    printf("Nex: %d%%\n", mauro.nex);
    printf("Classe: %s\n\n", mauro.classe);
    printf("For�a: %d\n", mauro.forca);
    printf("Agilidade: %d\n", mauro.agilidade);
    printf("Intelig�ncia: %d\n", mauro.inteligencia);
    printf("Vigor: %d\n", mauro.vigor);
    printf("Presen�a: %d\n\n", mauro.presenca);

    printf("INVENT�RIO ---------------------------------------\n\n");
    printf("Katana              |   Arma corpo a corpo especial de duas m�os\n");
    printf("Faca de combate     |   Arma corpo a corpo simples de uma m�o   \n");
    printf("Rev�lver (CP)       |   Calibre Pequeno                         \n");
    printf("Muni��o(2x)         |   Calibre Pequeno                         \n");
    printf("Jaqueta refor�ada   |   Prote��o Leve                           \n");
    printf("Fonte de Luz        |   Utens�lio                              \n\n");

    printf("ARMAS --------------------------------------------\n");
    printf("Nome            |  Dano     |  Alcance            \n");
    printf("--------------------------------------------------\n");
    printf("Katana             1d10+4      Adjacente          \n");
    printf("Faca de Combate    1d6+2       Curto              \n");
    printf(".38 cano curto     2d4         Curto              \n");
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


