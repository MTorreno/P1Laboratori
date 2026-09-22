#include <stdio.h>
#include <assert.h>

int calcular_any_naixement(int edat);

int calcular_any_doble_edat(int edat);

int main(void) {
	/*
	assert(calcular_any_naixement(18) == 2008);
	assert(calcular_any_naixement(70) == 1956);
	assert(calcular_any_naixement(55) == 1971);
	assert(calcular_any_doble_edat(18) == 2044);
	assert(calcular_any_doble_edat(70) == 2096);
	assert(calcular_any_doble_edat(55) == 2081);
	printf("Tots els casos de prova han passat!\n");
	*/
	int edat;
	printf("Introdueix la teva edat: ");
	if (scanf("%d", &edat) == 1) {
		if (edat >= 1 && edat <=120) {
			printf("Vas néixer l'any %d i l'any %d tindràs el doble d'edat.\n", calcular_any_naixement(edat), calcular_any_doble_edat(edat));
		} else {
			printf("L'edat introduida ha de ser entre 1 i 120 (amdos inclosos).\n");
		}
	} else {
		printf("L'edat introduida no es un nombre enter.\n");
	}

	return 0;
}
