#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/** 
* Computes prime numbers with the Sieve of Eratosthenes algorithm
* @param argc checks the number of arguements
* @param argv sets the maximum number of prime numbers
* Usage: ./primes MAX
* MAX >= 2
*/
int main(int argc, char* argv[]){
int i=2;

// one arguement at least is required to set the maximum number
if(argc > 1){
	const int max=(int)atoi(argv[1]);

	/* Sieve of Eratosthenes */
	// as 1 is not a prime number by definition, we can start with 2
	for(i=2; i <= max; i++){

	/* checking the modulo operation with the number 1 is too trivial,
	* and therefore should be ignored;
	* otherewise all numbers would not be classifed as prime numbers
	*/
		int j=2;
		bool is_prime=true;

		do{

 			// checking the modulo operation with two same number values is also too trivial
			if(i!=j){
				is_prime=true; // true for 2
				if((i%j)!=0){
					is_prime=true; // true for any other prime numbers
				}else{
					is_prime=false; // false for any numbers which can be divided by any previous (prime) number
					break;
				} // end if
			}
			j++;
		}while(j < i); // check a number with only previous numbers

		if(is_prime==true){
			printf("%d ", i);
		}// end if
	} // end for
/* End of Sieve of Eratosthenes */

}else{
	char buf[25];
	sprintf(buf, "Too few arguements: %d", argc);
	perror(buf);
} // end if

#ifdef _WINDOWS_OS_
	printf("\nPress any key ...");
	int ch=getchar();
	return ch;
#else
	return 0;
#endif
}
