#include <stdio.h>
#include <stdlib.h>

double add(double op1, double op2){
    return op1 + op2;
}

int main(int argc, char *argv[]){

    float numero1 = atof(argv[1]), numero2 = atof(argv[2]);

    printf("El resultado es: %.2f .", add(numero1, numero2));

	    return EXIT_SUCCESS;
	    }
