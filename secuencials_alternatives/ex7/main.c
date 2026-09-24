#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool punt_dins_rectangle(double x1, double y1, double x2, double y2, double px, double py);

int main() {
        /*
        assert(punt_dins_rectangle(0.0, 0.0, 5.0, 4.0, 2.0, 3.0) == true);
        assert(punt_dins_rectangle(-1.0, 1.0, 2.0, 4.0, -2.0, 2.0) == false);
        assert(punt_dins_rectangle(9.0, 9.0, 15.0, 15.0, 9.0, 9.0) == true);
        assert(punt_dins_rectangle(0.0, 0.0, 1.0, 1.0, 0.0, 1.1) == false);

        printf("Tots els casos de prova han passat!\n");
	*/
	
	double x1, y1, x2, y2, px, py;
	printf("Introdueix les coordenades del vèrtex inferior esquerre (x y): ");
        if (scanf("%lf %lf", &x1, &y1) != 2) {
                printf("Error: Has d'introduir dos números vàlids.\n");
                return 1;
        }

        printf("Introdueix les coordenades del vèrtex superior dret (x y): ");
        if (scanf("%lf %lf", &x2, &y2) != 2) {
                printf("Error: Has d'introduir dos números vàlids.\n");
                return 1;
        }

        printf("Introdueix les coordenades del punt (x y): ");
        if (scanf("%lf %lf", &px, &py) != 2) {
                printf("Error: Has d'introduir dos números vàlids.\n");
                return 1;
        }

	if (punt_dins_rectangle(x1, y1, x2, y2, px, py) == true) {
		printf("El punt es dins del rectangle.\n");
	} else {
		printf("El punt NO es dins del rectangle.\n");
	}

	return 0;
		
}
