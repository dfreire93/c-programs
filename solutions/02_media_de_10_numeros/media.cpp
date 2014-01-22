#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main(){
 
    int numeros[MAX], suma = 0, media = 0;

    printf("Inserte numeros: ");

    for(int i = 0; i<MAX; i++){
        printf("Numero %i: ", i+1);
        scanf(" %i", &numeros[i]);
        suma +=numeros[i];        
    }
   
    media = suma / MAX;
 
    printf("Resultado: %i", media);

return EXIT_SUCCESS;
}