#include <stdio.h>

void swap(int *a, int *b ){
	int temp;
	temp = *a; 
	*a = *b;
	*b = temp;


}


int main(){
	int x;
	int y;

	printf("Input two numbers\n>");
	scanf("%i",&x);
	printf(">");
	scanf("%i",&y);

	printf("\nbefore swap: x = %i y = %i ",x,y); 

	swap(&x,&y);
	
	printf("\nafter swap: x = %i y = %i ",x,y);


	return 0; 


}
