#include <stdio.h>

int main(){
	int x = 20;

	printf("input a number \n");
	scanf("%i",&x);
	if(x>20){
	printf("you have inputted a number greater than 20 \n");
	}
	else{
	printf("you have inputted a number less than 20");
	}

	return 0;
}
