#include <stdio.h>
// in this program we will store and print 5 numbers
// with a simple loop and user input. 
int main(){
	int i; 
	int x;
	int y;
	int myNumbers[5];
	
	for(i=0; i<5;i++){
		printf("Input value %ith, for the array\n",i);
		scanf("%i",&x);
		myNumbers[i] = x;
	}
	
	printf("your values in the array\n");

	for(i=0; i<5; i++){
		y = myNumbers[i];
		printf("%i\n",y);
	}
	return 0;
}
