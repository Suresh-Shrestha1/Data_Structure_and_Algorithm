//WAP to reverse the integer number using recursion.

#include<stdio.h>
int reverse(int num, int rev){
	if(num == 0){
		return rev;
	}
	rev = rev * 10 + num % 10;
	return reverse(num / 10, rev);
}

int main(){
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	int r = reverse(n, 0);
	printf("Reversed number: %d\n", r);
	return 0;
}
