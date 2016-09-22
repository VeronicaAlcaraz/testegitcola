#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include <string.h>

int main()
{
    char seguir='s';
    int opcion=0,
        i,
        j,
        pos,
        dni,
        flag,
        hasta18,
        de19a35,
        mayorDe35,
        mayor;
    EPersona item[20],
             aux;


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
                    printf("La persona no existe\n");
                    system("pause");

                break;

            case 3:
                system("cls");
                for(i=0; i<20; i++)
                {
                    for(j=i+1; j<20; j++)
                    {
                        if(strcmp(item[i].nombre, item[j].nombre)>0)
                        {
                            aux = item[i];
                            item[i] = item[j];
                            item[j] = aux;
                        }
                    }
                }
                system("cls");
                printf("Nombre    Edad   DNI\n");
                for(i=0; i<20; i++)
                {
                    if(item[i].estado == 1)
                        printf("%5s  %3d %10d\n", item[i].nombre, item[i].edad, item[i].dni);
                }
                system("pause");
                break;

            case 4:
                hasta18 = de19a35 = mayorDe35 = 0;
                for(i=0; i<20; i++)
                {
                    if(item[i].estado == 1 && item[i].edad < 19)
                        hasta18++;
                    if(item[i].estado == 1 && item[i].edad > 18 && item[i].edad < 36)
                        de19a35++;
                    if(item[i].estado == 1 && item[i].edad > 35)
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

                    if(i<= hasta18){
                        printf("*");
                    }
                    if(i<= de19a35){
                        flag=1;
                        printf("\t*");
                    }
                    if(i<= mayorDe35){
                        if(flag==0)
                            printf("\t\t*");
                        if(flag==1)
                            printf("\t*");

                    }

                    printf("\n");
                }
                printf("--------------------");
                printf("\n<18\t19-35\t>35\n");
                break;
            case 5:
                seguir = 'n';
                break;
        }
        system("cls");
    }

    return 0;
}
