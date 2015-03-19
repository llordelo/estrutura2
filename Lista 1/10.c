// 10­ Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>

main(){
	int hq, hm;
	printf ("Quanto você ganha por hora?\n");
	scanf("%d",&hq);
	printf ("Quais foram as suas horas trabalhada neste mes?\n");
	scanf("%d",&hm);
	printf ("Voce vai receber %d\n",hm*hq);
	return 0;
}
