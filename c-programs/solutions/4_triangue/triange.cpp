#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int tamano = atoi(argv[1]);

    for(int fila=0;fila<=tamano;fila++){
	for(int col=0;col<=fila;col++){
	    if(fila>col)
		printf("%c", *argv[2]);
	    else
		printf(" ");

	}
	printf("\n\n");
    }


    return EXIT_SUCCESS;
}
