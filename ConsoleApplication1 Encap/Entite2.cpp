#include "Entite2.h"
#include <iostream>
#include <sstream>

Entite2::Entite2(Vector2 position) : pos(position) {

};

Vector2 Entite2::ToGetPos() {
	return pos;
};



void Entite2::SetPos(float i, float j) {
	Vector2 position(i, j);
	pos = position;
};

std::string Entite2::ToString() {
	std::stringstream stream;

	stream << "Point: \nx: " << pos.GetX() << " \ny: " << pos.GetY();

	return stream.str();

}


