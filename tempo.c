/* Conversão de Tempo
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.

Exemplo de Entrada	Exemplo de Saída
556                        0:9:16

1                           0:0:1

140153                      38:55:53
*/
#include <stdio.h>

int main() {
    int a, h, m, s;
    
    scanf("%i", &a);
    
    h = a / 3600;
    a -= h * 3600;
    m = a / 60;
    a -= m * 60;
    
    printf("%i:%i:%i\n", h, m, a);
    
    return 0;
}