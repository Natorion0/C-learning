#include <stdio.h>

int main(){
	int i;	
	int size = 5; 
	int arr[5]; 
	int *left = arr;
	int *right = arr + size - 1;	
	printf("Enter 5 numbers\n"); 
	for(i=0;i<5;i++){
		printf(">");
		scanf("%i",&arr[i]);
	}
	// the code below swaps the array with pointers only 
	int temp; 
	for(;left<right;right--,left++){
		temp = *left; 
		*left = *right; 
		*right = temp; 
	}
	//printing out the new array
	printf("reversed array\n"); 

	for(i=0;i<5;i++){
		printf("%i\n",arr[i]);

	}
	return 0; 


}
