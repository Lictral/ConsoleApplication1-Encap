#include "Attacker.h"
#include <iostream>

void Attacker::attack(Alive* target){
	target->Damage(10);
}
