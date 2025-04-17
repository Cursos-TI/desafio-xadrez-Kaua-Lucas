#include <stdio.h>

//Acabei exagerando na gambiarra sksksk

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
int i = 1 , J = 1, movimentoDoBispo = 5, movimentoDoTorre = 5, movimentoDoRainha = 8, movimentoDoCavalo = 3;


void bispo () {
    
    while(movimentoDoBispo != 0)
    {
        
        
        printf("bispo: cima\n");
        
        
        
        do{

            printf("bispo: direita\n");
            
        }while (0);
       
        bispo(movimentoDoBispo--);
    }
    printf("\n");

}

void torre (){

    while(movimentoDoTorre != 0){
       
        printf("Torre: Direita\n");
        torre(movimentoDoTorre);
    }
    printf("\n");
}

void rainha () {

    
    while (movimentoDoRainha != 0)
    {

        printf("Rainha: Esquerda\n");
        rainha(movimentoDoRainha--);
    }

    printf("\n");
}



int main() {

    
    

    


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    bispo();
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    torre();

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    i=1;
    rainha();


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n\n");
    J = 1;
    for(i = 1 ; i <= movimentoDoCavalo; i++){

        while(J <= 3){
            printf("cavalo: cima\n");
            if(J == 2){
                break;
            }
            J++;
        }
        printf("cavalo: direita\n");
        break;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
