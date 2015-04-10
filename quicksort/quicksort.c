#include "quicksort.h"

void swap(int* a, int* b){
	int tmp=0;
	tmp=*a;
	*a = *b;
	*b = tmp;
}

int pivot(int low, int high){
	return (int)((low+high)/2);
}

/*
* inspired by http://www.zentut.com/c-tutorial/c-quicksort-algorithm
* WARNING: the original code contains 3 while loops which often leads to infinite loops
* This version makes use of only one while loop
*/
void quicksort(int* array, int low, int high){
	int p=pivot(low, high); // choose a pivot index

	// sort a sublist (from a (low) field to the pivot)
	if(low < p){
		if(array[low] > array[p]){
			swap(&array[low], &array[p]);
		}
	}

	// decrease the range of the sublist
	int i=(low+1); // increment the left index
	int j=(high-1);// decrement the right index
	while(i < j){
		// recursively sort the lesser list
		quicksort(array, low, j);
		quicksort(array, i, high);

		// continue
		i++;
		j--;
	}

	// final swap
	if(array[low]>array[j]){
		swap(&array[low], &array[j]);
	}
}
