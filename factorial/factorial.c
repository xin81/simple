#include "factorial.h"
UINT factorial(int n){
	if(n < 2){
		return 1;
	}
	return (n*factorial(n-1));
}
