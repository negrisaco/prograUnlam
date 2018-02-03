#include <stdio.h>
#include <stdlib.h>
#include "matematicas.h"


int validarNatural(float n){

    int n_entero;
    n_entero=(int) n;

    if(n>=0 && (n-n_entero==0)){
    esNatural=1;
    }
    else{
        esNatural=0;
    }
    return esNatural;

}


int factorial(float n){
  int i;
  int fac=(int)n;
  for(i=n;i>1;i--){
     fac=fac*(i-1);
  }
}

void mostrarResultado(int resultado){
 printf("/nEl resultado es: %d",resultado);
}



int combinatoria (int z, int s){
 int resComb;
 if(s>=z && z>=0){
    resComb=factorial(s)/(factorial(z)*factorial(s-z));
 }
 return(resComb);
}

//int resolSerie(int x, int tol){}



















