#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include <string.h>


void iniciarArray(EPersona iniciar[])
{
    int i;

    for(i=0; i<20; i++)
        iniciar[i].estado = 0;
}

int obtenerEspacioLibre(EPersona lista[])
{
    int i;
    for(i=0; i<20; i++)
        if(lista[i].estado==0)
            return i;
    return -1;
}

int buscarPorDni(EPersona lista[], int dni)
{
    int i;

    for(i=0; i<20; i++)
        if(lista[i].dni == dni)
            return i;
    return -1;
}


void ordenarPersonas(EPersona lista[])
{
    int i,
        j;
    EPersona aux;

    for(i=0; i<20; i++)
    {
        for(j=i+1; j<20; j++)
        {
            if(strcmp(lista[i].nombre, lista[j].nombre)>0)
                {
                    aux = lista[i];
                    lista[i] = lista[j];
                    lista[j] = aux;
                }
        }
    }
        system("cls");
        printf("Nombre    Edad   DNI\n");
        for(i=0; i<20; i++)
        {
            if(lista[i].estado == 1)
                printf("%5s  %3d %10d\n", lista[i].nombre, lista[i].edad, lista[i].dni);
        }
}


void mostrarGrafico()
{
}
