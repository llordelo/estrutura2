// 15� Fa�a um programa que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre o valor do aumento e o novo sal�rio.

#include <stdio.h>

main(){
	float s, aum;
	scanf("%f %f",&s, &aum);
	printf ("O aumento foi %.2f e o novo salario eh %.2f\n",aum, s + ((s*aum)/100));
	return 0;
}