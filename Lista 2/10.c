#include <stdio.h>


void data (int d1, int m1, int a1, int d2, int m2, int a2){
	if (a1 > a2){
			printf ("%d/%d/%d é maior",d1,m1,a1);
		}
		else if (a1 > a2){
			printf ("%d/%d/%d é maior",d2,m2,a2);
		}
		else{
			if (m1>m2){
				printf ("%d/%d/%d é maior",d1,m1,a1);
			}
			else if (m1<m2){
				printf ("%d/%d/%d é maior",d2,m2,a2);
			}
			else{
				if (d1>d2){
					printf ("%d/%d/%d é maior",d1,m1,a1);
				}
				else if (d1<d2){
					printf ("%d/%d/%d é maior",d2,m2,a2);
				}
				else{
					printf ("Corresponde ao mesmo dia");
				}
			}
		}
	}

main(){
	int d1, m1, a1;
	int d2, m2, a2;
	scanf ("%d %d %d", &d1,&m1,&a1);
	scanf ("%d %d %d", &d2,&m2,&a2);
	data (d1, m1, a1, d2, m2, a2);
	return 0;
}
