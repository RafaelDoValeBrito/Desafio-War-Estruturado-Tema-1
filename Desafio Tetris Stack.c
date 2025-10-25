#define GRID_ALTURA 22
#define GRID_LARGURA 10

// O "Stack" é esta matriz.
// 0 = Vazio, 1-7 = Cores das peças
int grid_principal[GRID_ALTURA][GRID_LARGURA];

void inicializar_grid();
int verificar_linhas_completas();
void limpar_linha(int linha);

// Armazena as definições de forma [tipo][rotacao][y][x]
extern int definicoes_pecas[7][4][4][4];

typedef struct {
    int tipo_peca; // 0-6 (I, O, T, S, Z, J, L)
    int rotacao;   // 0-3
    int pos_x;
    int pos_y;
} PecaAtiva;

void girar_peca(PecaAtiva* peca);

// Fila pode ser implementada com um array circular
#define TAMANHO_FILA 7
int fila_de_pecas[TAMANHO_FILA];
int fila_inicio;
int fila_fim;

void inicializar_saco_de_pecas();
int pegar_proxima_peca(); // dequeue()
int ver_proxima_peca();   // peek()
