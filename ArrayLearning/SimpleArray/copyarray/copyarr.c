#include <stdio.h>

void copyArray(int src[],int dest[],int size){
	int i;
	for(i=0;i<size;i++){
		dest[i] = src[i];
	}
	
	//printing original and copied arrays
	printf("original array: ");
	for(i=0;i<size;i++){
	
		printf("%i ",src[i]);
	
	}

	printf("\nCopied array: ");
	for(i=0;i<size;i++){
		printf("%i ",dest[i]);

	}

}




int main(){

	int i;
	int arr[5];
	int arr2[5];
	
	printf("enter 5 numbers\n");

	for(i=0;i<5;i++){
	
		printf(">");
		scanf("%i",&arr[i]);

	}

	printf("now its time to copy\n");
	copyArray(arr,arr2,5);


	return 0;
}
