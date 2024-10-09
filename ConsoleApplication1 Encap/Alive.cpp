#include "Alive.h"
#include <iostream>

Alive::Alive(float hp) {

};

float Alive::SetHpm(float Hpm) {
	return Hpm;
};

void Alive::SetHp(float Hpi) {
	hp = Hpi;
};

void Alive::Damage(float dmg) {
	hp -= dmg;
	if (hp < 0) {
		hp = 0;
	};

};
