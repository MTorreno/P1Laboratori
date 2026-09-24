#include <stdbool.h>

bool punt_dins_rectangle(double x1, double y1, double x2, double y2, double px, double py) {
	
	if ((x1 <= px) && (px <= x2) && (y1 <= py) && (py <= y2)) {
		return true;
	} else {
		return false;
	}
}
