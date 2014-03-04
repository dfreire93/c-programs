#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int altura=4;
    for(int fila=0; fila<altura; fila++){
	for (int col=0; col<altura;col++)
	    if(fila>=col)
		printf("*");
	    else
		printf(" ");
	printf("\n");
    }
    return EXIT_SUCCESS;
}
