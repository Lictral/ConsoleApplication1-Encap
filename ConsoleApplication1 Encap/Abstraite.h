#pragma once
#include <iostream>
#include <string>
class Abstraite
{

	double x;
	double y;
	float vitesse;
	Abstraite(double i, double j, float v);


public :
	virtual void direction();
	virtual void speed();
	virtual void deplacer();

};

