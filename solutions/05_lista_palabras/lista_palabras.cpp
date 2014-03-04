#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanio=0;
    const char *list[] = {
	"bread",
	"toast",
	"bacon"
    };

    tamanio = sizeof(list)/sizeof(char *);

    for(int i=0;i<tamanio;i++){
	printf("%s", list[i]);
	printf("\n");
    }

    return EXIT_SUCCESS;
}
