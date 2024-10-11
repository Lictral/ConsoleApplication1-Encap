#include "BreakableObject.h"
#include "sstream"

BreakableObject::BreakableObject(float i, float j, float Hpm ) : Entite2(pos), Alive(Hpm) {
	x = i;
	y = j;
	Hp = Hpm;
};

std::string BreakableObject::ToString() {
	std::stringstream stream;

	stream << "Static Object just created at x " << ToGetPos().GetX() << " <- ici la position X et ici la position y -> " << ToGetPos().GetY() << " Ici le Nombre de points de vies maximum-> " << GetHpm();

	return stream.str();


};

void BreakableObject::Damage(float dmg) {
	std::cout << "Breakable Object just broke" << std::endl;
}
