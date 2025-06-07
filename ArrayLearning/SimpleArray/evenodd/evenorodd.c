#include <stdio.h>

void evenandodd(int arr[], int length){
	int even = 0; 
	int odd = 0;
	int i;
	for(i = length - 1; i>=0;i--){
	
		if(arr[i]%2 == 0 ){

			even += 1;

		}

		if(arr[i]%2 != 0){
		
			odd += 1;

		}

	}

	printf("The amount of even numbers are %i\nThe amount of odd numbers are %i",even,odd);

}


int main(){
	int i;
	int arr[5];
	printf("enter 5 numbers\n");
	for(i=0;i<5;i++){
	printf(">");
	scanf("%i",&arr[i]);
	} 
	
	printf("you have entered ");
	for(i=0;i<5;i++){
	
		printf("%i ",arr[i]);
	
	}

	evenandodd(arr,5);
	return 0;

}
