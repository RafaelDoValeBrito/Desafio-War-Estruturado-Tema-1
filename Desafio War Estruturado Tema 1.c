
struct Territorio; // Forward declaration

typedef struct {
    char* nome;
    struct Territorio** vizinhos; // Lista de adjacência
    int num_vizinhos;
    struct Jogador* dono;
    int num_exercitos;
    struct Continente* continente;
} Territorio;

typedef struct {
    Territorio* vertices[42]; // 42 territórios no War clássico
  
} GrafoMapa;


typedef struct {
    char* nome;
  
    struct Carta* cartas_na_mao[5]; // Ex: max 5 cartas
    struct Territorio* territorios[42]; // Territórios que ele possui
} Jogador;

// ... Definição da struct Carta

typedef struct {
    Carta* elementos[44]; // Cartas de território + curingas
    int topo;
} PilhaCartas;

void embaralhar(PilhaCartas* pilha);
Carta* comprar_carta(PilhaCartas* pilha); // pop()
