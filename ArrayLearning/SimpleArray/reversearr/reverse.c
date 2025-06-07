#include <stdio.h>


void printreverse(int arr[], int size){
	int i;
	for(i=size - 1;i >= 0 ;i--){
		printf("%i\n",arr[i]);
	}
}

int main(){
	int i; 
	int arr[5];	

	printf("This time were reversing an array you input are you ready?\n");
	
	for(i=0;i<5;i++){
		printf("input the %ith number in the array\n",i + 1); 
		scanf("%i",&arr[i]);
	}
	
	printreverse(arr,5);
	

	return 0;
}
