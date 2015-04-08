#include<math.h>
#include<factorial.h>
#include "pi.h"
/*
https://en.wikipedia.org/wiki/Approximations_of_%CF%80#Polygon_approximation_to_a_circle
pi=2*sum((2^k k!^2)/(2k+1)!
*/
LDBL newton_pi(){
	LDBL sum=0.0;
	uint64_t k=0;
	do{
		uint64_t mf=(uint64_t)(pow(2, (k*1))*pow(factorial(k), 2));
		uint64_t df=(uint64_t)(factorial((2*k)+1));
		sum+=((mf*1.0)/(df*1.0));
		k++;
	}while(sum < (M_PI/2.0));
	return (2.0*sum)*1.0;
}

/*
formula taken from https://www.youtube.com/watch?v=DLZMZ-CT7YU
pi=n*sin(180°/n)
*/
LDBL naive_pi(){
	LDBL C=(360/2)*1.0;
	LDBL angle=((M_PI*C)/C);
	LDBL pi=1.0;
	LDBL tmp=pi;
	int k=0;
	do{
		double p=pow(2.0, k);
		tmp=p*sin(angle/p);
		if(isnan(tmp)==0){
			pi=tmp;
		}
		k=(k+1);
	}while((isnan(tmp)==0));
	return pi;
}
LDBL arctan_pi(){
	return M_PI;
}

/* https://en.wikipedia.org/wiki/Approximations_of_%CF%80#Trigonometry */
LDBL euler_pi(){
	LDBL y1=20.0;
	LDBL x1=(1/7)*1.0;
	LDBL y2=8.0;
	LDBL x2=(3/79)*1.0;
	return (atan2(y1, x1) + atan2(y2, x2));
}

/*
* warning: there is a little mistake on https://en.wikipedia.org/wiki/Approximations_of_%CF%80#Machin-like_formulae in the section "Trigonometry - Gregory-Leibniz series".
* the third pi equation should replace the subtraction sign by the plus sign.
pi=(16 arctan(1/5) + 4 arctan (1/239))
*/
LDBL machin_pi(){
	LDBL y1=16.0;
	LDBL x1=(1/5)*1.0;
	LDBL y2=4.0;
	LDBL x2=(1/239)*1.0;
	return (atan2(y1, x1)+atan2(y2, x2));
}

/*
initialize a, b, t, and p
for the Gauss-Legendre algorithm of pi
*/
LDBL gauss_legendre_pi(){
	LDBL pi=0.0;
	LDBL a=1.0;
	LDBL b=(1.0/sqrt(2.0))*1.0;
	LDBL t=(1.0/4.0);
	LDBL p=1.0;
	return gl_pi(pi, a, b, t, p);
}

/* https://en.wikipedia.org/wiki/Gauss%E2%80%93Legendre_algorithm */
LDBL gl_pi(LDBL pi, double a, double b, double t, double p){
	double a_n=((a+b)/2.0);
	double b_n=sqrt(a*b);
	double t_n=(t-(p*pow((a-a_n), 2.0)));
	double p_n=(2*p);

	LDBL tmp=pow((a_n+b_n),2.0)/(4.0*t_n);
	while(isnan(tmp)==0){
		pi=tmp;
		LDBL error=sqrt(pow((M_PI - pi),2.0));
		if(error > 0){
			return gl_pi(pi, a_n, b_n, t_n, p_n);
		}else{
			break;
		}
	}
	return pi;
}
