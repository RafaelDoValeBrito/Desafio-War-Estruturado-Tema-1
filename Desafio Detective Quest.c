struct Local; // Forward declaration

typedef struct {
    char* nome;
    char* descricao;
    struct Local* vizinhos[10]; // Lista de adjacência
    struct Pista* pistas_no_local[5];
    struct NPC* npcs_no_local[5];
} Local;

// O Grafo seria um vetor de todos os Locais
Local* mapa_do_jogo[20];

struct NoDeDialogo; // Forward declaration

typedef struct {
    char* texto_opcao;
    struct NoDeDialogo* proximo_no;
    int id_evento_trigger;
} OpcaoJogador;

typedef struct NoDeDialogo {
    char* texto_npc;
    OpcaoJogador opcoes[5];
    int num_opcoes;
} NoDeDialogo;

typedef struct {
    int id_pista;
    char* nome;
    char* descricao;
} Pista;

// O caderno de pistas (pode ser uma lista ligada)
struct NoPista {
    Pista* pista;
    struct NoPista* proximo;
};

typedef struct NoPista* CadernoDoDetetive;

// Tabela Hash (conceitual) para o Quadro de Evidências
// Chave: "id1_id2", Valor: Pista* resultante
// (A implementação real usaria uma função hash)
