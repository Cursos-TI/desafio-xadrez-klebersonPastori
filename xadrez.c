#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças
int main() {
    
    int torre, bispo, rainha;

    printf("######-O jogo de xadrex vai começar!-######\n");
    printf("   \n");

    for (torre = 0; torre < 5; torre++)
    {
        printf("Torre moveu para direita; \n");
        
    }
    
    printf("______________________________ \n");

    for (bispo = 0; bispo < 5; bispo++)
    {
        printf("Bispo moveu para diagonal (Cima e direita); \n");
        
    }

    printf("______________________________ \n");

     for (rainha = 0; rainha < 8; rainha++)
    {
        printf("Rainha moveu para esquerda; \n");
       
    }
    printf("______________________________ \n");
    
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
