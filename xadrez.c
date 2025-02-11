#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.
void loop(int y, char x[]){
    if (y>0){
        loop(y-1,x);
        printf("%dº Casa: %s\n",y,x);
    }
}

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
        printf("4 - Cavalo\n");
        scanf("%d",&x);
    } while (x<1 || x>4);

    printf("________________\n");
    printf("Jogadas: \n");

    //movimento das peças
    switch (x){
        // Implementação de Movimentação do Bispo
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        case 1:
            loop(5," CIMA, DIREITA");
            break;

        // Implementação de Movimentação da Torre
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        case 2:
            loop(5," DIREITA ");
            break;
    

        // Implementação de Movimentação da Rainha
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        case 3:
            loop(8," ESQUERDA ");
            break;


        // Nível Aventureiro - Movimentação do Cavalo
        // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
        // Um loop pode representar a movimentação horizontal e outro vertical.

        // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
        // Inclua o uso de continue e break dentro dos loops.

        case 4:
            printf("1º Casa: ");

            for (int i=3, j=2;i>=j && j<=i ; i--, j++){
                while (j=i){
                    printf("BAIXO, BAIXO,");
                    break;
                }
                printf(" ESQUERDA");  
                break;
            }
            break;
        
        default:
            printf("Entrada inválida\n");
            break;
    }
    return 0;
}
