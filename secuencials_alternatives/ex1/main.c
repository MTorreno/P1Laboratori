#include <stdio.h>
#include <assert.h>

int calcular_ultim_digit(int n);

int main(void) {
	/*
	assert(calcular_ultim_digit(27) == 7);
	assert(calcular_ultim_digit(10) == 0);
	assert(calcular_ultim_digit(109) == 9);
	assert(calcular_ultim_digit(-82) == 2);
	assert(calcular_ultim_digit(0) == 0);
	printf("Tots els casos de prova han passat!");
	*/
	int numero;
	printf("Introdueix un nombre enter: ");
	if (scanf("%d", &numero) == 1) {
		printf("L'ultima xifra es %d\n", calcular_ultim_digit(numero));
	} else {
		printf("El nombre introduit no es un nombre enter vàlid.\n");
	}

	return 0;
}
