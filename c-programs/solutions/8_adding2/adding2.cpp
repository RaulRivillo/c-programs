#include <stdio.h>
#include <stdlib.h>


int main(){

    int numero=0, suma=0;

    printf("Inserte numeros a sumar: ");
    printf("\n Numero: ");
    scanf("%i", &numero);

    do{

	if(numero >0){
	    suma +=numero;

	    printf("\n Resultado: %i", suma);
	}
	printf("\n\n Numero: ");
	scanf("%i", &numero);

    }while(numero>0);

    return EXIT_SUCCESS;
}
