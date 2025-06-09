#include <stdio.h>

void rebind(int **pp, int *newTarget){

	*pp = newTarget; 

}



int main(){
	int a, b; 
	int *p = &a;
	printf("Enter two values");
	printf("\n>"); 
	scanf("%d",&a); 
	printf("\n>"); 
	scanf("%d",&b); 
	printf("The values you entered for a is %i and b %i\n",a,b);
	printf("we will switch the value from a to b\n"); 
	rebind(&p,&b);
	printf("After: your original pointer should be b which is %d\n", *p);
	



	return 0; 

}
