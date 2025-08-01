//WAP to check if a number is prime or not.

#include<stdio.h>
#include<math.h>
int isPrime(int num, int divisor){
	if(divisor > sqrt(num)){
		return 1;
	}
	if(num % divisor == 0){
		return 0;
	}
	return isPrime(num, divisor + 1);
}

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num < 0){
		printf("%d is not a prime number.\n", num);
	}
	else{
		if(isPrime(num, 2)){
			printf("%d is a prime number.\n", num);
		}
		else{
			printf("%d is not a prime mumber.\n", num);
		}
	}
	return 0;
}
