#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int x;

    //menu
    do {
        printf("\n***Xadrez***\n");
        printf("\nQual peça deseja mover?\n");
        printf("1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        scanf("%d",&x)!=1;
    }while (x <0 || x> 3);

    printf("________________\n");
    printf("Jogadas: \n");

    //movimento das peças
    switch (x){
         // Implementação de Movimentação do Bispo
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        case 1:
            for (int i = 5, y = 1; i>0 ; i-- && y++){
                printf("%dº Casa: ",y);
                printf("CIMA, ");
                printf("DIREITA\n");
            }
            break;

        // Implementação de Movimentação da Torre
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        case 2:
            for (int i = 5, y = 1; i>0 ; i-- && y++){
                printf("%dº Casa: ",y);
                printf("DIREITA\n");  
            }
            break;
    

        // Implementação de Movimentação da Rainha
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        case 3:
            for (int i = 8, y = 1; i>0 ; i-- && y++) {
                printf("%dº Casa: ",y);
                printf("ESQUERDA\n");
            }
            break;
        
        default:
            printf("Entrada inválida\n");
            break;
    }

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
