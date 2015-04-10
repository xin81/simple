#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
#include "factorial.h"

void print_help(char*);

void print_help(char* program){
	printf("Usage: .%s NUMBER=[%d, %d]\n", program, 0, (MAX-1));
}

int main(int argc, char* argv[]){
	char program[13];
	strcpy(program, argv[0]);
	if(argc > 1){
		if(strcmp(argv[1], "--help")!=0){
			// UINT64 n=strtoul(argv[1], NULL, 10);
			int n=(int)atoi(argv[1]);
			UINT f=factorial(n);
			if(n < MAX){
				printf("factorial(%" PRId32 ")", n);
				printf("=%" PRIu64 "\n", f);
			}else{
   			char buf1[100];
   			if(sprintf(buf1, "factorial(%" PRId32 ")=%" PRId32 "!\n%" PRId32 " is too large for this program",  n, n, n)>(-1)){
      			perror(buf1);
  				}
				print_help(program);
			}
		}else{
			print_help(program);
		}	
	}else{
		char buf[25];
  		if(sprintf(buf, "Too few arguements: %d\n", argc)>(-1)){
    		perror(buf);
  		}
		print_help(program);
	}
	return EXIT_SUCCESS;
}
