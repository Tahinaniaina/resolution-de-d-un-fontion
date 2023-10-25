#include "function.h"

double f(double n){
	return log(n)-1;
}
double dichotomie(double a,double b){
	double tmp;
	double puissanceEps = 10;
	while(fabs(a-b)>pow(10,-puissanceEps)){
		if(f(a)*f(b)>0){
			a=0;b=0;
			break;
		}
		tmp = (a+b)/2;
		if(f(a)*f(tmp)<=0)
			b = tmp;
		else if(f(tmp)*f(b)<=0)
			a = tmp;
	}
	return (a+b)/2;
}

double derive(double x){
	return (double)1/x;
}

double tangente(double a){
	double eps = pow(10,-8);
	
	while(fabs(f(a))>eps){
		a = (double)(-f(a)/derive(a))+a;
	}
	return a;
}

droite DroitSecante(double a,double b){
	droite sec;
	sec.coeff = (double) ( f(b) - f(a) ) / ( b - a );
	sec.cst = (double) f(a) - sec.coeff * a;
	return sec;
}

double resSecante(double a, double b){
	
	double eps = pow(10,-8);
	double c;
	while(fabs(b - a) > eps){
		droite secnte = DroitSecante(a,b);
		c = (double) (-secnte.cst/secnte.coeff);
		
		if (f(c) == 0.0)
            return c;
        
            b = c;
	}
	return c;
}


double integrale(double a,double b,double n){
	double res=0.0;
	double puissanceEps = 1.0/n;
	for(a;a<=b;a+=puissanceEps)
		res+=((f(a+puissanceEps)+f(a))*puissanceEps)/2;
	return res;
}

