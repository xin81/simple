#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quicksort.h"

// prints out results
void display(int* array,const int MAX);
void print_help(char* program);

void print_help(char* program){
	printf("Usage: .%s LIST={%d, ... N-1}", program, 0);
}

void display(int* array, const int MAX){
  for(int i=0; i < MAX; i++){
    printf("%d ", array[i]);
  }
}

int main(int argc, char* argv[]){
	char program[12];
	strcpy(program, argv[0]);
	if(argc > 1){
		if(strcmp(argv[1], "--help")!=0){
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
		}else{
			print_help(program);
		}
	}else{
		char buf[25];
		if(sprintf(buf, "Too few arguements: %d", argc) > (-1)){
			perror(buf);
		}
		print_help(program);
	}
	return EXIT_SUCCESS;
}
