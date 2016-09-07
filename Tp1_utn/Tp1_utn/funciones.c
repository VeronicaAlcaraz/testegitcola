#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

//Función que suma los valores ingresados en a y en b.
void suma(float x, float y)
{
    printf("La suma de A+B es: %.2f\n", x+y);
}

//Función que resta los valores ingresados en a y en b.
void resta(float x, float y)
{
    printf("La resta entre A-B es: %.2f\n", (x-y));
}

//Función que divide los valores ingresados en a y en b.
void division(float x, float y)
{
    if(y==0)
        printf("Error al realizar la division, no se puede dividir por cero\n");
    else
        printf("La division es: %.2f\n", x/y);
}

//Función que multiplica los valores ingresados en a y en b.
void multiplicar(float x, float y)
{
    printf("La multiplicacion de A*B es %.2f\n", x*y);
}

//Función que muestra el factorial del valor ingresado solo en a. No admite numeros negativos.
void factorial(float x)
{
    float fac=1;
    int   i;

    if(x<0)
        printf("Error al realizar el factorial, ingrese un numero positivo\n");
    else if(x!=(int)x)
        printf("Error al realizar el factorial, ingrese un numero entero\n");
    else
   {
        for(i=1; i<=x; i++)
        fac*=i;
        printf("La factorizacion es: %.f\n", fac);
   }
}

//Función que lee un solo carácter ingresado desde el teclado, este carácter no es mostrado en pantalla al ingresarlo y permite continuar el programa.
void mensaje()
{
    printf("Presione cualquier tecla para continuar");
}

