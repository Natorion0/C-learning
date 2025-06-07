#include <stdio.h>

int contains(int arr[],int size,int target){
	int i;
	int found = -1;
	for(i=0;i<size;i++){

		if(arr[i] == target){
		
			return i;
			found = 1;

		}
	
	}

	return found;
}



int main(){
	int i;
	int arr[5];
	int UserInput;
	printf("Enter 5 Numbers please:\n");
	
	for(i=0;i<5;i++){

		printf(">");
		scanf("%i",&arr[i]);
		
	}
	

	printf("enter a number to search for:\n>");
	scanf("%i",&UserInput);
	
	if(contains(arr,5,UserInput) == -1){
	
		printf("%i Does not exist in the array",UserInput);
	
	}
	else{
	
		printf("%i exists in the array, at index %i",UserInput,contains(arr,5,UserInput));

	}

	return 0;
}
