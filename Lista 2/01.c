#include <stdio.h>

main(){
	
	float n1, n2, n3, media;
	
	scanf ("%d %d %d",&n1,&n2,&n3);
	media = ((n1*2)+(n2*3)+(n3*5))/(2+3+5);
	
	printf ("A media ponderada eh %d e o conceito eh ",media);
	
	if ((media >= 8) && (media <= 10))
		printf ("A");
	else if ((media >= 7) && (media <= 8))
		printf ("B");
	else if ((media >= 6) && (media <= 7))
		printf ("C");
	else if ((media >= 5) && (media <= 6))
		printf ("D");
	else
		printf ("E");
		
	return 0;
}
