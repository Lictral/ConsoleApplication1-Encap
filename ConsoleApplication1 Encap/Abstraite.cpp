#include "Abstraite.h"
#include <iostream>
#include <cmath>

Abstraite::Abstraite(double i, double j, float v) {
	x = i;
	y = j;
	double norme = std::sqrt(x * x + y * y);
};