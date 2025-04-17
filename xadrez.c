#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i = 1, movimentoDoBispo = 5, movimentoDoTorre = 5, movimentoDoRainha = 8, movimentoDoCavalo = 1;

    


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    do
    {

        printf("Bispo: Cima, Direita\n");
        i++;
        
    } while (i  <= movimentoDoBispo);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    for ( i = 1 ; i <= movimentoDoTorre ; i++)
    {
       
        printf("Torre: Direita\n");

    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    i = 1 ;
    while ( i <= movimentoDoRainha)
    {

        printf("Rainha: Esquerda\n");
        i++;
    }


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n\n");
    
    while(movimentoDoCavalo--) 
    {
        
        for(i = 1 ; i <= 2 ; i++)
        {

            printf("cavalo: baixo\n");
            
        }

        printf("cavalo: esquerda\n");

    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
