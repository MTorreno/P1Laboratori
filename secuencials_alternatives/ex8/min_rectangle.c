void calcular_min_rectangle(double ax1, double ay1, double ax2, double ay2, double bx1, double by1, double bx2, double by2, double *rx1, double *ry1, double *rx2, double *ry2) {
	
	if (ax1 <= bx1) {
		*rx1 = ax1;
	} else {
		*rx1 = bx1;
	}

	if (ay1 <= by1) {
		*ry1 = ay1;
	} else {
		*ry1 = by1;
	}

	if (ax2 >= bx2) {
		*rx2 = ax2;
	} else {
		*rx2 = bx2;
	}

	if (ay2 >= by2) {
		*ry2 = ay2;
	} else {
		*ry2 = by2;
	}

}
