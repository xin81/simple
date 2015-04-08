/* linux */
#include "dt.h"
#include "typedefs.h"
void print_advanced_datatypes(){
	int8_t smallest_min=INT8_MIN;
	int8_t smallest_max=INT8_MAX;

	int16_t small_min=INT16_MIN;
	int16_t small_max=INT16_MAX;

	int32_t great_min=INT32_MIN;
	int32_t great_max=INT32_MAX;

	int64_t greatest_min=INT64_MIN;
	int64_t greatest_max=INT64_MAX;

	unsigned short int ibit=8;
	printf("int%u_t = char (%%d) [-2^%u, 2^%u -1=[%d, %d]\n", ibit, (ibit-1), (ibit-1), (int8_t)smallest_min, (int8_t)smallest_max);
	ibit=ibit*2;
	printf("int%u_t = short (%%d) [-2^%u, 2^%u -1=[%d, %d]\n", ibit, (ibit-1), (ibit-1), (int16_t)small_min, (int16_t)small_max);
	ibit=ibit*2; // 2,147,483,647 = 2.147 thousand million
	printf("int%u_t = int (%%d) [-2^%u, 2^%u -1=[%d, %d]\n", ibit, (ibit-1), (ibit-1), (int32_t)great_min, (int32_t)great_max);
	ibit=ibit*2; // 9,223,372,036,854,775,807 = 9.223 trillion
	printf("int%u_t = long (%%PRId64) [-2^%u, 2^%u -1=[%" PRId64 ", %" PRId64 "]\n", ibit, (ibit-1), (ibit-1), (int64_t)greatest_min, (int64_t)greatest_max);

	ibit=8;
	uint8_t u_smallest_min=0;
	uint8_t u_smallest_max=UINT8_MAX;
	printf("uint%u_t = unsigned char (%%u) [-2^%u +1, 2^%u -1=[%u, %u]\n", ibit, (1-1), (ibit-1), (uint8_t)u_smallest_min, (uint8_t)u_smallest_max);

	ibit=ibit*8; // 18,446,744,073,709,551,615 = almost 18.447 trillion
	uint64_t u_greatest_min=0;
	uint64_t u_greatest_max=UINT64_MAX;
	printf("uint%u_t = unsigned long (%%PRIu64) [-2^%u +1, 2^%u -1=[%" PRIu64 ", %" PRIu64 "]\n", ibit, (1-1), (ibit-1), (uint64_t)u_greatest_min, (uint64_t)u_greatest_max);
}

void print_basic_datatypes(){
	printf("bool (%%d): [%d, %d]\n", (bool)false, (bool)true);
	printf("char (%%c): [%c (%i), %c (%i)]\n", (char)CHAR_MIN, (short int)CHAR_MIN, (char)CHAR_MAX, (short int)CHAR_MAX);
	printf("unsigned char (%%c): [%c (%u), %c (%u)]\n", (char)CHAR_MIN, (short int)CHAR_MIN, (char)UCHAR_MAX, (USHINT)UCHAR_MAX);
	printf("short int (%%d): [%d, %d]\n", (SHINT)SHRT_MIN, (SHINT)SHRT_MAX);

	printf("int (%%d): [%d, %d]\n\n", (int)INT_MIN, (int)INT_MAX);
	print_advanced_datatypes();

	printf("float (%%e, %%f, %%g): [%g, %g]\n", (float)FLT_MIN, (float)FLT_MAX);
	printf("double (%%E, %%F, %%G): [%G, %G]\n", (double)DBL_MIN, (double)DBL_MAX);
	printf("pi (%%lf) = %.10lf\n", M_PI);
	/*
		%ld expects long int
		%Ld expects long long int
		%le expects double
		%LE expects long double
		%lf expects double
		%LF expects long double
	 */
#if !defined(_WINDOWS_)//: Linux
	// [-9223372036854775808, 922,337,206,854,775,807] 922.337 thousand billion/billiards
	printf("\nlong int (%%ld): [%ld, %ld]\n", LONG_MIN, LONG_MAX);

	// [3.362103E-4932, 1.189731E+4932]
	printf("long double (%%LE): [%LE, %LE]\n", LDBL_MIN, LDBL_MAX);
#else //: Windows
	// [-2147483648, 2,147,483,648] ~ 2.147 thousand million/milliards
	long int pseudo_lmin=LONG_MIN;
	long int pseudo_lmax=LONG_MAX;
	printf("\n(pseudo long) int (%%ld): [%ld, %ld]\n", pseudo_lmin, pseudo_lmax);

	// [2.22507E-308, 1.79769E+308]
	double pseudo_ldmin=DBL_MIN;
	double pseudo_ldmax=DBL_MAX;
	printf("(pseudo long) double (%%le): [%le, %le]", pseudo_ldmin, pseudo_ldmax);
#endif
}

int main(){
	print_basic_datatypes();
	// print_advanced_datatypes();
	return 0;
}
/* end of linux */
