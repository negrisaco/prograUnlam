#include <stdio.h>
#include <stdlib.h>
#include "matematicas.h"


int main()
{
    float n=6;
    int z=2;//n
    int s=5;//m
    int x;
    int tol;


    m=validarNatural(n);
    if(m==1){
      printf("Es numero es valido: %d",n);
    }
    else{
      printf("Es numero no es valido: %f",n);

    }

    resultado=factorial(n);

    mostrarResultado(resultado);

    resComb=combinatoria (z, s);//segun guis z->n y s->m

    mostrarResultado(resComb);

    //serie=resolSerie(x, tol);


}

