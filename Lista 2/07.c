#include <stdio.h>

void troca1 (float n[3]);
void troca2 (float n[3]);
void troca3 (float n[3]);

main(){
	
	int L, i;
	float n[3];
	
	scanf ("%d",&L);
	
	for (i=0;i<4;i++){
	
		scanf ("%d",&n[i]);
			
	}
	
	if (L==1){
		troca1 (n);
		for (i=0;i<4;i++){
			printf ("%d\n",n[i]);
		}
	}
	
	else if (L==2){
		troca2 (n);
		for (i=0;i<4;i++){
			printf ("%d\n",n[i]);
		}
	}			

	else{
		troca3 (n);
		for (i=0;i<4;i++){
			printf ("%d\n",n[i]);
		}
	}



}


void troca1 (float n[3]){
	int i, j, aux;
	for (i=0;i<3;i++){
		for (j=i+1;j<4;j++){
			if (n[i] > n[j]){
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
			
		}
	}

}

void troca2 (float n[3]){
	int i, j, aux;
	for (i=0;i<3;i++){
		for (j=i+1;j<4;j++){
			if (n[i]<n[j]){
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
			
		}
	}

}

void troca3 (float n[3]){
	int a, b, c;
	
	a = n[0];
	b = n[1];
	c = n[2];
	
	if (a>b && a>c){
		a = n[1];
		b = n[0];
		c = n[2];
	}
    else if (b>a && b>c){
      	a = n[0];
		b = n[1];
		c = n[2];
    }
    else{
       	a = n[0];
		b = n[2];
		c = n[1];
    }
    
    n[0] = a;
    n[1] = b;
    n[2] = c;
       
}
