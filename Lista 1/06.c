// 6­ Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <stdio.h>

main(){
	int x[4], i, soma=0;
	for (i=0;i<4;i++){
		scanf ("%d",&x[i]);
		soma=soma+x[i];
	}
	printf ("%d\n",soma/4);
	return 0;
}
