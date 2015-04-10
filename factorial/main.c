#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include "factorial.h"
int main(int argc, char* argv[]){
        int progID=0;
        UINT MAX=0;
        if(argc > 1){ // a number is required
                UINT n=strtoul(argv[1], NULL, 10);
                UINT f=factorial(n);
#if !defined(_SYSTEM64_)
                MAX=34;
#else
                MAX=66;
#endif
                if(n < MAX){ // cannot display numbers larger than UINT64_MAX
#if !defined(_SYSTEM64_)
                	printf("factorial(%" PRIu32 ")=%" PRIu32 "\n", n, f);
#else
                    printf("factorial(%" PRIu64 ")=%" PRIu64 "\n", n, f);
#endif
                }else{// display error messages when the factorial procedure fails.
#if !defined(_SYSTEM64_)
                	printf("factorial(%" PRIu32 ")=%" PRIu32 "!", n, n);
                	printf("\n%" PRIu32 " is too large for this factorial program", n);
                	printf("\nUsage: %s NUMBER=[%d, %" PRIu32 "]\n", argv[progID], 0, (MAX-1));
                	printf("\nIf you want to, you can recompile this program with -D_SYSTEM64_ instead of -D_SYSTEM32_.");
                	printf("\nEdit the Makefile. Change the value of SYMBOLS (=_SYSTEM32_) into _SYSTEM64_, and compile all source codes by typing \"make -f Makefile all\"");
                	UINT newMAX=((2*(MAX-1))-1);
                	printf("\nThe highest number you can enter will be %" PRIu32 "", newMAX);
#else
                    printf("factorial(%" PRIu64 ")=%" PRIu64 "!", n, n);
                    printf("\n%" PRIu64 " is too large for this factorial program", n);
                    printf("\nUsage: %s NUMBER=[%d, %" PRIu64 "]\n", argv[progID], 0, (MAX-1));
#endif

                }
        }else{// display error messages when the user provides too few arguements
                char buf[25];
                if(sprintf(buf, "\nToo few arguements: %d",argc)>-1){
                        perror(buf);
                }else{
                        printf("\ntoo few arguements: %d", argc);
                }
            	printf("\nusage: %s NUMBER=[%d, [%d (if defined _SYSTEM32_)|%d (if defined _SYSTEM64_)]]\n", argv[progID], 0, 33, 65);
        }
        return EXIT_SUCCESS;
}

