#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10

int power(double base, int exponent){
    if(base == 1)
	return 1;
    else
	return pow(base, exponent);
}

int fill_in(int list[N],int exponent){

    for(int i=0;i<N;i++)
	list[i] = power(i+1, exponent);
}

int main(int argc, char* argv[]){

    int list[N];
    int exponent = atoi(argv[1]);

    for(int i=0;i<N;i++)
	list[i]=0;

    fill_in(list, exponent);

    for(int j=0;j<N;j++)
	printf("%.2f",list[j]);

    return EXIT_SUCCESS;
}
