// 5� Fa�a um Programa que pe�a dois n�meros e imprima a soma.

#include <stdio.h>

float soma (float x, float y){
	return x+y;
}

main(){
	float x1, x2;

	scanf ("%f %f",&x1, &x2);
	printf ("%f\n",soma(x1, x2));
	return 0;
}
