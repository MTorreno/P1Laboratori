int maxof3(int a, int b, int c) {
	
	int resultat;
	if (a > b) {
		if (a > c) {
			resultat = a;
		} else {
			resultat = c;
		}
	} else if (b > c) {
		resultat = b;
	} else {
		resultat = c;
	}
	
	return resultat;
}
