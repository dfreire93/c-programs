#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char sentence[30];
    const char *beginning = sentence;
    const char *end       = sentence;

    printf("Introduzca la oración que desee: ");
    gets(sentence);

    while (*end != '\0')
	end++;


    while(end != beginning){
	end--;
	printf("%c", *end);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
