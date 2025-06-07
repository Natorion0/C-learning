#include <stdio.h>

int main(){

	printf("Hello user You will guess a super secret number are you ready?\n");
	printf("enter a number between 1 and 100\n"); 
	int input; 
	while(1){
		scanf("%i",&input);
		if(input<0){
			printf("you have inputed a value out of range. Remember the value is between 0-100 your input was, %i Try again.\n",input);
			continue;
		}
	
		if(input>100){
			printf("you have inputed a value out of range try again. Remember the value is between 0-100 your input was, %i Try again.\n ",input);
			continue;
		}
	
		if(input == 42){
			printf("you have inputed the correct value Horay the value was 42!\n");
		        break;		
		}
		printf("you have inputted %i this wasn't the correct number try again!\n",input);	

	}
	return 0;
}
