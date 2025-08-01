//Insertion sort
#include<stdio.h>

int main(){
	int arr[] = { 12, 11, 13, 5, 6};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i, j, key;
	
	for(i=1; i<size; i++){
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
	printf("Insertion sort: ");
	for(i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
