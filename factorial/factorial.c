#include "factorial.h"
uint64_t factorial(uint64_t n){
	if(n < 2){
		return 1;
	}
	return (n*factorial(n-1));
}
