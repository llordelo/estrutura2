// 11­ Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C=(5*(F32)/9).

#include <stdio.h>

main(){
	int f;
	scanf("%d",&f);
	printf ("%.2f\n",5*(f-32)/9);
	return 0;
}
