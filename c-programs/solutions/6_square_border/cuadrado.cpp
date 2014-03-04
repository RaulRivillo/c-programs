#include <stdio.h>
#include <stdlib.h>

int main(){

    int lado=0;

    printf("Inserte tamaño del cuadrado: ");
    scanf("%i", &lado);
    printf("\n");

    for(int fila=0;fila<lado;fila++){
	for(int col=0;col<lado;col++){
	    if((fila == 0) || (col == 0) || (fila == lado - 1) || (col == lado - 1))
		printf(" * ");
	    else
		printf("   ");
	}
	printf("\n");
    }

    return EXIT_SUCCESS;
}
