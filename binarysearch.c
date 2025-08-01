//Write a program to search an item from an array using binary search.
#include<stdio.h>

int main(){
	int arr[] = {10, 20, 30, 40, 50};
	int key = 40;
	int beg = 0, end = sizeof(arr)/sizeof(arr[0])-1;
	int mid, found = -1;
	while(beg <= end){
		mid = (beg + end)/2;
		
		if(arr[mid] == key){
			found = mid;
			break;
		}
		else if(arr[mid] < key){
			beg = mid +1;
		}
		else{
			end = mid - 1;
		}
	}
	if(found != -1){
		printf("Element %d found at index %d.\n", key, found);
	}
	else{
		printf("Element %d not found.\n", key);
	}
	return 0;
}
