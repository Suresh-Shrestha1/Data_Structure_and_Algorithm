//WAP to calculate factorial of a number.

#include<stdio.h>
int fact(int n){
	if(n == 0 || n==1)
	{
		return 1;
	}
	return n * fact(n-1);
}

int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	if(num<0){
		printf("Factorial can't calulate for negative number.");
	}
	else{
		printf("The factorial of %d is %d", num, fact(num));
	}
	return 0;
}
