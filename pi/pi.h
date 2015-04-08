#ifndef PI_H_
#define PI_H_

#if !defined (_WINDOWS_)
typedef long double LDBL;
#else
typedef double LDBL
#endif

#if !defined(_USE_MATH_DEFINES)
#define M_PI	3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342116067982148086513282306647093844609550582231725359408128L
#endif

#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<float.h>
#include<math.h>

LDBL newton_pi();
LDBL naive_pi();
LDBL arctan_pi();
LDBL euler_pi();
LDBL machin_pi();
LDBL gauss_legendre_pi();
LDBL gl_pi(LDBL pi, double a, double b, double t, double p);

#endif
