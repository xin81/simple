#include "bubblesort.h"
void swap(int* a, int* b){
 int tmp=*a;
 *a = *b;
 *b = tmp;
}

void bubblesort(int* array, const int MAX){
for(int i=0; i < MAX; i++){
   for(int j=(i+1); j <= (MAX-1); j++){
      if(array[i] > array[j]){
	swap(&array[i], &array[j]);
      }
   }
}
}

