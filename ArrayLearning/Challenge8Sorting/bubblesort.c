#include <stdio.h>

void bubblesort(int arr[],int size){
	int i; 
	int j; 
	int temp; 
	for(i=0;i<size-1;i++){
		int swapped = 0; 
		for(j=0;j<size - i - 1;j++){
			if(arr[j]>arr[j+1]){
			
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp; 
				swapped = 1; 
			}
		
		}
		printf("pass %d\n",i+1); 
		//adding in each pass printing 
		for(int k = 0; k<size; k++){
			printf("%d\n",arr[k]); 
		}
		printf("\n");
		if (swapped==0){
			printf("No swaps on pass %d so were done.\n",i + 1);
			break; 
		}

	}
	// printing  values
	printf("\nyour sorted array\n");

	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}

}

int main(){
	int i; 
	printf("Please enter 5 numbers\n");
	int size = 5; 
	int arr[size];
	for(i=0;i<size;i++){
		printf(">");
		scanf("%d",&arr[i]);
	}
	printf("sorting your array\n\n"); 
	bubblesort(arr,size);
	return 0;



}
