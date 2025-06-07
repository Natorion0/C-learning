#include <stdio.h>

int main(){
	int i; 
	int arr[5];
	int *pt1 = arr; // why not use & arr; 
	int sum = 0;
	printf("enter 5 numbers\n");
	for(i=0;i<5;i++){
		printf(">");
		scanf("%i",(pt1 + i));	
		sum += *(pt1 + i);
	}
	printf("values entered:\n");
	pt1 = arr;
	for(i=0;i<5;i++){
		printf("%i\n",*pt1);
		pt1++;
	}
	printf("\nsum = %i",sum);

	return 0;

}
