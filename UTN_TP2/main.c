#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include <string.h>

int main()
{
    char seguir='s';
    int opcion=0,
        pos,
        dni;
    EPersona item[20];


    iniciarArray(item);
    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n\n");

        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1:
                system("cls");
                pos = obtenerEspacioLibre(item);
                if(pos != -1)
                {
                    printf("Ingrese nombre: ");
                    fflush(stdin);
                    scanf("%s", item[pos].nombre);

                    printf("Ingrese edad: ");
                    scanf("%d", &item[pos].edad);


                    printf("Ingrese dni: ");
                    scanf("%d", &item[pos].dni);

                    item[pos].estado = 1;
                }
                else
                    printf("Todos los espacios están completos");
                system("cls");
                break;

            case 2:
                printf("Ingrese documento:");
                scanf("%d", &dni);
                pos = buscarPorDni(item, dni);

                if(pos >= 0)
                {  item[pos].estado = 2;
                   printf("Se ha borrado a la persona con exito!!\n\n");
                }
                else
                    printf("La persona todavía no fue dada de alta.\n");
                    system("pause");

                break;

            case 3:
                system("cls");
                ordenarPersonas(item);
                system("pause");
                break;

            case 4:
                printf("\n");
                system("cls");
               mostrarGrafico(item);
                break;

            case 5:
                seguir = 'n';
                break;
        }
        system("cls");
    }

    return 0;
}
