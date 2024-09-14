
typedef struct{
        char nome[20];
        int nex;
        char classe[20];
        int forca;
        int agilidade;
        int inteligencia;
        int vigor;
        int presenca;

        int ponto_vida;
        int sanidade;
        int ponto_esforco;
    } ficha_personagem;

typedef struct {
    char nome[50];
    char descricao[100];
    } item_inventario;