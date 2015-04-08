#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdint.h>
#include<inttypes.h>

uint16_t fibonacci(uint16_t n){
	if((n > -1)&&(n < 2)){
		return n;
	}
	return (fibonacci(n-1)+fibonacci(n-2));
}

int main(int argc, char* argv[]){
	short int progID=0;
	const uint8_t MAX=14; // fibonacci(14)> 255 >= (2^8) -1
	if(argc > 1){
		uint16_t n=strtoul(argv[1], NULL, 10);
		printf("Please, wait for a while ...\n");
		if(n < MAX){
			uint16_t f=fibonacci(n);
			printf("fibonacci(%" PRIu16 ") = %" PRIu16 "\n", n, f);
		}else{
			printf("fibonacci(%" PRIu16 ") > %" PRIu16 "\n", n, UINT8_MAX);
			printf("Usage: %s NUMBER=[%d, %d]\n", argv[progID], 0, (MAX-1));
		}
	}else{
		char buf[25];
		sprintf(buf, "Too few arguements: %d", argc);
		perror(buf);
		printf("Usage: %s NUMBER=[%d, %d]\n", argv[progID], 0, (MAX-1));
	}

#if defined(_WINDOWS_OS_)
	system("PAUSE");
#endif
	return EXIT_SUCCESS;
}
