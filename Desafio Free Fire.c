// Define a estrutura da Quadtree
struct Ponto { float x; float y; };
struct ObjetoEspacial {
    Ponto pos;
    void* dados; // Ponteiro genérico para um Jogador ou Item
    int tipo;    // 0 = Jogador, 1 = Item
};
struct QuadtreeNode {
    // ... limites (x, y, largura, altura)
    ObjetoEspacial* objetos[5]; // Objetos neste nó
    struct QuadtreeNode* filhos[4]; // Noroeste, Nordeste, Sudoeste, Sudeste
};

struct Inventario; // Forward declaration
typedef struct {
    int id;
    char* nome;
    Ponto posicao;
    int saude;
    struct Inventario* mochila;
} Jogador;

typedef struct {
    int id_item;
    char* nome;
    float peso;
} Item;

typedef struct {
    Item* itens_na_mochila[10]; // Ex: max 10 slots
    float peso_atual;
    float peso_maximo;
} Inventario;
