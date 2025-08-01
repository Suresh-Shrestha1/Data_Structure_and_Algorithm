//WAP to calculate fibonacci series.

#include<stdio.h>

int fibo(int n){
	if(n == 0 || n == 1){
		return n;
	}
	return fibo(n-1)+fibo(n-2);
}

int main(){
	int n, i;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Fibonacci series: ");
	for(i=0; i<n; i++){
		printf("%d ", fibo(i));
	}
	return 0;
}
