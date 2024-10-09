#pragma once
#include <iostream>
#include <string>
#include "vecteur2.h"

class Entite2{
	public:
		Vector2 pos;

		Entite2(Vector2 position);

		virtual Vector2 ToGetPos();

		virtual void SetPos(float i, float j);

		std::string ToString();


};



