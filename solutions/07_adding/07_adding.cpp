#include <stdio.h>
#include <stdlib.h>

double suma_numeros(double op1, double op2) {
    return op1 + op2;
}
int main(int argc, char *argv[]){

    double cifra1, cifra2;
    cifra1 = atof(argv[1]);
    cifra2 = atof(argv[2]);

    printf("%.2lf", suma_numeros(cifra1, cifra2));
    printf("\n");
    return EXIT_SUCCESS;
}
