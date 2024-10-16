#include "Mob.h"
#include "sstream"

Mob::Mob(float i, float j, float Hpm, Vector2 direction) : Entite2(pos), Alive(Hpm), Abstraite(direction, 50) {
	x = i;
	y = j;
	Hp = Hpm;
};

std::string Mob::ToString() {
	std::stringstream stream;

	stream << "Static Object just created at x " << ToGetPos().GetX() << " <- ici la position X et ici la position y -> " << ToGetPos().GetY() << " \nIci le Nombre de points de vies maximum -> " << GetHpm() << " \nDirection x = " << " ici la direction x -> " << pos.GetX() << " ici la direction y -> " << pos.GetY();

	return stream.str();


};

void Mob::Damage(float dmg) {
	std::cout << "Mob just die" << std::endl;
};

void Mob::Deplacer(Vector2 direction) {
	std::cout << "\nMob move to x" << ToGetPos().GetX() << " <- ici la position X et ici la position y -> " << ToGetPos().GetY() << "\n";
}

