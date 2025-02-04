#include <stdio.h>
#include <string.h>
 
 int main() {
     printf( " desafio cartas super trunfo ")

 }


#define NUM_ESTADOS 8
#define NUM_CIDADES 4

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigo[4]; // Código da cidade (ex: A01)
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

// Função para exibir os dados das cidades
void exibirCidades(Cidade cidades[NUM_ESTADOS][NUM_CIDADES]) {
    printf("\n========== DADOS DAS CIDADES =========\n");
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("\nCódigo: %s\n", cidades[i][j].codigo);
            printf("Nome: %s\n", cidades[i][j].nome);
            printf("População: %d\n", cidades[i][j].populacao);
            printf("Área: %.2f km²\n", cidades[i][j].area);
            printf("PIB: %.2f bilhões\n", cidades[i][j].pib);
            printf("Pontos Turísticos: %d\n", cidades[i][j].pontos_turisticos);
        }
    }
}

int main() {
    // Definindo o nome dos países e os estados
    const char* pais = "Países Unidos";
    const char estados[NUM_ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    // Criando a matriz de cidades
    Cidade cidades[NUM_ESTADOS][NUM_CIDADES];

    printf("Bem-vindo ao Super Trunfo - Tema: %s!\n", pais);

    // Cadastro das cidades
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("\nDigite os dados para a cidade %c%d:\n", estados[i], j + 1);

            // Gerando o código da cidade
            snprintf(cidades[i][j].codigo, sizeof(cidades[i][j].codigo), "%c%02d", estados[i], j + 1);

            printf("Nome: ");
            scanf(" %[^""]"),( "s" cidades[i][j].nome);

            printf("População (em milhares): ");
            scanf("%d", &cidades[i][j].populacao);

            printf("Área (em km²): ");
            scanf("%f", &cidades[i][j].area);

            printf("PIB (em bilhões): ");
            scanf("%f", &cidades[i][j].pib);

            printf("Número de Pontos Turísticos: ");
            scanf("%d", &cidades[i][j].pontos_turisticos);
        }
    }

    // Exibindo os dados das cidades
    exibirCidades(cidades);

    return 0;
}
