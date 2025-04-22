#include <stdio.h>


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverBispo(int casas) {
    if (casas < 5) {
        printf("direita, cima\n", casas);  
        moverBispo(casas + 1);
    }
}
 
int main() {
   moverBispo(5);



   void moverTorre(int casa) {
    if (casas < 5) {
        printf("direita\n", casa);  
        moverTorre(casa + 1);
    }
}
 
int main() {
   moverTorre(5);



   void moverTorre(int casao) {
    if (casas < 8) {
        printf("esquerda\n", casao);  
        moverTorre(casao + 1);
    }
}
 
int main() {
   moverTorre(8);



   for (int i = 0; i <=2; i++) {
    for (int j = 0; j <= 1; j++) {
        printf("movimento do cavalo: %d\n", i * j);
    }
    printf("\n");
}

    return 0;




}
