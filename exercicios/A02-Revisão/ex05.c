struct horario {
    int hh;
    int mm;
    int ss;
};

struct data {
    int aaaa;
    int mm;
    int dd;
};

struct compromisso {
    struct data d1;
    struct horario h1;
    char descricao[256];
};