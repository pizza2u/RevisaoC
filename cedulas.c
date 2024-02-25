/* Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/
#include <stdio.h>

int main() {

int valor,troco, cem , cinquenta , vinte , dez , cinco , dois , um;

scanf("%d",&valor);

troco=valor;

cem=troco/100;

troco=troco-(cem *100);

cinquenta=troco/50;

troco=troco-(cinquenta * 50);

vinte=troco/20;

troco=troco-(vinte * 20);

dez=troco/10;

troco=troco-(dez * 10);

cinco=troco/5;

troco=troco-(cinco * 5);

dois=troco/2;

troco=troco-(dois * 2);

printf("%d\n",valor);

printf("%d nota(s) de R$ 100,00\n",cem);

printf("%d nota(s) de R$ 50,00\n",cinquenta);

printf("%d nota(s) de R$ 20,00\n",vinte);

printf("%d nota(s) de R$ 10,00\n",dez);

printf("%d nota(s) de R$ 5,00\n",cinco);

printf("%d nota(s) de R$ 2,00\n",dois);

printf("%d nota(s) de R$ 1,00\n",troco);




return 0;

}