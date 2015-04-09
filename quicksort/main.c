#include "quicksort.h"

int main(int argc, char* argv[]){
	/* create an MxN array
	 * M=argc
	 * N=sizeof(int)
	 */
	int* array=(int*) malloc(argc * sizeof(int));

	// translate the user's inputs into integers
	for(int i=1; i < argc; i++){
		array[i-1]=(int)atoi(argv[i]);
	}

	printf("Before quicksort\n");
	display(array, (argc-1));

	// sort the (unordered) list
	quicksort(array, 0, (argc-1));

	printf("\nAfter quicksort\n");
	display(array, (argc-1));

	return EXIT_SUCCESS;
}
