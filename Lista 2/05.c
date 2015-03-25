#include <stdio.h>

void fun (int n[]){
	int i, j, aux;
	
		for (i=0;i<3;i++){
		for (j=i+1;j<4;j++){
			if (n[i]>n[j]){
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
			
		}
	}
	
}

main(){
	
	int n[4], i, j;
	
	printf ("Digite 4 numeros sendo os 3 primeiros em ordem cescente:\n");
	
	for (i=0;i<4;i++){
	
		scanf ("%d",&n[i]);
			
	}
	
	fun (n[4]);
	
	for (i=0;i<4;i++){
		printf ("%d\n",n[i]);
	}
		
	
		
	return 0;
}
