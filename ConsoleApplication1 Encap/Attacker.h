#pragma once
#include "Alive.h"

class Attacker
{
public:

	virtual void attack(Alive* target) = 0;
};

