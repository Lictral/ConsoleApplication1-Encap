#pragma once
#include <iostream>
#include <string>
#include "Entite2.h"
#include "vecteur2.h"


class StaticObjet : public Entite2
{
	public:
		float x;
		float y;
		StaticObjet(float i, float j);

		virtual void SetXY(float i, float j){
			SetPos(i, j);
		};
		
		std::string ToString();
};

