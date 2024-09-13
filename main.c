#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include "characters.h"

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;

    ficha_personagem mauro;
    ficha_personagem bruna;
    ficha_personagem jaime;

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

    // Bruna
    strcpy(bruna.nome, "Bruna Sampaio");
    bruna.nex = 5;
    strcpy(bruna.classe, "Especialista");
    bruna.forca = 0;
    bruna.agilidade = 0;
    bruna.inteligencia = 2;
    bruna.vigor = 0;
    bruna.presenca = 2;

    // Jaime
    strcpy(jaime.nome, "Jaime Orthuga");
    jaime.nex = 5;
    strcpy(jaime.classe, "Ocultista");
    jaime.forca = 0;
    jaime.agilidade = 0;
    jaime.inteligencia = 1;
    jaime.vigor = 1;
    jaime.presenca = 2;

    // Tittle Screen

    /*
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
    
    system("cls"); */

    // Inicio do Jogo

    printf("Mauro (1)\n\n");

    printf("Nome: %s\n", mauro.nome);
    printf("Nex: %d%%\n", mauro.nex);
    printf("Classe: %s\n\n", mauro.classe);
    printf("For�a: %d\n", mauro.forca);
    printf("Agilidade: %d\n", mauro.agilidade);
    printf("Intelig�ncia: %d\n", mauro.inteligencia);
    printf("Vigor: %d\n", mauro.vigor);
    printf("Presen�a: %d\n\n", mauro.presenca);

    printf("-----------------------------\n\n");

    printf("Bruna (2)\n\n");

    printf("Nome: %s\n", bruna.nome);
    printf("Nex: %d%%\n", bruna.nex);
    printf("Classe: %s\n\n", bruna.classe);
    printf("For�a: %d\n", bruna.forca);
    printf("Agilidade: %d\n", bruna.agilidade);
    printf("Intelig�ncia: %d\n", bruna.inteligencia);
    printf("Vigor: %d\n", bruna.vigor);
    printf("Presen�a: %d\n\n", bruna.presenca);

    printf("-----------------------------\n\n");

    printf("Jaime (3)\n\n");

    printf("Nome: %s\n", jaime.nome);
    printf("Nex: %d%%\n", jaime.nex);
    printf("Classe: %s\n\n", jaime.classe);
    printf("For�a: %d\n", jaime.forca);
    printf("Agilidade: %d\n", jaime.agilidade);
    printf("Intelig�ncia: %d\n", jaime.inteligencia);
    printf("Vigor: %d\n", jaime.vigor);
    printf("Presen�a: %d\n\n", jaime.presenca);

    printf("-----------------------------\n\n");

    int escolhaPersonagem = 0;

    while(escolhaPersonagem != 1 && escolhaPersonagem != 2 && escolhaPersonagem != 3) {
        printf("Escolha o seu personagem (1 a 3): ");
        scanf("%d", &escolhaPersonagem);
        fflush(stdin);
        
        // Verifica se a entrada � v�lida
        if(escolhaPersonagem != 1 && escolhaPersonagem != 2 && escolhaPersonagem != 3) {
            printf("\nEscolha inv�lida, tente novamente!\n\n");
        }
    }

    system("cls");

    switch (escolhaPersonagem) {
        case 1:
            printf("Mauro Nunes\n\n");

            printf("HIST�RIA -----------------------------------------\n\n");
            printf("Mauro Nunes era um personal trainer e lutador aflito com a falta de motiva��o pessoal em sua vida, at� que presenciou um ataque de uma criatura paranormal dentro da academia em que trabalhava. O seu instinto inicial foi partir para cima e proteger a vida de todos que estavam l�, pois consideravaas mais importantes que a sua, o que impressionou os agentes da Ordem que haviam acabado de chegar no local.\n\n");

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
            printf("\n\n");
            break;

        case 2:
            printf("Bruna Sampaio\n\n");

            printf("HIST�RIA -----------------------------------------\n\n");
            printf("Bruna Sampaio sempre foi acostumada com uma vida secreta, com um trabalho de T.I. no dia-a-dia para manter as apar�ncias enquanto participava de um grupo an�nimo de hackers dedicados � investiga��o de incidentes paranormais. O seu trabalho excepcional  atraiu a aten��o de outro hacker, um agente da Ordem que tamb�m participava desse grupo.\n\n");

            printf("ATRIBUTOS -----------------------------------------\n\n");
            printf("Nex: %d%%\n", bruna.nex);
            printf("Classe: %s\n\n", bruna.classe);
            printf("For�a: %d\n", bruna.forca);
            printf("Agilidade: %d\n", bruna.agilidade);
            printf("Intelig�ncia: %d\n", bruna.inteligencia);
            printf("Vigor: %d\n", bruna.vigor);
            printf("Presen�a: %d\n\n", bruna.presenca);

            printf("INVENT�RIO ---------------------------------------\n\n");
            printf("Notebook            |   Kit de Inform�tica, Utens�lio de Atualidades +1d\n");
            printf("Pistola Glock 17    |   Calibre Pequeno                                 \n");
            printf("Muni��o(3x)         |   Calibre Pequeno                                 \n");
            printf("Parafernalha Hacker |   Kit de Tecnologia, Utens�lio de Tecnologia +1d  \n");
            printf("Fonte de Luz        |   Utens�lio                                     \n\n");

            printf("ARMAS --------------------------------------------\n");
            printf("Nome            |  Dano     |  Alcance            \n");
            printf("--------------------------------------------------\n");
            printf("Glock 17           2d4         Curto              \n");
            printf("\n\n");
            break;

        case 3:
            printf("Jaime Orthuga\n\n");

            printf("HIST�RIA -----------------------------------------\n\n");
            printf("Jaime cresceu em um orfanato religioso e seguiu a rotina de proped�utica at� encontrar a entrada para o setor secreto e proibido da biblioteca. L�, descobriu sobre o paranormal e sentiu o chamado do Outro Lado. Viveu boa parte de sua vida agindo como um exorcista, acalmando pessoas traumatizadas pelo paranormal mas nunca confrontando criaturas de frente. A sua influ�ncia e jeito com as palavras chamou a aten��o de um agente da Ordem que investigava uma fam�lia que havia contratado Jaime.\n\n");

            printf("ATRIBUTOS -----------------------------------------\n\n");
            printf("Nex: %d%%\n", jaime.nex);
            printf("Classe: %s\n\n", jaime.classe);
            printf("For�a: %d\n", jaime.forca);
            printf("Agilidade: %d\n", jaime.agilidade);
            printf("Intelig�ncia: %d\n", jaime.inteligencia);
            printf("Vigor: %d\n", jaime.vigor);
            printf("Presen�a: %d\n\n", jaime.presenca);

            printf("INVENT�RIO ---------------------------------------\n\n");
            printf("Medalh�o de F�      |   Vestimenta Aprimorada de Vontade +1d e +5       \n");
            printf("Caderno de Estudos  |   Utens�lio de Religi�o e Ci�ncia (hist�ria) +1d  \n");
            printf("Fonte de Luz        |   Utens�lio                                     \n\n");

            printf("ARMAS --------------------------------------------\n");
            printf("Nome            |  Dano     |  Alcance            \n");
            printf("--------------------------------------------------\n");
            printf("                                                  \n");
            printf("\n\n");

            printf("RITUAIS ------------------------------------------\n");
            printf("Cicatriza��o\n");
            printf("MORTE\n\n");

            printf("C�rculo: 1\n");
            printf("Alcance: toque\n");
            printf("Alvo: um personagem\n");
            printf("Dura��o: instant�neo\n\n");
            printf("Voc� toca um personagem, fechando suas feridas de forma acelerada. O alvo recupera 2d8+2 PV.\n");
            printf("\n\n");

            printf("Decad�ncia\n");
            printf("MORTE\n\n");

            printf("C�rculo: 1\n");
            printf("Alcance: toque\n");
            printf("Alvo: um personagem\n");
            printf("Dura��o: instant�neo\n\n");
            printf("Voc� toca um personagem, fechando suas feridas de forma acelerada. O alvo recupera 2d8+2 PV.\n");
            printf("\n\n");

            printf("Embaralhar\n");
            printf("ENERGIA CONHECIMENTO\n\n");

            printf("C�rculo: 1\n");
            printf("Alcance: toque\n");
            printf("Alvo: um personagem\n");
            printf("Dura��o: instant�neo\n\n");
            printf("Voc� toca um personagem, fechando suas feridas de forma acelerada. O alvo recupera 2d8+2 PV.\n");
            printf("\n\n");
            break;

        default:
            break;
    }



    getchar();
    return 0;
}


