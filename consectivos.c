/*
Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores. O número de pontos do participante é o tamanho da maior sequência de valores consecutivos iguais. Por exemplo, suponhamos que um participante sorteia N = 11 e, nesta ordem, os valores

30, 30, 30, 30, 40, 40, 40, 40, 40, 30, 30

Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. Note que o participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos.

Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de pontos de um participante.

Entrada
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 104), o número de valores sorteados. A segunda linha contém N valores, V1, V2, . . . , VN , (−231 ≤ VI ≤ 231 − 1, para I = 1, 2, . . . , N) na ordem de sorteio, separados por um espaço em branco.

Saída
Seu programa deve imprimir apenas uma linha, contendo apenas um inteiro, indicando o número de pontos do participante.

Exemplos de Entrada	
11
30 30 30 40 40 40 40 40 30 30 30

Exemplos de Saída
5

Exemplos de Entrada	
14
1 1 1 20 20 20 20 3 3 3 3 3 3 3

Exemplos de Saída
7
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int values[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &values[i]);
    }

    int max_points = 0;
    int current_points = 1;

    for (int i = 1; i < N; ++i) {
        if (values[i] == values[i - 1]) {
            current_points++; 
        } else {
            if (current_points > max_points) {
                max_points = current_points; 
            }
            current_points = 1; 
        }
    }

    if (current_points > max_points) {
        max_points = current_points;
    }

    printf("%d\n", max_points);  
    return 0;
}
