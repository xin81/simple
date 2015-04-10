#include "factorial.h"
UINT64 factorial(UINT64 n){
	if(n < 2){
		return 1;
	}
	return (n*factorial(n-1));
}
