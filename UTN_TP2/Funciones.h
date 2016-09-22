#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

 /**
 * Le da un valor inicial a cada array.
 * @param iniciar el array se pasa como parametro.
 * @return un valor 0 a cada array.
 */
void iniciarArray(EPersona iniciar[]);


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

/**
 * Obtiene el indice que
 * @param lista el array se pasa como parametro.
 * @param edad la edad a ser buscado en el array.
 * @return grafico
 */
void ordenarPersonas();

/**
 * Obtiene el indice que
 * @param lista el array se pasa como parametro.
 * @param edad la edad a ser buscado en el array.
 * @return grafico
 */
void mostrarGrafico();
#endif // FUNCIONES_H_INCLUDED

