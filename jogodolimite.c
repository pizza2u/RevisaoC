/*

Alice e Bob decidiram jogar um jogo simples para passar o tempo. Este jogo é jogado com um baralho contendo N cartas, numeradas de 1 a N. Uma carta está inicialmente na mesa. Além disso, há uma pilha contendo todas as outras cartas do baralho.

Alice começa retirando uma carta do topo da pilha. Ela então verifica se a diferença absoluta entre a carta que está atualmente na mesa e a carta retirada da pilha é no máximo um limite L. Em outras palavras, se a carta atualmente na mesa for T e a carta retirada da pilha for S, então ela verifica se |T-S| ≤ L. Se isto for verdade, ela substitui a carta na mesa pela carta removida, e marca |T-S| pontos. Se isto não for verdade, ela não faz nada -- a carta na mesa não é alterada, e ela não marca nenhum ponto.

Bob então joga fazendo a mesma coisa. Ele remove uma carta da pilha, a compara com a carta atualmente na mesa e age de acordo. Alice então joga novamente, seguida de Bob, seguido novamente de Alice, e assim por diante. Eles continuam jogando até que a pilha de cartas esteja vazia. Sua tarefa é determinar a pontuação final de ambos os jogadores.

Entrada
A primeira linha contém três inteiros N, T0 e L (1 ≤ N < 60, N é impar, 1 ≤ T0 ≤ N, 1 ≤ L ≤ 10), o número de cartas, a carta inicialmente na mesa, e o limite L. As próximas N-1 linhas contém um inteiro Si cada (1 ≤ Si ≤ N). Estes inteiros descrevem as cartas na pilha, em ordem. A primeira carta dada na entrada é a carta no topo da pilha. Todas as cartas usadas no jogo são distintas.

Saída
Imprima uma linha com dois inteiros A e B separados por um espaço, onde A é a pontuação final de Alice, e B é a pontuação final de Bob.

Exemplos de Entrada	
5 3 1
4
2
1
5

1 1

Exemplos de Saída
5 1 2
2
3
4
5

2 2*/
#include <stdio.h>

int main() {
    int N, T0, L;
    scanf("%d %d %d", &N, &T0, &L);

    int pilha[N-1];
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &pilha[i]);
    }

    int carta_atual = T0;
    int alice_pontos = 0, bob_pontos = 0;
    int vez_alice = 1; // Indica se é a vez da Alice (1) ou do Bob (0)

    for (int i = 0; i < N - 1; i++) {
        int carta_retirada = pilha[i];
        int diferenca = carta_retirada - carta_atual;
        if (diferenca < 0)
            diferenca = -diferenca;

        if (diferenca <= L) {
            if (vez_alice) {
                alice_pontos += diferenca;
            } else {
                bob_pontos += diferenca;
            }
            carta_atual = carta_retirada;
        }
        vez_alice = !vez_alice;
    }

    printf("%d %d\n", alice_pontos, bob_pontos);

    return 0;
}
