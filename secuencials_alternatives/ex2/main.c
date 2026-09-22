#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool es_digit(int n);

int main(void) {
	/*
	assert(es_digit(22) == false);
	assert(es_digit(-1) == false);
	assert(es_digit(3) == true);
	assert(es_digit(80) == false);
	assert(es_digit(0) == true);
	printf("Tots els casos de prova han passat!\n");
	*/
	
	int numero;
	printf("Introdueix un nombre enter: ");
	if (scanf("%d", &numero) == 1) {
		if (es_digit(numero) == true){
			printf("Es un digit.\n");
		} else {
			printf("No es un digit.\n");
		}
	} else {
		printf("El nombre introduit no es un nombre enter vàlid.\n");
	}
	return 0;

}
