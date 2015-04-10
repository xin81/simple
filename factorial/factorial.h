#ifndef FACTORIAL_H_
#define FACTORIAL_H_
#include<limits.h>
#include<inttypes.h>
#include<stdint.h>

#if !defined(_SYSTEM64_)
typedef uint32_t UINT;
#else
typedef uint64_t UINT;
#endif

UINT factorial(UINT n);
#endif
