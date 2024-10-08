#pragma once
#include <iostream>
#include <string>

class Entite2{
	public:
		float x;
		float y;

		Entite2(float i, float j);

		virtual float ToGetX();
		virtual float ToGetY();

		virtual void SetX(float i);
		virtual void SetY(float j);

};



