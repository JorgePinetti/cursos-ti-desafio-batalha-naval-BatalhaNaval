#include <stdio.h>
// Linha pronta
void printLinha(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("=");
    };
    printf("\n");
};

int main()
{
    // Tabuleiro
    int tabuleiro[10][10] = {
        // Primeira linha
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        // Segunda linha
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        // Terceira linha
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        // Quarta linha
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        // Quinta linha
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        // Sexta linha
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        // Sétima linha
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        // Oitava linha
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        // Nona linha
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        // Décima linha
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    // Informacoes sobre o tabuleiro
    printf("Tamanho da tabuleiro: \n");
    int linhas = sizeof(tabuleiro) / sizeof(tabuleiro[0]);
    int colunas = sizeof(tabuleiro[0]) / sizeof(tabuleiro[0][0]);
    printf("Linhas: %d\nColunas: %d\n", linhas, colunas);

    int tabuleiroControl = 0;
    printLinha(45);
    // Adicionar navios
    for (int i = 0, y = 1; i < 3; i++, y++)
    {
        tabuleiro[1][i] = 1;
        tabuleiro[y][5] = 1;
    };

    // Construindo tabuleiro
    printf("       A   B   C   D   E   F   G   H   I   J\n");
    printf("       v   v   v   v   v   v   v   v   v   v\n");
    printf("      _______________________________________\n");
    do
    {
        printf(" %d > |", tabuleiroControl);
        for (int i = 0, y = 0; i < colunas; i++, y++)
        {
            printf(" %d  ", tabuleiro[tabuleiroControl][y]);
        };
        printf("\n");

        tabuleiroControl++;
        // printf("controle da tabuleiro: %d\n", tabuleiroControl);
    } while (tabuleiroControl < linhas);
    printLinha(45);
    return 0;
}
