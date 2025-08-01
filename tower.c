//WAP for tower of hanoi (TOH) problem.

#include<stdio.h>
void moveDisk(int n, char sou, char tar, char aux){
	if(n == 1){
		printf("Move disk 1 from rod %c to rod %c\n", sou, tar);
		return;
	}
	moveDisk(n - 1, sou, aux, tar);
	printf("Move disk %d from rod %c to rod %c\n", n, sou, tar);
	moveDisk(n - 1, aux, tar, sou);
}

int main(){
	int n;
	printf("Enter the number of disks: ");
	scanf("%d", &n);
	moveDisk(n, 'E', 'F', 'G');
	return 0;
}
