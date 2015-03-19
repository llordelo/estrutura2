// 4­ Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

#include <stdio.h>

main(){
	int x[4], i, soma=0;
	for (i=0;i<4;i++){
		scanf ("%d",&x[i]);
		soma=soma+x[i];
	}
	printf ("%d\n",soma);
	return 0;
}
