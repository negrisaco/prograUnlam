
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "fechas.h"


int cantDias(int mes, int anio){
    printf("fecha: %d %d ", mes, anio);
    if((mes==2) && ( (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))){
        return(29);
    } else {
        if(mes == 2) {
            return(28);
        } else {
            if(mes==4 || mes==6 || mes==9 || mes==11){
                return(30);
            } else {
                return(31);
                }
            }

        }
}


int validaFecha(t_fecha fecha){
    if(fecha.anio>=1900 && fecha.anio<2500){
        if(fecha.mes>=1 && fecha.mes<=12){
            if(fecha.dia>=1 && fecha.dia<=cantDias(fecha.mes, fecha.anio)){
              return(1);
            } else {
                printf("cantidad de dias es %d", cantDias(fecha.mes, fecha.anio));
                return(4);//dia incorrecto
                }
        } else {
            return(3);//mes incorrecto
        }
    } else {
        return(2);//anio incorrecto
    }
}


t_fecha diaSiguente(t_fecha fecha)
{
    if(fecha.dia < cantDias(fecha.mes,fecha.anio))
     {
      fecha.dia ++ ;
      return fecha;
     }
    else{
        fecha.dia = 1;
      if(fecha.mes == 12){
            fecha.mes = 1;
            fecha.anio ++;
        } else {
            fecha.mes ++;
        }
    }

    return fecha;
}


