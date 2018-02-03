#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct{
    int dia,
        mes,
        anio;
} t_fecha;

int validaFecha(t_fecha fecha);

t_fecha diaSiguente(t_fecha fecha);
