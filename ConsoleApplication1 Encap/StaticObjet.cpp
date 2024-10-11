#include "StaticObjet.h"
#include <sstream>
#include "Entite2.h"

StaticObjet::StaticObjet(float i, float j) : Entite2(pos) {
	x = i;
	y = j;

};

std::string StaticObjet::ToString() {
	std::stringstream stream;

	stream << "Static Object just created at x " << ToGetPos().GetX() << "<- ici la position X et ici la position y -> " << ToGetPos().GetY();

	return stream.str();

}


