/*
Existe uma máquina, que produz uma sequência crescente de números. Isto é, cada número da sequência deve ser maior que o anterior.

Entretanto, a máquina começou a dar problemas. Quando ela liga, tudo está ok. Mas em determinado momento, ela produz um valor errado.

Sua tarefa é, quando a máquina produzir o primeiro errado ou desligar, ignorar todos os seguintes e produzir próximo menor número válido.

Como estamos apenas analisando a máquina, não podemos desligá-la, e precisamos esperar ela desligar sozinha. Ou seja, devem continuar sendo lidos todos os números até a máquina desligar.

Entrada
A entrada consiste de 0 < N < 104 linhas, e termina em EOF.

Cada linha consiste de um único inteiro 0 < X < 230.

Saída
Um único linha, contendo um intero Y, solução do problema.

Exemplo de Entrada	
1
2
41
5
2
1


Exemplo de Saída
42
*/

#include <stdio.h>
 
int main() {
 
    int prev = 0;
    int current;

    while (scanf("%d", &current) != EOF) {
        if (current <= prev) {
            printf("%d\n", prev + 1);
            while (getchar() != EOF) {} 
            return 0;
        }
        prev = current;
    }

    printf("%d\n", prev + 1);
    return 0;
}