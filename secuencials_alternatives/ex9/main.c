#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

// Declaració de la funció (implementada a intervals.c)
bool intersequen_intervals(double x1, double x2, double y1, double y2);

int main(void) {
    	/*
    	assert(intersequen_intervals(2.0, 4.4, 5.0, 6.3) == false);  
    	assert(intersequen_intervals(2.0, 4.4, 3.0, 6.3) == true);   
    	assert(intersequen_intervals(1.0, 3.0, 3.0, 5.0) == true);    
    	assert(intersequen_intervals(1.0, 10.0, 4.0, 6.0) == true);
    	assert(intersequen_intervals(5.0, 8.0, 1.0, 4.0) == false);
    	printf("Tots els casos de prova han passat!\n");
	*/
    	double x1, x2, y1, y2;

    	printf("Introdueix els valors del primer interval (x1 x2): ");
    	scanf("%lf %lf", &x1, &x2);

    	printf("Introdueix els valors del segon interval (y1 y2): ");
    	scanf("%lf %lf", &y1, &y2);

    	if (intersequen_intervals(x1, x2, y1, y2) == true) {
        	printf("Els intervals s'intersequen.\n");
    	} else {
        	printf("Els intervals no s'intersequen.\n");
    	}

    	return 0;
}
