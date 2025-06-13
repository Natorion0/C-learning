#include <stdio.h>

void SelectionSortPtr(int *arr, int length){
	
	int *p,*minvalue;
	
	for(p = arr;p<arr + length-1;p++){
		minvalue = p; 
		for(int *ptr1 = p + 1; ptr1 < arr + length ;ptr1++){
		
			if(*ptr1<*minvalue){
			
				minvalue = ptr1;
			
			}
		
		}
	
		int temp = *p; 
		*p = *minvalue; 
		*minvalue = temp;	


	}
	printf("printing your new array\n"); 

	for(int *iptr = arr; iptr < arr + length;iptr++){
	
	
		printf("%d\n",*iptr);
	
	
	}

}	


int main(){
	const int length = 5; 
	int arr[length]; 
	int *ptr = arr; 

	printf("please input 5 integers into the array\n");  
	
	
	for(;ptr<&arr[length];ptr++){
	
		printf(">");
		scanf("%d",ptr); 
		
	}
	
	printf("The items you have inputted into the array\n"); 

	for(int i = 0; i<length;i++){
	
		printf("%d ",arr[i]);
	
	}
	printf("now we will sort your array\n");
	ptr = arr; 

	SelectionSortPtr(ptr,length);

	return 0; 

}
