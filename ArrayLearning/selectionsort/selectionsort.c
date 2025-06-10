#include <stdio.h>

void selectionsort(int arr[], int length){

	for(int i = 0; i < length - 1; i++){
		int minindex = i;
		for(int j = i+1; j < length; j++){
		
			if(arr[j]<arr[minindex]){
			
				minindex = j; 			
		
			}		
		
		}
		int temp = arr[i];
		arr[i] = arr[minindex];
		arr[minindex] = temp; 	
	} 

	printf("Now priting the sorted array\n");

	for(int i = 0; i < length;i++){
	
		printf("%d\n",arr[i]);
	
	}
	
}



int main(){
	int length = 5;
	int arr [length];

	printf("hello please input 5 numbers\n");

		
	for(int i =0 ;i<length;i++){

		printf(">");
		scanf("%d",&arr[i]);
	
	}
	selectionsort(arr,length);

	return 0;

}
