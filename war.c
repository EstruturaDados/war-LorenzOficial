#include <stdio.h>
#include <string.h>

// Define numero de territorios
#define NUM_TERRITORIOS 5

// Definição da Struct Territorio
// Struct para representar uma entidade complexa, como um Território,
// que tem nome, cor e quantidade de tropas.
typedef struct {
    char nome[30];  // Nome do território
    char cor[10];   // Cor do exército
    int tropas;     // Tropas
} Territorio;

int main() {
    // Declaração do Vetor de Structs
    // Array chamado 'territorios' capaz de armazenar 5 structs do tipo Territorio
    // Isso permite gerenciar múltiplos territórios de forma organizada.
    Territorio territorios[NUM_TERRITORIOS];
    int i; // Controle do loop

    printf("Cadastro de Territorios\n");
    
    // Loop para o cadastro de territorios
    // Laço 'for' para preencher os dados de cada territorio.
    // O loop garante que as informações virão uma por uma, de forma sequencial.
    for (i = 0; i < NUM_TERRITORIOS; i++) {
        printf("\nCadastrando o Territorio %d de %d:\n", i + 1, NUM_TERRITORIOS);
        
        // Nome do território
        printf("Nome do Territorio: ");
        // A função scanf com "%s" é usada para ler strings sem espaço.
        // "%29s" para garantir que não passe do tamanho do buffer.
        scanf("%29s", territorios[i].nome);

        // Cor do exército
        printf("Cor do exercito: ");
        scanf("%9s", territorios[i].cor);

        // Quantidade de tropas
        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }
    
    // Pula uma linha
    printf("\nDados dos Territorios Cadastrados\n");

    // Loop para Mostrar os dados
    // Laço 'for' para percorrer o vetor 'territorios'
    // e imprimir as informações de cada um deles.
    printf("%-20s %-10s %s\n", "Territorio", "Cor", "Tropas");
    printf("---------------------------------------------\n");
    for (i = 0; i < NUM_TERRITORIOS; i++) {
        // "%-20s" formata a string para ter 20 caracteres e alinha à esquerda.
        printf("%-20s %-10s %d\n", territorios[i].nome, territorios[i].cor, territorios[i].tropas);
    }

    return 0;
}
