#include <iostream>
#define MR_PAIRING_SSP 
#define Security 80
#include "pairing_1.h"

//PFC pfc(Security);
int main()
{
printf("0");
 PFC pfc(Security);
printf("1");
	Big e,l;
	G1 a,b,s,g,r;
	GT c,d,m;
	pfc.random(a);
	pfc.random(b);
	pfc.random(e);
	pfc.random(g);
	pfc.random(l);
cout<< e<<endl;
		s =a+b;//mul_G1
//cout<<s<<endl;
		c = pfc.pairing(a,b);//e
		r = pfc.mult(g, l);//stand
		d = pfc.power(c, e);//Exp
		m = c*d;//Mul_GT
		pfc.start_hash();
		pfc.add_to_hash(a);
printf("hello world");
 return 1;
}
