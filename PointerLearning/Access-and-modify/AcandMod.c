#include <stdio.h>

int main(){

	int x = 10;
	int *p1 = &x; // pointer that points to x
	
	printf("Address of x: %p\n",(void *)p1);
	printf("Value of x using pointer: %i",*p1);
	

	*p1 += 15;

	printf("\nValue of x after modifying through pointer : %i",*p1);

	return 0;


}
