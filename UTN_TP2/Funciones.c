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


void mostrarGrafico(EPersona lista[])
{
    int hasta18,
        de19a35,
        mayorDe35,
        mayor,
        flag=0,
        i;

        hasta18 = de19a35 = mayorDe35 = 0;
                for(i=0; i<20; i++)
                {
                    if(lista[i].estado == 1 && lista[i].edad < 19)
                        hasta18++;
                    if(lista[i].estado == 1 && lista[i].edad > 18 && lista[i].edad < 36)
                        de19a35++;
                    if(lista[i].estado == 1 && lista[i].edad > 35)
                        mayorDe35++;
                }
                if(hasta18 >= de19a35 && hasta18 >= mayorDe35)
                    mayor = hasta18;
                if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
                    mayor = de19a35;
                if(mayorDe35 >= de19a35 && mayorDe35 >= de19a35)
                    mayor = mayorDe35;

                for(i=mayor; i>0; i--)
                {

                    if(i<= hasta18)
                    {
                        printf("*");
                    }
                    if(i<= de19a35)
                    {
                        flag=1;
                        printf("\t*");
                    }
                    if(i<= mayorDe35)
                    {
                        if(flag==0)
                            printf("\t\t*");
                        if(flag==1)
                            printf("\t*");
                    }

                    printf("\n");
                }
                printf("-----------------");
                printf("\n<18\t19-35\t>35\n");
                printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);
}
