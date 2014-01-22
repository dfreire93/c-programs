#include <stdlib.h>
#include <stdio.h>
#define MAX[10];

char MAX;

int main (){

    printf("introduzca palabra: \n");
    scanf(" %s", &palabra);
    for(int t=0; t<MAX; t++){

	printf("palabra %s: \n", t+1);
	scanf(" %s", &palabra[t]);
    }

    return EXIT_SUCCESS;
}
