#ifndef QUICKSORT_H_
#define QUICKSORT_H_
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<stdint.h>

// prints out results
void display(int* array,const int MAX);

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
