#pragma once
#include "Entite2.h"
#include "Alive.h"


class BreakableObject : public Entite2, public Alive
{
	public :

		float x;
		float y;
		float Hp;
		BreakableObject(float i, float j, float Hpm);

		virtual void Set_XY_HPM(float i, float j, float Hpm){
			SetPos(i, j);
			SetHpm(Hpm);
		};

		virtual void SetHP(float Hpi) {
			SetHp(Hpi);
		}

		virtual void  Damage(float dmg) override;

		std::string ToString();
};

