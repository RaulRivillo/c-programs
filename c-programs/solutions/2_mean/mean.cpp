#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros[10], suma, media;

    for(int i=0;i<10;i++){
	printf("Numero: ");
	scanf("%i", &numeros[i]);
	suma +=numeros[i];
    }
    media = suma/10;
    printf("%i\n", media);

    return EXIT_SUCCESS;
}


