#include <stdio.h>
//This code will as the user to input 5 values to an array
//then after that will find the maximun and min value

int findmax(int arr[], int size){
	int i; 
	int max = arr [0];
	for(i=0;i<5;i++){

		if(arr[i]>max){
			max = arr[i];
		}
	}

	return max;
}


int findmin(int arr[], int size){
	int i;
	int min = arr[0];
	for(i=0;i<5;i++){
	
		if(arr[i]<min){
			min = arr[i]; 
		}
	
	}

	return min;
}



int main(){
	int i; 
	int arr[5];
	int max;
	int min;
	printf("we got some cool array stuff going on get ready to input some values\n");
	
	for(i=0;i<5;i++){
		printf("input the %ith number in the array\n",i+1);
		scanf("%i",&arr[i]);
	}

	printf("The numbers you have inputted into the array are....\n");

	for(i=0;i<5;i++){
		printf("%i\n",arr[i]);
	}

	max = findmax(arr,5);
	min = findmin(arr,5);
	printf("your minimum value in your array is %i, and you maximum value is %i.",min,max);

	return 0;
}
