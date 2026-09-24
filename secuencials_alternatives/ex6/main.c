#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool punt_dins_circumferencia(double cx, double cy, double r, double px, double py);

int main() {
	/*
    	assert(punt_dins_circumferencia(0.0, 0.0, 1.0, 1.0, 0.0) == true);
    	assert(punt_dins_circumferencia(1.0, 2.0, 1.2, 0.0, 0.0) == false);
    	assert(punt_dins_circumferencia(5.0, 5.0, 10.0, 5.0, 5.0) == true);

    	printf("¡Tests superados! Iniciant el programa...\n\n");
    	*/

    	double cx, cy, r, px, py;

    	printf("Introdueix les coordenades del centre de la circumferència (x y): ");
    	if (scanf("%lf %lf", &cx, &cy) != 2) {
        	printf("Error: Has d'introduir dos números vàlids.\n");
        	return 1;
    	}

    	printf("Introdueix el radi de la circumferència: ");
    	if (scanf("%lf", &r) != 1) {
        	printf("Error: Has d'introduir un número vàlid pel radi.\n");
        	return 1;
    	}
    
    	if (r < 0) {
        	printf("Error: El radi no pot ser negatiu.\n");
        	return 1;
    	}

    	printf("Introdueix les coordenades del punt (x y): ");
    	if (scanf("%lf %lf", &px, &py) != 2) {
        	printf("Error: Has d'introduir dos números vàlids.\n");
        	return 1;
    	}

    	if (punt_dins_circumferencia(cx, cy, r, px, py) == true) {
        	printf("El punt és dins la circumferència.\n");
    	} else {
        	printf("El punt és fora la circumferència.\n");
    	}

    	return 0;
}
