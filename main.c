#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include "characters.h"

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


