#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]){
    int lado;

    printf("introduzca numero de lado: ");
    scanf("%i", &lado);

    for (int fila=0; fila<lado; fila++){
	for (int columna=0; columna<lado; columna++)
	    printf("*");
	printf("\n");
    }

    return EXIT_SUCCESS;
}
