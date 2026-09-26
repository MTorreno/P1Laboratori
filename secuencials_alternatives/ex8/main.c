#include <stdio.h>
#include <assert.h>

void calcular_min_rectangle(double ax1, double ay1, double ax2, double ay2, double bx1, double by1, double bx2, double by2, double *rx1, double *ry1, double *rx2, double *ry2);

int main(void) {
	
	double rx1, ry1, rx2, ry2;
	/*
	calcular_min_rectangle(1.0, 3.0, 3.0, 5.0,   2.0, 1.0, 4.0, 4.0,   &rx1, &ry1, &rx2, &ry2);
    	assert(rx1 == 1.0 && ry1 == 1.0 && rx2 == 4.0 && ry2 == 5.0);

    	calcular_min_rectangle(0.0, 0.0, 10.0, 10.0,   2.0, 2.0, 5.0, 5.0,   &rx1, &ry1, &rx2, &ry2);
    	assert(rx1 == 0.0 && ry1 == 0.0 && rx2 == 10.0 && ry2 == 10.0);

    	calcular_min_rectangle(0.0, 0.0, 2.0, 2.0,   10.0, 10.0, 12.0, 12.0,   &rx1, &ry1, &rx2, &ry2);
    	assert(rx1 == 0.0 && ry1 == 0.0 && rx2 == 12.0 && ry2 == 12.0);

    	calcular_min_rectangle(1.5, 1.5, 4.5, 4.5,   1.5, 1.5, 4.5, 4.5,   &rx1, &ry1, &rx2, &ry2);
    	assert(rx1 == 1.5 && ry1 == 1.5 && rx2 == 4.5 && ry2 == 4.5);

    	calcular_min_rectangle(-5.0, -5.0, -1.0, -1.0,   -3.0, -8.0, 2.0, -2.0,   &rx1, &ry1, &rx2, &ry2);
    	assert(rx1 == -5.0 && ry1 == -8.0 && rx2 == 2.0 && ry2 == -1.0);	
    	printf("Tots els casos de prova han passat!\n");
	*/

	double ax1, ay1, ax2, ay2, bx1, by1, bx2, by2;
	printf("Introdueix les coordenades del vèrtex inferior esquerre del primer rectangle (x y): ");
	if (scanf("%lf %lf", &ax1, &ay1) != 2) {
		printf("Les coordenades que has introduit no son vàlides.\n");
		return 1;
	}

	printf("Introdueix les coordenades del vèrtex superior dret del primer rectangle (x y): ");
	if (scanf("%lf %lf", &ax2, &ay2) != 2) {
		printf("Les coordenades que has introduit no son vàlides.\n");
		return 1;
	}

	printf("Introdueix les coordenades del vèrtex inferior esquerre del segon rectangle (x y): ");
	if (scanf("%lf %lf", &bx1, &by1) != 2) {
		printf("Les coordenades que has introduit no son vàlides.\n");
		return 1;
	}

	printf("Introdueix les coordenades del vèrtex superior dret del segon rectangle (x y): ");
	if (scanf("%lf %lf", &bx2, &by2) != 2) {
		printf("Les coordenades que has introduit no son vàlides.\n");
		return 1;
	}
	
	calcular_min_rectangle(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2, &rx1, &ry1, &rx2, &ry2);	
	printf("El rectangle mínim te el vèrtex inferior esquerre a (%.1f %.1f) i el vèrtex superior dret a (%.1f %.1f).\n", rx1, ry1, rx2, ry2);
	
	return 0;
}
