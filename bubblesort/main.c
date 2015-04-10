#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bubblesort.h"
void display(int* array, const int MAX);
void print_help(char* program);
void print_help(char* program){
	printf("Usage: .%s LIST={%d, ..., N-1}\n", program, 0);
}
void display(int* array, int MAX){
	for(int i=0; i < MAX; i++){
		printf("%d ", array[i]);
	}
}

int main(int argc, char* argv[]){
	char program[15];
	strcpy(program, argv[0]);
	if(argc > 1){
	 if(strcmp(argv[1], "--help")!=0){
		const int MAX=(argc-1);
		int* array=(int*) malloc(sizeof(int)*(MAX));
		for(int i=0; i < MAX; i++){
			array[i]=atoi(argv[i+1]);
		}

		printf("Before bubblesort:\n");
		display(array, MAX);
		bubblesort(array, MAX);
		printf("\nAfter bubblesort:\n");
		display(array, MAX);
	 }else{
		print_help(program);
	 }
	}else{
		char buf[40]; 
		if((sprintf(buf, "Too few arguements: %d", argc)) > (-1)){
			perror(buf);
			print_help(program);
			// printf("Usage: .%s LIST={%d, ..., N-1}\n", program, 0);
		}
	}

	return EXIT_SUCCESS;
}
