#include <stdio.h>


void m (int n[]){
	int aux, i, j;
	for (i=0;i<2;i++){
		for (j=i+1;j<3;j++){
			if ( n[i] > n[j] ){
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
			
		}
	}
}

main(){
	
	int n[5], i;
	
	for (i=0;i<3;i++)
		scanf ("%d",&n[i]);
	m (n);
	for (i=0;i<3;i++){
		printf ("%d\n",n[i]);
	}
		
	
		
	return 0;
}
