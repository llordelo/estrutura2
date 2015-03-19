// 12 ­ Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>

main(){
	int n1, n2, n3;
	scanf("%d %d %d",&n1,&n2,&n3);
	printf ("%.2f\n",(n1+n2+n3)/3);
	return 0;
}
