#include <stdbool.h>

bool punt_dins_circumferencia(double cx, double cy, double r, double px, double py) {
    // Calculamos las diferencias (las distancias en cada eje)
    double dx = px - cx;
    double dy = py - cy;
    
    // Aplicamos la fórmula: (dx^2 + dy^2) <= r^2
    return (dx * dx) + (dy * dy) <= (r * r);
}
