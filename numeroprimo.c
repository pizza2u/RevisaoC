/*
Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.

Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.

Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida.

Exemplo de Entrada	
3
8
51
7

Exemplo de Saída
8 nao eh primo
51 nao eh primo
7 eh primo
*/

#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        int x; 
        scanf("%d", &x);

        int primo = 1; 

        if (x <= 1) {
            primo = 0; 
        } else {

            for (int j = 2; j * j <= x; j++) {
                if (x % j == 0) { 
                    primo = 0;
                    break; 
                }
            }
        }

        if (primo) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
    }

    return 0;
}
