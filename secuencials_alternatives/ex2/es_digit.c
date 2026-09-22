#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool es_digit(int n) {
	
	bool resultat = false;
	if (abs(n) >=0 && abs(n) <= 9) {
		resultat = true;
	}

	return resultat;
}
