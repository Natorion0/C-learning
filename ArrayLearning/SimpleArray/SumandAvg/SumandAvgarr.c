#include <stdio.h>
//This program will prompt a user to input 5 values into an 
//array and then will use two functions to calculate the 
//sum and average and print out those values

double sum1(double arr[]){
	int i;
	double sum = 0;
	for(i=0;i<5;i++){
		sum += arr[i];
	}

	return sum;
}



double avg1(double sum){
	int i; 
	double avg; 
	avg = sum/5;
	return avg;

}
int main(){
	int i;
	double sum; 
	double avg;
	double myNumbers[5];

	for(i=0;i<5;i++){
		printf("input your %ith number in the array\n",i + 1);
		scanf("%lf",&myNumbers[i]);
	}	
	
	printf("The numbers you inputted in the array are\n");
	
	for(i=0; i<5; i++){
		printf("%.2f\n",myNumbers[i]);
	}
	
	//computing sum with the sum function for the int sum
	sum = sum1(myNumbers);
      	// computing the avg is done in the avg method	
	avg = avg1(sum);


	printf("your sum is: %.2f, and your average is: %.2f",sum,avg);
	return 0;

}
