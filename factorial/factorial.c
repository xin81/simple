#include "factorial.h"
UINT factorial(UINT n){
	if(n < 2){
		return 1;
	}
	return (n*factorial(n-1));
}
