#include <stdio.h>


int main(){
	int elements = 5; 
	printf("Enter %i amount of numbers\n",elements);
	int arr[elements]; 
	int *p = arr; 
	for(int i =0;i<elements;i++){
		scanf("%d",&arr[i]); 
	} 	
	
	printf("reversing your array\n"); 

	for(;p<&arr[5];p += 2){
		printf("%d ", *p); 
	}


}
