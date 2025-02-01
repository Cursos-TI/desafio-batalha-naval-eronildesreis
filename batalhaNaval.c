#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0}; // Inicializando o tabuleiro com 0 (todas as posições vazias)

    // Posicionando o navio vertical
    tabuleiro[1][1] = 3;
    tabuleiro[2][1] = 3;
    tabuleiro[3][1] = 3;

    // Posicionando o navio horizontal
    tabuleiro[4][3] = 3;
    tabuleiro[4][4] = 3;

    // Exibindo o tabuleiro
    printf("Tabuleiro 5x5 com Navios Posicionados (0 = vazio, 3 = navio):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Aqui, criamos um tabuleiro 5x5 e posicionamos dois navios. O valor 3 representa a presença de um navio nas coordenadas indicadas.

// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
// Agora, vamos expandir o tabuleiro para 10x10 e posicionar quatro navios, dois dos quais estarão posicionados na diagonal.


#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializando o tabuleiro 10x10 com 0

    // Posicionando dois navios na diagonal
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;

    tabuleiro[6][6] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][8] = 3;

    // Posicionando dois navios horizontais
    tabuleiro[0][3] = 3;
    tabuleiro[0][4] = 3;

    tabuleiro[9][5] = 3;
    tabuleiro[9][6] = 3;

    // Exibindo o tabuleiro
    printf("Tabuleiro 10x10 com Navios Posicionados:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//Aqui, além dos navios diagonais, adicionamos dois navios na posição horizontal.

//Nível Mestre - Habilidades Especiais com Matrizes
//Para este nível, vamos implementar habilidades especiais com formatos como cone, cruz e octaedro. Essas habilidades vão afetar áreas do tabuleiro, e usaremos estruturas de repetição para preencher essas áreas.

//Habilidade Cone
//A habilidade "cone" afeta uma área em formato de cone, com a base maior e o vértice menor.

void habilidade_cone(int tabuleiro[10][10], int x, int y) {
    // Habilidade cone centralizada em (x, y)
    tabuleiro[x][y] = 1;
    tabuleiro[x+1][y] = 1;
    tabuleiro[x-1][y] = 1;
    tabuleiro[x][y+1] = 1;
    tabuleiro[x][y-1] = 1;
    tabuleiro[x+1][y+1] = 1;
    tabuleiro[x-1][y-1] = 1;
    tabuleiro[x+1][y-1] = 1;
    tabuleiro[x-1][y+1] = 1;
}

Habilidade Cruz
A habilidade "cruz" afeta uma área em forma de cruz.

c
Copiar
void habilidade_cruz(int tabuleiro[10][10], int x, int y) {
    // Habilidade cruz centralizada em (x, y)
    for (int i = 0; i < 10; i++) {
        tabuleiro[x][i] = 1;  // Linha
        tabuleiro[i][y] = 1;  // Coluna
    }
}
Habilidade Octaedro
A habilidade "octaedro" afeta uma área em formato octaedro.

c
Copiar
void habilidade_octaedro(int tabuleiro[10][10], int x, int y) {
    // Habilidade octaedro centralizada em (x, y)
    tabuleiro[x][y] = 1;
    tabuleiro[x+1][y] = 1;
    tabuleiro[x-1][y] = 1;
    tabuleiro[x][y+1] = 1;
    tabuleiro[x][y-1] = 1;
}
Exibição do Tabuleiro após Habilidades
A seguir, mostramos o tabuleiro após aplicar as habilidades:

c
Copiar
// Exibindo o tabuleiro com habilidades aplicadas
void exibir_tabuleiro(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
Código Completo
Aqui está o código completo combinando tudo:

c
Copiar
#include <stdio.h>

void habilidade_cone(int tabuleiro[10][10], int x, int y) {
    tabuleiro[x][y] = 1;
    tabuleiro[x+1][y] = 1;
    tabuleiro[x-1][y] = 1;
    tabuleiro[x][y+1] = 1;
    tabuleiro[x][y-1] = 1;
    tabuleiro[x+1][y+1] = 1;
    tabuleiro[x-1][y-1] = 1;
    tabuleiro[x+1][y-1] = 1;
    tabuleiro[x-1][y+1] = 1;
}

void habilidade_cruz(int tabuleiro[10][10], int x, int y) {
    for (int i = 0; i < 10; i++) {
        tabuleiro[x][i] = 1;
        tabuleiro[i][y] = 1;
    }
}

void habilidade_octaedro(int tabuleiro[10][10], int x, int y) {
    tabuleiro[x][y] = 1;
    tabuleiro[x+1][y] = 1;
    tabuleiro[x-1][y] = 1;
    tabuleiro[x][y+1] = 1;
    tabuleiro[x][y-1] = 1;
}

void exibir_tabuleiro(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[10][10] = {0}; // Inicializando o tabuleiro 10x10 com 0

    // Posicionando navios
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;

    tabuleiro[6][6] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][8] = 3;

    tabuleiro[0][3] = 3;
    tabuleiro[0][4] = 3;

    tabuleiro[9][5] = 3;
    tabuleiro[9][6] = 3;

    // Aplicando habilidades especiais
    habilidade_cone(tabuleiro, 5, 5);
    habilidade_cruz(tabuleiro, 3, 3);
    habilidade_octaedro(tabuleiro, 7, 7);

    // Exibindo o tabuleiro final
    exibir_tabuleiro(tabuleiro);

    return 0;
}
    return 0;
}
