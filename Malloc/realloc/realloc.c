#include <stdio.h>
#include <stdlib.h>

int main(){
	int n; 
	int m; 
	int sum = 0;
	double avg = 0;
	printf("how many integers would you like to allocate?\n>"); 

	scanf("%d",&n); 

	int *arr = malloc(n * sizeof *arr); 

	if(arr == NULL){
	
		printf("allocation failed"); 
		return 1; 
	
	}
	else{
	
		printf("allocation succeded now enter your %i integers\n",n); 
	
	}
	
	for(int i = 0; i<n; i++){
		printf(">"); 
		scanf("%d",&arr[i]);
		sum += arr[i]; 
	}
	
	printf("how many more integers would you like to add?\n>"); 
	
	scanf("%d",&m); 

	int *newarr = realloc(arr,(n+m)*sizeof *arr); 

	if(newarr == NULL){
	
		printf("New memory allocation failed\n");
		return 1; 	
	
	}
	else{
		printf("New memory allocation succeded now enter your %i integers \n",m); 
		arr = newarr; 	
	
	}
	
	
	for(int i = n; i < n+m;i++){
		
		printf(">"); 
		scanf("%d",&arr[i]); 
		sum += arr[i]; 
	
	}
	
	avg =(double) (sum)/(n+m); 

	printf("your sum is %d and your average is %.2lf",sum,avg);
	
	return 0; 

}
