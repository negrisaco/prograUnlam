#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "matematicas.h"
#include "fechas.h"


int main()
{
    float n=6;
    int z=2;//n
    int s=5;//m
    int x;
    int tol;

    t_fecha fecha;
    fecha.dia=31;
    fecha.mes=12;
    fecha.anio=2010;

    t_fecha fechaSig;

    int statusFecha;


    m=validarNatural(n);
    if(m==1){
      printf("Es numero es valido: %f",n);
    }
    else{
      printf("Es numero no es valido: %f",n);

    }

    resultado=factorial(n);

    mostrarResultado(resultado);

    resComb=combinatoria (z, s);//segun guis z->n y s->m

    mostrarResultado(resComb);

    //serie=resolSerie(x, tol);

    statusFecha=validaFecha(fecha);

    switch(statusFecha)
	{
		case 1:
			printf("\nHa ingresado la fecha correcta\n");
			printf("La fecha ingresada es: %d %d %d", fecha.dia, fecha.mes, fecha.anio);
			break;
		case 2:
			printf("\nHa ingresado el anio incorrecto\n");
			break;
		case 3:
			printf("\nHa ingresado el mes incorrecto\n");
			break;
		case 4:
			printf("\nHa ingresado el dia incorrecto\n");
			break;

		defalut:
			break;
	}
if(statusFecha == 1)
{
    fechaSig = diaSiguente(fecha);
    printf("\nEl dia siguiente es: %d/%d/%d\n",fechaSig.dia,fechaSig.mes,fechaSig.anio);
}


}

