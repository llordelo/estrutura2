#include <stdio.h>

main(){
	
	printf ("1. Somar dois números\n"

	"2. Subtrair dois números\n"

	"3. Multiplicar dois números\n"

	"4. Dividir dois números \n"

	"5. Raiz quadrada de um número\n\n");
	
	int op,n1,n2;
	
	printf ("Digite a opcao desejada:\n");
	scanf ("%d", &op);
	
	
	if (op==1){
		printf ("Digite os dois numeros:\n");
		scanf ("%d", &n1,&n2);
		printf ("%d",n1+n2);
	}
	if (op==2){
		printf ("Digite os dois numeros:\n");
		scanf ("%d", &n1,&n2);
		printf ("%d",n1-n2);
	}
	if (op==3){
		printf ("Digite os dois numeros:\n");
		scanf ("%d", &n1,&n2);
		printf ("%d",n1/n2);
	}
	if (op == 5){
		printf ("Digite um numero:\n");
		scanf ("%d", &n1);
		printf ("%.2f",sqrt(n1));
	}
}

