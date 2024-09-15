typedef struct
    {
        char nome[20];
        char tipo[10];
        char alcance[10];
        int dano;
    } arma;

    arma armas[] = {
    {"Katana", "Branca", "Adjacente", 10},
    {"Faca de Combate", "Branca", "Curto", 6},
    {"Revólver .38", "Fogo", "Curto", 8}
};