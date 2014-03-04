#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero=0, suma=0, media=0, contador=0;

    scanf("%i", &numero);
    while(numero>=1){
	suma+=numero;
	scanf("%i", &numero);
	contador++;
    }
    printf("suma: %i", suma);
    printf("\n");

    media = suma/contador;

    printf("Media: %i\n", media);


return EXIT_SUCCESS;
}
