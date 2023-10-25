#include "function.h"

int main(){
	double a,b;
	double dic,tan,sec;
	printf("Entrer le borne a et b : ");
	scanf("%lf%lf",&a,&b);
	dic = dichotomie(a,b);
	tan = tangente(a);
	sec = resSecante(a,b);

	printf("la solution par la methode de Dichotomie : %f\n",dic);
	printf("la solution par la methode de Descartes : %f\n",sec);
	printf("la solution par la methode de Newton : %f\n",tan);

	return 0;
}