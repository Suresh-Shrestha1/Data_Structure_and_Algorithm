//Write a program to search an item from an array using sequential or linear search.
#include<stdio.h>

int main(){
	int arr[] = {34, 78, 12, 56, 89, 23, 45};
	int key = 56;
	int size = sizeof(arr) / sizeof(arr[0]);
	int found = 0;
	int i;
	
	for(i=0; i<size; i++){
		if(arr[i] == key){
			printf("Element %d found at index %d.\n", key, i);
			found = 1;
			break;
		}
	}
	
	if(!found){
		printf("Element %d not found in the array.\n", key);
	}
	return 0;
}
