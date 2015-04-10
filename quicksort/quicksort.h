#ifndef QUICKSORT_H_
#define QUICKSORT_H_

/*
 * swaps two field values
 * @param *a points to field a
 * @param *b points to field b
 */
void swap(int* a, int* b);

// returns the pivot index
int pivot(int low, int high);

// performs the quicksort algorithm
void quicksort(int* array, int low, int high);
#endif
