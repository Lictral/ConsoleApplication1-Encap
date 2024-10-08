#include "Entite2.h"
#include <iostream>

Entite2::Entite2(float i, float j) {
	x = i;
	y = j;
};

float Entite2::ToGetX() {
	return x;
};

float Entite2::ToGetY() {
	return y;
};

void Entite2::SetX(float i) {
	x = i;
};

void Entite2::SetY(float j) {
	y = j;
};

