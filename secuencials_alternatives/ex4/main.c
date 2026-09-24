#include <stdio.h>
#include <assert.h>

int maxof3(int a, int b, int c);

int main(void) {
	/*
	assert(maxof3(2,10,6) == 10);
	assert(maxof3(55,29,5) == 55);
	assert(maxof3(-2,10,30) == 30);
	assert(maxof3(-5,-10,-90) == -5);	
	assert(maxof3(103,15,999) == 999);
	printf("Tots el casos de prova han passat!\n");
	*/
	
	int a, b, c;	
	printf("Introdueix 3 numeros enters (separats per espais): ");
	if (scanf("%d %d %d", &a ,&b ,&c) == 3) {
		printf("El numero més gran és %d.\n", maxof3(a, b, c));
	} else {
		printf("Els numeros que has introduit no son válids.\n");
	}

	return 0;
}
