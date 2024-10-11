#pragma once
#include "Entite2.h"
#include "Alive.h"
#include "Abstraite.h"


class Mob : public Entite2, public Alive, public Abstraite
{
public:

	float x;
	float y;
	float Hp;
	Mob(float i, float j, float Hpm, Vector2 direction);

	virtual void Set_XY_HPM_DIR(float i, float j, float Hpm, Vector2 direction) {
		SetPos(i, j);
		SetHpm(Hpm);
		Deplacer(direction);

	};

	virtual void SetHP(float Hpi) {
		SetHp(Hpi);
	}

	virtual void Damage(float dmg) override;
	virtual void Deplacer(Vector2 direction) override;
	std::string ToString();
};


