//Ficha Mauro
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

//Atributos iniciais do Mauro
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


//Item no inventário
typedef struct {
    char nome[50];
    char descricao[100];
} item_inventario;

typedef struct {
    item_inventario *itens;
    int capacidade;
    int quantidade;
} Inventario;