#include <stdio.h>

main(){
	int x=25, *px;
	px = &x;
	*px = *px / 5;
	printf ("%d\n",x);

}
