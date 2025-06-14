#include <stdio.h>
#include <stdlib.h> 


int main(){
	int n; 
	int sum = 0; 
	double avg; 

	printf("input how many integers you want to store\n>"); 
	scanf("%d",&n); 
	
	int *arr = malloc(sizeof(int)*n); 
	if(arr == NULL){
	
		printf("Allocation has failed\n"); 
		return 1; 
	}
	

	printf("Allocation has succeded now input %i integers into the array\n",n);
	int *begin = arr; 
	int *end = arr + n;  

	for(;begin < end;begin++){
		
		printf(">"); 
		scanf("%d",begin); 
		sum += *begin; 
	
	}


	avg = (double)sum / n; 

	printf("Your sum is %d, and your average is %.2lf\n",sum,avg); 
	free(arr);


	return 0; 


}
