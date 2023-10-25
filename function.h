#ifndef __FONCTION_H__
    #define __FONCTION_H__
        #include <stdio.h>
        #include <math.h>
        #include <stdlib.h>

        typedef struct{
            double coeff;
            double cst;
        }droite;

        double f(double n);
        double dichotomie(double a,double b);
        double integrale(double a,double b,double n);
        double derive(double x);
        double tangente(double a);
        droite DroitSecante(double a,double b);
        double resSecante(double a, double b);  
#endif