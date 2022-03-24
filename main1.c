#include <stdio.h>

#include "calc_add.h"


int main(int argc, char *argv[]){
	
	double a, b, m;
	a = 50.1;
	b = 70.3;
	m = add (a,b);
	
	printf("The addition of %3.3f and %3.2f is %3.2f\n", a, b, m);

return 0;

}
