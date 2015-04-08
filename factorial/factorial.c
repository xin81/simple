/*
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<limits.h>
#include<inttypes.h>
#include<stdint.h>
*/
#include "factorial.h"

/*
* @return n!
*/
uint64_t factorial(uint64_t n){
	if(n < 2){
		return 1;
	}
	return (n*factorial(n-1));
}

/*
int main(int argc, char* argv[]){
	int progID=0;
	if(argc > 1){ // a number is required
		uint64_t n=strtoul(argv[1], NULL, 10);
		uint64_t f=factorial(n);
		const uint64_t MAX=66;
		if(n < MAX){ // cannot display numbers larger than UINT64_MAX
			printf("factorial(%" PRIu64 ")=%" PRIu64 "\n", n, f);
		}else{// display error messages when the factorial procedure fails.
			printf("factorial(%" PRIu64 ")=%" PRIu64 "!", n, n);
			printf("\n%" PRIu64 " is too large for this factorial program", n);
			printf("\nUsage: %s NUMBER=[%d, %d]", argv[progID], 0, 65);
		}
	}else{// display error messages when the user provides too few arguements
		char buf[25];
		if(sprintf(buf, "\nToo few arguements: %d",argc)>-1){ 
			perror(buf);
		}else{
			printf("\ntoo few arguements: %d", argc);
		}
		printf("\nUsage: %s NUMBER=[%d, %d]", argv[progID], 0, 65);
	}
	return EXIT_SUCCESS;
}
*/
