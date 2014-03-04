#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamano=0;
    const char *list[] = {
	"bread",
	"toast",
	"bacon"
    };

    tamano = sizeof(list)/sizeof(char *);

    for(int i=0;i<tamano;i++){
	printf("%s", list[i]);
	printf("\n");
    }

    return EXIT_SUCCESS;
}
